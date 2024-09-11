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

global: type=('VAR'|'CONST') STRING ':' STRING;

method: kind=('entry'|'init')? 'method' STRING ':'
            ('args' ':' arg* ';')?
            ('locals' ('[' 'closureStart' ':' NUMBER ']')? ':' local* ';')?
            'maxstack' ':' NUMBER ';'
            ('code' ':' line* ';')?
            ('exceptionTable' ':' exceptionItem* ';')? ';';

arg: STRING ':' STRING;
local: STRING ':' STRING;
line: (label=LABEL ':')? opcode=ID (value|dest=LABEL)?;
exceptionItem: ID '-' ID '->' ID ':' STRING;

class: 'class' STRING ':'
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
field: accessor* type=('VAR'|'CONST') STRING ':' STRING;

value: NUMBER | STRING | CSTRING | array | float;
array: '[' (value (',' value)* ','?)? ']';
float: NUMBER '.' NUMBER
     | NUMBER '.'
     | '.' NUMBER
     ;

NUMBER: [0-9]+;
STRING: '"'.*?'"';
CSTRING: '\''.'\'';
ID: [a-zA-Z_][a-zA-Z0-9_!@#$%&]+;
LABEL: '$' [a-zA-Z_][a-zA-Z0-9_]+;
WS: [ \t\r\n]+ -> skip;
COMMENT: '#' ~[\n]* -> skip;
