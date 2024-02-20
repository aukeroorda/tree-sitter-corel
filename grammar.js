module.exports = grammar({
  name: "corel",

  rules: {
    // TODO: add the actual grammar rules
    // TODO Note on how to implement a unit-testing approach:
    // <@204173466713194496> a workaround I’ve done to enable more unit-testing approach is to create a special special token with distinct opening and closing markers that are unlikely/syntactically invalid in the context. Open the block with `-+=%tree-sitter-my-language-testing-start%=+-`and a similar ending pattern, use lines or whatever else for delimiters, then reference the leaf nodes I want to unit test. An interim solution could be adding a way to mark such nodes as being tests-only and automatically exclude it from a “release” parser? Or have a specific corpus test format for leaves outside their context? Not sure but I definitely empathize with wanting more support for a unit testing approach.

    // _expression_block: $ => seq(
    //   "tree-sitter-expression-block-start",
    //   $._newline,
    //   rep(
    //     optional($._expression),
    //     $._newline,
    //   ),
    //   "tree-sitter-expression-block-end",
    // ),
    // ^^^^ Something like this: at the top-level add a choice between:
    // the_normal_language | unit_test_1 | unit_test_2 etc., or a slightly more advanced grammar for unit tests can work as well. But this keeps the tests close to the root-node and therefore more modular
    // more context in https://discord.com/channels/1063097320771698699/1063097321648312354/1207450495220850720

    // source_file: $ => 'hello'
    source_file: ($) =>
      optional(
        seq(
          $.header,
          optional(
            seq(
              $.ingredients_block,
              // optional(
              //   $.instructions
              // )
            ),
          ),
        ),
      ),

    // header: $ => seq('#', $._everything_but_newline),
    header: ($) => /#.*/,
    ingredients_block: ($) => seq(/##.*/, optional($.ingredients_list)),

    ingredients_list: ($) => repeat1($.ingredient),
    ingredient: ($) => seq("-", repeat1($.word)),

    word: ($) =>
      choice(
        "aha",
      ),

    _everything_but_newline: ($) => /[^\n]+/,
  },
});
