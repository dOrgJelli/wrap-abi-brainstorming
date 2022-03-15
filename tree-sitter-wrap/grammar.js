module.exports = grammar({
  name: 'wrap',

  // extras: $ => [' ', "\t", "\n"],
  extras: ($) => [/[\s\uFEFF\u2060\u200B\u00A0]/, $.Comma],

  word: ($) => $.Name,

  rules: {

    // Structure

    File: ($) => $.Document,
    Document: ($) => repeat1($.Definition),
    Definition: ($) =>
      choice(
        $.TypeDefinition,
        $.DependencyDefinition,
        $.CommentDefinition,
      ),
    TypeDefinition: ($) =>
      choice(
        $.EnumTypeDefinition,
      ),
    DependencyDefinition: ($) =>
      choice(
        $.ExternTypeDefinition,
        $.IncludeTypeDefinition
      ),
    CommentDefinition: ($) =>
        choice(
          $.MultiLineCommentLiteral,
          $.SingleLineCommentLiteral,
        ),
    TypeName: ($) => /[A-Z][_0-9A-Za-z]*/,

    // Type Definitions

    EnumTypeDefinition: ($) =>
      prec.right(
        1,
        seq(
          'enum',
          $.TypeName,
          optional($.EnumValuesDefinition)
        )
      ),
    EnumValuesDefinition: ($) => seq('{', repeat1($.EnumValueDefinition), '}'),
    EnumValueDefinition: ($) =>
      seq($.EnumValue),
    EnumValue: ($) => $.Name, // TODO but not `true` or `false` or `null`

    // Dependency Definitions

    ExternTypeDefinition: ($) =>
      prec.right(
        1,
        seq(
          'extern',
          $.ExternNamespace,
          optional($.ExternValuesDefinition),
          'from',
          $.ExternUri
        )
      ),
    ExternNamespace: ($) => $.TypeName,
    ExternValuesDefinition: ($) => seq('{', repeat1($.ExternValueDefinition), '}'),
    ExternValueDefinition: ($) =>
      seq($.ExternValue),
    ExternValue: ($) => $.TypeName,
    ExternUri: ($) => $.StringLiteral,

    IncludeTypeDefinition: ($) =>
      prec.right(
        1,
        seq(
          'include',
          optional(
            seq($.IncludeValuesDefinition, 'from')
          ),
          $.IncludePath
        )
      ),
    IncludeValuesDefinition: ($) => seq('{', repeat1($.IncludeValueDefinition), '}'),
    IncludeValueDefinition: ($) =>
      seq($.IncludeValue),
    IncludeValue: ($) => $.TypeName,
    IncludePath: ($) => $.StringLiteral,

    // Literals

    StringLiteral: ($) =>
      seq('"', /[^"\\\n]*/, '"'),

    MultiLineCommentLiteral: ($) =>
      seq('/*', /[^*/]*/, '*/'),

    SingleLineCommentLiteral: ($) =>
      seq(choice('//', '#'), /[^\n]*/, '\n'),

    // Readability

    Name: ($) => /[_A-Za-z][_0-9A-Za-z]*/,
    Comma: ($) => ',',
    SemiColon: ($) => ';',
  },
});
