%{
    char suavType [20];

    #include <stdbool.h>
    bool bibL=false;
    bool bibIo=false;
    int LangChaine;
    int cptIdf=0;
    int cptA=0;
    int cptOA=0;
    int i=0;
    int nb_line=1;
    int YN=0;
    double res;
    int tyidfar;
    int tyidf;
    
    int nbrAff=0;

    int  Sizevar(int Size){
    if (Size >32767 || Size < -32767){
       return 0;
    }else{
        return 1;
    }
}
char vaLTemp[20];
 
%}

%union {
    int entier;
    char* str;
   }


%token <str>idf mc_pgm mc_var mc_cst pvg <str>mc_int <str>mc_float <str>mc_char mc_begin mc_end aff <entier>cst  vg crch_ouv crch_ferm mc_imp mc_bibl mc_bibio add moins  devis multip mc_for parOuv parFerm inf  mc_in guillemets mc_out  point <str>ch  

%%
z: mc_imp ListBIB S | S { printf ("Syntaxicaly correct program\n"); YYACCEPT;}                    
;
S: mc_pgm idf mc_var ListDec  mc_cst ListConst  Corps{printf("Correct syntax\n"); YYACCEPT;} ;


ListBIB : BIB vg BIB | BIB ;
BIB : mc_bibio {bibIo =true }| mc_bibl {bibL=true} ;

ListConst : Typeidf idf aff cst vg ListConst { sprintf(vaLTemp,"%d",$4);InsertConst($2,vaLTemp);InsertType($2,suavType,1)}
          | Typeidf idf aff cst pvg { sprintf(vaLTemp,"%d",$4);InsertConst($2,vaLTemp);InsertType($2,suavType,1)}
          | Typeidf idf pvg  {InsertConst($2,"");InsertType($2,suavType,1)}
          | Typeidf idf vg ListConst {InsertConst($2,"");InsertType($2,suavType,1)};

ListDec:uneDec ListDec | uneDec;
uneDec: Typeidf listeparam pvg;
listeparam: idf vg listeparam  { if (doubleDeclaration($1)==1){ InsertType($1,suavType,1); }
                                 else printf("Semantic Error: double declaration de %s, in the line %d\n", $1, nb_line); }
           | idf crch_ouv cst crch_ferm vg listeparam  { if (doubleDeclaration($1)==1){ InsertType($1,suavType,$3); }
                                 else printf("Semantic Error: double declaration de %s, in the line %d\n", $1, nb_line); }                     
           | idf               { if ( doubleDeclaration($1)==1)InsertType($1,suavType,1);
                                 else printf("Semantic Error: double declaration de %s, in the line %d\n", $1, nb_line);}
           |idf crch_ouv cst crch_ferm  { if (doubleDeclaration($1)==1){ InsertType($1,suavType,$3); }
                                 else printf("Semantic Error: double declaration de %s, in the line %d\n", $1, nb_line); }  
;

Typeidf : mc_int { strcpy(suavType,$1);  }
          | mc_float { strcpy(suavType,$1);  }
          | mc_char { strcpy(suavType,$1);  }
;





Corps: mc_begin ListInst mc_end;
ListInst: uneInst ListInst | uneInst;
uneInst :  InstAff {if(bibIo=false)printf("Error : bib  ISIL.lang not declared to execut the instruction AFF in the line %d \n",nb_line);}
        | InstFor {if(bibIo=false)printf("Error : bib  ISIL.lang not declared to execut the instruction FOR in the line %d \n",nb_line);}
        |Lecture {if(bibIo==false) printf("Error : bib  ISIL.io not declared to execut the instruction IN in the line %d \n",nb_line);}
        |ecriture {if(bibIo==false) printf("Error : bib  ISIL.io not declared to execut the instruction OUT in the line %d \n",nb_line);}
;





listIdf_inOut: idf {
    if (doubleDeclaration($1) == 1) {
        printf("Semantic Error: %s non declare, in the line %d\n", $1, nb_line);
    } else{
        cptIdf++;
        getType($1);
    }
}
        | idf crch_ouv cst crch_ferm {
    if(doubleDeclaration($1) == 1) 
        printf("Semantic Error: %s non declare, in the line %d\n", $1, nb_line);
    else if(SizeOverselect($1,$3)==0)
        printf("Semantic Error: Overselecting in the array %s , in the line %d\n",$1,nb_line);
    else{
        cptIdf++;
        getType($1);
    }
}
        | idf vg listIdf_inOut{
    if (doubleDeclaration($1) == 1) 
        printf("Semantic Error: %s non declare, in the line %d\n", $1, nb_line);
    else{
        cptIdf++;
        getType($1);
    }
}
        | idf crch_ouv cst crch_ferm listIdf_inOut {
    if(doubleDeclaration($1) == 1) 
        printf("Semantic Error: %s non declare, in the line %d\n", $1, nb_line);
    else if(SizeOverselect($1,$3)==0)
        printf("Semantic Error: Overselecting in the array %s , in the line %d\n",$1,nb_line);
    else{
        cptIdf++;
        getType($1);
    }
}
;


