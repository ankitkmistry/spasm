grammar Assembly;

options {
    language=Cpp;
}

assembly: ('imports' ':' array)?
          ('globals' ':' global* ';')?
          method*
          class*
         ;

global: type=('VAR'|'CONST') ID ':' STRING;

method: entry='entry'? 'method' STRING ':'
            ('args' ':' arg* ';')?
            ('locals' ('[' 'closureStart' ':' NUMBER ']')? ':' local* ';')?
            'maxstack' ':' NUMBER
            ('code' ':' line* ';')?
            ('exceptionTable' ':' exceptionItem* ';')? ';';
arg: type=('VALUE'|'REF') ID ':' STRING;
local: type=('VAR'|'CONST') ID ':' STRING;
line: (label=ID ':')? opcode=ID (value|dest=ID)?;
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
array: '[' (value (',' value)*)? ']';
float: NUMBER '.' NUMBER
     | NUMBER '.'
     | '.' NUMBER
     ;

NUMBER: [0-9]+;
STRING: '"'.*?'"';
CSTRING: '\''.'\'';
ID: [a-zA-Z][a-zA-Z0-9]+;
WS: [ \t\r\n]+ -> skip;
COMMENT: '#' ~[\n]* -> skip;
