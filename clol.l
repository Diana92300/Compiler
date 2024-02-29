%{
#include <stdio.h>
#include "clol.tab.h"
%}
%option noyywrap
%%
"start_classes" {return START_CLS;}
"stop_classes" {return STOP_CLS;}
"start_global_variables" {return START_GBVARS;}
"stop_global_variables" {return STOP_GBVARS;}
"start_global_functions" {return START_GBFNS;}
"stop_global_functions" {return STOP_GBFNS;}
"start_main" {return START_MAIN;}
"stop_main" {return STOP_MAIN;}
"class" {yylval.string = strdup(yytext); return CLASS;}
"const" {yylval.string = strdup(yytext); return CONST;}
"return" {yylval.string = strdup(yytext); return RETURN;}
"if" {yylval.string = strdup(yytext); return IF;}
"while" {yylval.string = strdup(yytext); return WHILE;}
"for" {yylval.string = strdup(yytext); return FOR;}
"Eval" {yylval.string = strdup(yytext); return EVAL;}
"TypeOf" {yylval.string = strdup(yytext); return TYPEOF;}
"int"|"float"|"char"|"string"|"bool" {yylval.string = strdup(yytext); return TYPE;}
"true"|"false" {yylval.string = strdup(yytext); return BOOL;}
"->" {yylval.string = strdup(yytext); return CLASS_OP;}
"<"|">"|"<="|">="|"=="|"!=" {yylval.string = strdup(yytext); return BOOL_OP;}
"!" {yylval.string = strdup(yytext); return NOT;}
"&&"|"||" {yylval.string = strdup(yytext); return LOGIC_GATE;}
[a-zA-Z_][a-zA-Z0-9_]* {yylval.string = strdup(yytext); return ID;}
"=" {yylval.string = strdup(yytext); return ASSIGN;}
"+"|"-" {yylval.string = strdup(yytext); return OP;}
"*"|"/" {yylval.string = strdup(yytext); return PRIO_OP;}
[0-9]*\.[0-9]*|-[0-9]*\.[0-9]* {yylval.string = strdup(yytext); return FLOAT;}
[0-9]*|-[0-9]* {yylval.string = strdup(yytext); return INT;}
\".*\" {yylval.string = strdup(yytext); return STRING;}
\'.\' {yylval.string = strdup(yytext); return CHAR;}
[\t] ;
" " ;
\n {yylineno++;}
. {return yytext[0];}
