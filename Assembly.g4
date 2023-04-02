grammar Assembly;

options {
    language=Cpp;
}

assembly: metadata
          globals?
          method*
          class*
         ;
metadata: 'minorVersion' ':' NUMBER
          'majorVersion' ':' NUMBER
          'type' ':' type=('XP'|'SLL')
          'imports' ':' array
         ;

globals: 'globals' ':' global* ';';
global: type=('VAR'|'CONST') ID ':' STRING;

method: entry='entry'? 'method' STRING ':'
            ('args' ':' arg* ';')?
            ('locals' ('[' 'closureStart' ':' NUMBER ']')? ':' local* ';')?
            'maxstack' ':' NUMBER
            ('code' ':' line* ';')?
            ('exceptionTable' ':' exceptionItem* ';')? ';';
arg: type=('VALUE'|'REF') ID ':' STRING;
local: type=('VAR'|'CONST') ID ':' STRING;
line: (ID ':')? ID value?;
exceptionItem: ID '-' ID '->' ID ':' STRING;

class: 'class' STRING ':'
            'type' ':' type=('CLASS' | 'INTERFACE' | 'ENUM' | 'ANNOTATION') ';'
            'accessors' ':' accessor*
            fields?
            method*
            class* ';';
accessor: 'PRIVATE'
        | 'INTERNAL'
        | 'PACKAGE_PRIVATE'
        | 'PROTECTED'
        | 'PUBLIC'
        | 'ABSTRACT'
        | 'FINAL'
        | 'STATIC'
        | 'INLINE';
fields: 'fields' ':' field* ';';
field: type=('VAR'|'CONST') STRING ':' STRING;

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
