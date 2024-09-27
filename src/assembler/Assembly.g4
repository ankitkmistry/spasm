grammar Assembly;

options {
    language=Cpp;
}

assembly: ('module' ':' module=ID)
          ('imports' ':' array)?
          ('globals' ':' global* ';')?
          method*
          class*
          EOF
         ;

global: type=('VAR'|'CONST') name ':' signature;

method: kind=('entry'|'init')? 'method' signature ':'
            ('args' ':' arg* ';')?
            ('locals' ('[' 'closureStart' ':' NUMBER ']')? ':' local* ';')?
            'maxstack' ':' NUMBER ';'
            ('code' ':' line* ';')?
            ('exceptionTable' ':' exceptionItem* ';')? ';';

arg: name ':' signature;
local: name ':' signature;
line: (label=LABEL ':')? opcode=ID (value|dest=LABEL)?;
exceptionItem: ID '-' ID '->' ID ':' signature;

class: 'class' signature ':'
            'type' ':' type=('CLASS' | 'INTERFACE' | 'ENUM' | 'ANNOTATION') ';'
            'accessors' ':' accessor*
            ('supers' ':' supers=array)?
            ('fields' ':' field* ';')?
            method*
            class* ';';

accessor: modifier=('PRIVATE'
        | 'INTERNAL'
        | 'PACKAGE_PRIVATE'
        | 'PROTECTED'
        | 'PUBLIC'
        | 'ABSTRACT'
        | 'FINAL'
        | 'STATIC'
        | 'INLINE');
field: accessor* type=('VAR'|'CONST') name ':' signature;

value: NUMBER | STRING | CSTRING | array | float | signature;
array: '[' (value (',' value)* ','?)? ']';
float: NUMBER '.' NUMBER
     | NUMBER '.'
     | '.' NUMBER
     ;

name: ID | STRING;

signature: signModule ('.' (signClass | signMethod))*
         | ('.' (signClass | signMethod))+
         | '<' ID '>';
signModule: ID ('::' ID)*;
signClass: ID signTypeParams?;
signMethod: ID signTypeParams? signParams;
signParams: '(' (signParam (',' signParam)*)? ')';
signParam: (signModule? ('.' signClass)+ | '<' ID '>') signParams?;
signTypeParams: '<' ID(','ID)* '>';

NUMBER: [0-9]+;
STRING: '"'.*?'"';
CSTRING: '\''.'\'';
ID: [a-zA-Z_][a-zA-Z0-9_!@#$%&]*;
LABEL: '$' [a-zA-Z_][a-zA-Z0-9_]+;
WS: [ \t\r\n]+ -> skip;
COMMENT: '#' ~[\n]* -> skip;
