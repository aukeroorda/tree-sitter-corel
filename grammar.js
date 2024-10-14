module.exports = grammar({
  name: "corel",

  rules: {
    source_file: ($) =>
      optional(
        choice(
          // TODO This is where the natural entry point of the language is, but
          // TODO this is made a 'choice' to be able to debug non-root nodes as well

          // Test cases
          seq(
            /~/, // Test case
            choice(
              seq(
                /.*/,
                choice(
                  $.exact_value,
                  $.fraction,
                  $.natural_number,
                )
              ),
              seq(
                "TEST_RANGE",
                $.range,
              ),
              seq(
                "TEST_EXACT_VALUE",
                $.exact_value,
              ),
              seq(
                "TEST_NATURAL_NUMBER",
                $.natural_number,
              ),
              seq(
                "TEST_FRACTION",
                $.fraction,
              ),
            ),
            /~.*/ // end of test case
          )
        ),
      ),

    // NumberOrRange is either a single ExactValue, or a range: ExactValue "-" ExactValue
    number_or_range: ($) => choice(
      field("number", $.exact_value),
      field("range", $.range)
    ),

    range: ($) => seq(
      field("lower", $.exact_value),
      "-",
      field("upper", $.exact_value)
    ),

    // ExactValue is either a single natural number, fraction, or a natural number followed by a fraction
    // - "4"
    // - "1/3"
    // - "2 1/2"
    exact_value: ($) => prec.left(choice(
      field("sole_integral", $.natural_number),
      field("mixed", seq($.natural_number, $.fraction)),
      field("sole_fraction", $.fraction)
    )),

    // Fractions of the form "1/3", no whitespace allowed
    fraction: ($) => seq(
      field('numerator', $.natural_number),
      "/",
      field('denominator', $.natural_number)), //TODO Make these immediate? NOTE: Only when this improves parsing, e.g. when it prevents certain parsing problems

    // Natural numbers, so no decimals or negatives
    natural_number: ($) => /[1-9](\d)?/,
  },

  // conflicts: ($) => [[
  //   $.exact_value, $.fraction, $.natural_number
  // ]]
});
