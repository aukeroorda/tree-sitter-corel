module.exports = grammar({
  name: "corel",

  rules: {
    source_file: ($) =>
      optional(
        choice(
          // TODO This is where the natural entry point of the language is, but
          // TODO this is made a 'choice' to be able to debug non-root nodes as well
          // $.recipe,

          // Test cases
          seq(
            /~/, // Test case
            choice(
              seq(
                "TEST_PRECEDENCE\n",
                choice(
                  $.range,
                  $.exact_value,
                  $.fraction,
                  $.natural_number,
                )
              ),
              seq(
                "TEST_RANGE\n",
                $.range,
              ),
              seq(
                "TEST_EXACT_VALUE\n",
                $.exact_value,
              ),
              seq(
                "TEST_NATURAL_NUMBER\n",
                $.natural_number,
              ),
              seq(
                "TEST_FRACTION\n",
                $.fraction,
              ),
            ),
            optional("\n"),
            /~.*[\n]*/ // end of test case
          )
        ),
      ),

    recipe: ($) => repeat1($._block),

    _block: ($) => choice($.paragraph, "\n"),

    // A paragraph contains inline content and is terminated by a blankline
    // (two newlines in a row).
    paragraph: ($) => seq(repeat1(seq($._inline, "\n")), "\n"),

    // The markup parser could separate block and inline parsing into separate steps,
    // but we'll do everything in one parser.
    _inline: ($) => repeat1(choice($.emphasis, $._text)),
    emphasis: ($) => prec.left(seq("_", $._inline, "_")),
    _text: (_) => /[^\n]/,


    // RestOfLine matches any text up until the newline
    rest_of_line: ($) => /.*[\n]/,


    // NumberOrRange is either a single ExactValue, or a range: ExactValue "-" ExactValue
    number_or_range: ($) => choice(
      $.exact_value,
      $.range
    ),

    range: ($) => seq(
      field("lower", $.exact_value),
      optional($._hwhitespace),
      // " ",
      token("-"),
      optional($._hwhitespace),
      field("upper", $.exact_value)
    ),

    // ExactValue is either a single natural number, fraction, or a natural number followed by a fraction
    // - "4"
    // - "1/3"
    // - "2 1/2"
    exact_value: ($) => prec.left(choice(
      field("sole_integral", $.natural_number),
      field("mixed", prec(2, seq($.natural_number, $._hwhitespace, $.fraction))), //not sure if this prec is desired, but fixes the issue of parsing 12 1/2 for now, which would otherwise be parsed as sole_integral followed by sole_fraction
      field("sole_fraction", $.fraction)
    )),

    // Fractions of the form "1/3", "2 / 4"
    fraction: ($) => seq(
      field('numerator', $.natural_number),
      optional($._hwhitespace),
      "/",
      optional($._hwhitespace),
      field('denominator', $.natural_number)),

    // Natural numbers, so no decimals or negatives
    natural_number: ($) => /[1-9](\d)?/,


    // horizontal whitespace
    _hwhitespace: $ => /[ \t]+/,
  },

  // The default value of extras is to accept whitespace. To control whitespace explicitly, specify extras: $ => [] in your grammar.
  // Skip carriage returns.
  extras: $ => ["\r"],

  // conflicts: ($) => [[
  //   $.exact_value, $.fraction, $.natural_number
  // ]]
});
