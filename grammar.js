module.exports = grammar({
  name: 'corel',

  rules: {
    // TODO: add the actual grammar rules
    // source_file: $ => 'hello'
    source_file: $ => optional(
      seq($.header,
        optional(
          seq(
            $.ingredients_block,
            // optional(
            //   $.instructions
            // )
          )
        )
      )
    ),

    // header: $ => seq('#', $._everything_but_newline),
    header: $ => /#.*/,
    ingredients_block: $ => seq(/##.*/, optional($.ingredients_list)),

    ingredients_list: $ => repeat1($.ingredient),
    ingredient: $ => seq('-', repeat1($.word)),

    word: $ => choice(
      'aha'
    ),

    _everything_but_newline: $ => /[^\n]+/
  }
});

