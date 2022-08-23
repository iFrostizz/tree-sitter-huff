module.exports = grammar({
  name: 'huff',

  rules: {
    source_file: $ => repeat($.definition),
    definition: $ => choice(
      $.macro_definition,
      $.function_definition
    ),
    _def: $ => seq(
      $.identifier,
      $.takes_parameters,
      $.returns_parameters,
      $.block
    ),
    macro_definition: $ => seq(
      '#define macro ',
      $._def,
    ),
    function_definition: $ => seq(
      '#define fn ',
      $._def,
    ),
    takes_parameters: $ => /takes\s?[(][0-9]+[)]/,
    returns_parameters: $ => /returns\s?[(][0-9]+[)]/,
    block: $ => "{}",
    identifier: $ => /([A-Za-z]+)\(\)( = )/,
  }
});