Lecture: mc_in parOuv ch  vg  listIdf_inOut parFerm pvg {
    if(IsValide($3)==0){
        printf("Semantic Error: The content of IN is non-valid in the line %d \n",nb_line);
    }else{
        if(nbrP($3)!=cptIdf)
        printf("Semantic Error: Number of formats and idfs are different in the line %d\n",nb_line);
    else{
        getFormats($3);
        if(compatible($3)!=0)
            printf("Semantic Error: type incompatible in the line %d\n",nb_line);
    }
    cptIdf=0;
    i=0;
    }
}

;   

ecriture: mc_out parOuv ch vg listIdf_inOut parFerm pvg{
    if(nbrP($3)!=cptIdf)
        printf("Semantic Error: Number of formats and idfs differents in the line %d\n",nb_line);
    else{
        getFormats($3);
        if(compatible($3)!=0)
            printf("Semantic Error: type incompatible in the line %d\n",nb_line);
    }
    cptIdf=0;
    i=0;
}

;



InstFor:mc_for parOuv idf aff cst pvg idf inf cst pvg idf add add parFerm Corps {
    if (doubleDeclaration($3) == 1)
    {
        printf("Semantic Error: idf non declared of %s, in the line %d\n", $3, nb_line);
    }else{
        if(RGetType($3)!='d'){
            printf("Semantic Error: you can use a variable of type integer in FOR in the line %d \n", nb_line);
        }
        else
        {
            if (($3 != $7) || ($3 != $11))
                printf("Semantic Error: use of two different variables in FOR in the line %d \n", nb_line);
        }
    }
} ;


InstAff : idf aff InstArith pvg
{
    if (doubleDeclaration($1) == 1)
    {
        printf("Semantic Error: idf non-declared de %s, in the line %d\n", $1, nb_line);
    }
    nbrAff = 0;
    cptA = 0;
}
| idf crch_ouv cst crch_ferm aff InstArith pvg
{
    if (doubleDeclaration($1) == 1)
        printf("Semantic Error: idf non-declared de %s, in the line %d\n", $1, nb_line);
    else
    {
        if (SizeOverselect($1, $3) == 0)
        {
            printf("array Size overselecting \n");
        }
    }
}
| idf aff ch pvg
{
    if (doubleDeclaration($1) == 1)
        printf("Semantic Error: idf non-declared of %s, in the line %d\n", $1, nb_line);
    else {if (RGetType($1) != 's')
        printf("Error in the line %d : incompatibility of type \n",nb_line);}
}
| idf crch_ouv cst crch_ferm aff ch pvg
{
    if (doubleDeclaration($1) == 1)
        printf("Semantic Error: idf non declaree de %s, in the line %d\n", $1, nb_line);
    else
    {
        if (SizeOverselect($1, $3) == 0)
        {
            printf("depassement Size tableau \n",nb_line);
        }
        else
        {
            if (RGetType($1) != 's')
                printf("Error in the line %d : incompatiblity of type \n");
        }
    }
};

InstArith : InstArith add T {cptA++ ; InsertOpDansTab("+");}| InstArith moins T{cptA++; InsertOpDansTab("-");}| T{cptA++} ;
T : T multip F  {cptA++;InsertOpDansTab("*")}| T InstDiv {cptA++;}| F  {cptA++};
F : idf {if(InsertIdfDansTab($1)==1){printf("Error in the line %d: you can affect in %s a value to make the calculation \n",nb_line,$1);YN=1;}}
   | idf crch_ouv cst crch_ferm  
   | cst {if(Sizevar($1)==0){printf("Error in the line %d Size overflowing \n",nb_line);}else{sprintf(vaLTemp,"%d",$1);InsertCstDansTab(vaLTemp);}}
   |moins cst
   |add cst
   | parOuv InstArith parFerm ; 

InstDiv: devis diviseur {InsertOpDansTab("/")}    
;

diviseur : cst { 
    if ($1==0){printf("Semantic Error: Division on zero in the line %d\n",nb_line);}else{sprintf(vaLTemp,"%d",$1);InsertCstDansTab(vaLTemp);}}
        |idf{if(InsertIdfDansTab($1)==1){printf("Error in the line %d: you can affect in %s a value to make the calculation \n",nb_line,$1); YN=1;}}
        |idf crch_ouv cst crch_ferm {if(InsertIdfDansTab($1)==1)printf("Error in the line %d: you can affect in %s a value to make the calculation \n",nb_line,$1)}
;

%%
main()
{
yyparse();
Show();
}

yywrap()
{}

int yyerror (char *msg){
    printf ("Lexical Error in the line %d\n",nb_line);
}


