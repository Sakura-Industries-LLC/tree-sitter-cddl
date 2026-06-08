/**
 * @file Tree-sitter grammar for CDDL, the Concise Data Definition Language for CBOR and JSON data structures.
 * @author Steven Johnson <steven.johnson@sakuraindustries.net>
 * @license MIT OR Apache-2.0
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

function commaSep1(rule) {
  return seq(rule, repeat(seq(",", rule)));
}

export default grammar({
  name: "cddl",

  conflicts: ($) => [
    [$.expression, $.primary],
    [$.expression, $.sequence_expression],
  ],

  extras: ($) => [/[ \t\r\n\f]/, $.comment],

  word: ($) => $.identifier,

  rules: {
    source_file: ($) =>
      repeat(
        choice(
          $.standard_directive,
          $.doc_comment_block,
          $.custom_directive,
          $.comment,
          $.rule,
        ),
      ),

    standard_directive: ($) => token(seq(";#", /[^\n]*/)),

    doc_comment: ($) => token(seq(";!", /[^\n]*/)),

    doc_comment_block: ($) =>
      prec.left(seq($.doc_comment, repeat($.doc_comment))),

    custom_directive: ($) => token(seq(";@", /[^\n]*/)),

    comment: ($) => token(choice(";", seq(";", /[^#!@\n]/, /[^\n]*/))),

    rule: ($) =>
      seq(
        field("name", $.rule_name),
        optional(field("params", $.generic_params)),
        "=",
        field("value", $.expression),
      ),

    rule_name: ($) => choice($.identifier, $.dotted_identifier),

    generic_params: ($) => seq("<", commaSep1($.identifier), ">"),

    expression: ($) =>
      choice(
        $.choice_expression,
        $.sequence_expression,
        $.ctlop_expression,
        $.group,
        $.paren_expression,
        $.tag_expression,
        $.primary,
      ),

    choice_expression: ($) =>
      prec.left(
        seq($.sequence_expression, repeat1(seq("/", $.sequence_expression))),
      ),

    sequence_expression: ($) => prec.left(seq($.primary, repeat($.primary))),

    ctlop_expression: ($) => seq($.primary, $.ctlop, $.primary),

    primary: ($) =>
      choice(
        $.reference,
        $.number,
        $.string,
        $.byte_string,
        $.simple_value,
        $.keyword,
        $.group,
        $.paren_expression,
        $.tag_expression,
      ),

    paren_expression: ($) => seq("(", $.expression, ")"),

    group: ($) => choice($.array_group, $.map_group),

    array_group: ($) =>
      seq("[", optional(commaSep1($.expression)), optional(","), "]"),

    map_group: ($) =>
      seq("{", optional(commaSep1($.map_entry)), optional(","), "}"),

    map_entry: ($) =>
      seq(field("key", $.member_key), ":", field("value", $.expression)),

    member_key: ($) =>
      choice(
        $.identifier,
        $.dotted_identifier,
        $.number,
        $.string,
        $.byte_string,
      ),

    tag_expression: ($) =>
      prec.right(seq("#", $.number, optional(seq("(", $.expression, ")")))),

    reference: ($) => choice($.identifier, $.dotted_identifier),

    ctlop: ($) =>
      token(
        choice(
          ".size",
          ".bits",
          ".regexp",
          ".json",
          ".cat",
          ".det",
          ".join",
          ".printf",
          ".plus",
          ".b64u",
          ".b64u-sloppy",
          ".b64c",
          ".b64c-sloppy",
          ".hex",
          ".hexlc",
          ".hexuc",
          ".b32",
          ".h32",
          ".b45",
          ".base10",
          ".abnf",
          ".abnfb",
          ".x-enc",
          ".x-hash",
          ".x-enc.abnf",
          ".x-enc.abnfb",
          ".x-hash.abnf",
          ".x-hash.abnfb",
          ".cbor",
          ".cborseq",
          ".prefp",
          ".prefpseq",
          ".dtrm",
          ".dtrmseq",
          ".lt",
          ".le",
          ".gt",
          ".ge",
          ".eq",
          ".ne",
          ".and",
          ".default",
          ".within",
          ".sdnv",
          ".sdnvseq",
          ".oid",
          ".feature",
        ),
      ),

    dotted_identifier: ($) =>
      seq($.identifier, repeat1(seq(".", $.identifier))),

    identifier: ($) => token(/[A-Za-z_][A-Za-z0-9_-]*/),

    number: ($) =>
      token(
        choice(
          /-?(0|[1-9][0-9_]*)/,
          /-?(0|[1-9][0-9_]*)(\.[0-9_]+)?([eE][+-]?[0-9_]+)?/,
        ),
      ),

    string: ($) => token(seq('"', repeat(choice(/[^"\\\n]/, /\\./)), '"')),

    byte_string: ($) =>
      token(seq("h'", repeat(choice(/[0-9A-Fa-f ]/, /[0-9A-Fa-f]/)), "'")),

    simple_value: ($) => token(choice("true", "false", "null", "undefined")),

    keyword: ($) =>
      token(
        choice(
          "any",
          "bstr",
          "bytes",
          "tstr",
          "text",
          "uint",
          "nint",
          "int",
          "float",
          "bool",
          "value",
          "type",
          "group",
        ),
      ),
  },
});
