%{
#include "stdlib.h"
#include "stdio.h"
#include "synt.tab.h"
#include "compFonction.h"
extern nb_line;
%}

idf [a-zA-Z]((_[a-zA-Z0-9]+)*|[a-zA-Z0-9]*)
cst  ([1-9][0-9]*|0)(\.[0-9]+)?

chaine  \"([^\"])*\"


%%
import return mc_imp;
ISIL.lang return mc_bibl;
ISIL.io return mc_bibio;
program return mc_pgm;
var return mc_var;
const return mc_cst;
int {  yylval.str=strdup(yytext); 
         return mc_int;}
Float {  yylval.str=strdup(yytext); 
         return mc_float;}
char  {  yylval.str=strdup(yytext); 
         return mc_char;} 
For return mc_for;
In return mc_in;
Out return mc_out;
begin return mc_begin;
end return mc_end;

{idf} { if(yyleng>25) printf("lexical error in line : %d , in %s\n idf too big ",nb_line,yytext) ; 
       else{yylval.str=strdup(yytext);
                          Insert(yytext,"idf");
                                           return idf;}}
{cst} {yylval.entier=atoi(yytext); return cst;}
{chaine}  {yylval.str=strdup(yytext); return ch;}
; return pvg;
= return aff;
, return vg;
"[" return crch_ouv;
"]" return crch_ferm;
"+" return add;
"-" return moins ;
"/" return devis;
"*" return multip;
"(" return parOuv ;
")" return parFerm;
"<" return inf;
\" return guillemets ;
"." return point ;


[ \t]
##[^#]*##
\n {nb_line++;}
. printf("lexical error in line : %d\n",nb_line);
