%{
#include <stdio.h>
#include <stdlib.h>

void yyerror(const char *s);
int yylex();
%}

%union {
    int intval;
}

%token <intval> NUMBER
%type <intval> expr term factor

%%

// Grammar rules
input:
    | input expr '\n' { printf("Result: %d\n", $2); }
    ;

expr:
    expr '+' term { $$ = $1 + $3; }
    | expr '-' term { $$ = $1 - $3; }
    | term { $$ = $1; }
    ;

term:
    term '*' factor { $$ = $1 * $3; }
    | term '/' factor {
        if ($3 == 0) {
            yyerror("division by zero");
            YYABORT;
        }
        $$ = $1 / $3;
    }
    | factor { $$ = $1; }
    ;

factor:
    '(' expr ')' { $$ = $2; }
    | NUMBER { $$ = $1; }
    ;

%%

// Error handling function
void yyerror(const char *s) {
    fprintf(stderr, "Error: %s\n", s);
}

// Main function
int main() {
    printf("Enter expressions (Ctrl+D to exit):\n");
    yyparse();
    return 0;
}