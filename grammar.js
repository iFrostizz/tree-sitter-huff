module.exports = grammar({
  name: 'huff',
  
  extras: $ => [
    $.comment,
    /[\s\uFEFF\u2060\u200B\u00A0]/ 
  ],
  rules: {
    source_file: $ => repeat($.definition),
    definition: $ => choice(
      $.macro_definition,
      $.function_definition,
      $.interface_definition,
    ),
    _declaration: $ => seq(
      $.identifier,
      $.parameters,
    ),
    _def: $ => seq(
      $._declaration,
      ' = ',
      $.takes_parameters,
      $.returns_parameters,
      $.block
    ),
    _def_params: $ => seq(
      $._declaration,
      $.visibility,
      $.return_parameters,
    ),
    def_val: $ => '#define',
    macro_definition: $ => seq(
      '#define macro ',
      $._def,
    ),
    function_definition: $ => seq(
      '#define fn ',
      $._def,
    ),
    interface_definition: $ => seq(
      '#define function ',
      $._def_params,
    ),
    return_parameters: $ => seq(
      ' returns ',
      $.parameters,
    ),
    takes_parameters: $ => /takes\s?[(][0-9]+[)]/,
    returns_parameters: $ => /returns\s?[(][0-9]+[)]/,
    block: $ => "{}",
    // identifier: $ => /([A-Za-z]+)\(\)( = )/,
    identifier: $ => /([A-Za-z]+)/,
    parameters: $ => /[(](?:[A-Za-z0-9\[\],\s]+)?[)]/,
    visibility: $ => "pure",
    comment: $ => token(
                    choice(
                            seq('//', /([^\r\n])*/),
                            seq(
                                  '/*',
                                  /[^*]*\*+([^/*][^*]*\*+)*/,
                                  '/'
                              )
                        )
              ),
            }
});

