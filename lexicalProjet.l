%{
	#include "syntaxiqueProjet.tab.h"   
    extern nb_ligne;
    extern Col;
%}

lettre [a-zA-Z]
chiffre [0-9]
IDF [A-Z]({lettre}|{chiffre}|[_])*
cst_int {chiffre}+
cst_char ({lettre}|{chiffre})
cst_string ({lettre}|{chiffre}|[_]|[,]|[!])+
cst_real ({chiffre}+[\.]({chiffre})+)|([(-]({chiffre}+[\.]({chiffre})+)[)])


%%

Programme 	{printf("L'entite lexicale reconnue est %s \n", yytext); 
				Col= Col + strlen(yytext); 
				return mc_programme;}
				
PROCESS 	{printf("L'entite lexicale reconnue est %s \n", yytext); 
				Col= Col + strlen(yytext); 
				return mc_process;}
				
LOOP 		{printf("L'entite lexicale reconnue est %s \n", yytext); 
				Col= Col + strlen(yytext); 
				return mc_loop;}
				
ARRAY 		{printf("L'entite lexicale reconnue est %s \n", yytext); 
				Col= Col + strlen(yytext); 
				return mc_array;}
				
VAR 		{printf("L'entite lexicale reconnue est %s \n", yytext); 
				Col= Col + strlen(yytext); 
				return mc_var;}
				
CONST		{printf("L'entite lexicale reconnue est %s \n", yytext); 
				Col= Col + strlen(yytext); 
				return mc_const;}
				
REAL 		{printf("L'entite lexicale reconnue est %s \n", yytext); 
				Col= Col + strlen(yytext); 
				return mc_real;}
				
CHAR 		{printf("L'entite lexicale reconnue est %s \n", yytext); 
				Col= Col + strlen(yytext); 
				return mc_char;}
				
STRING 		{printf("L'entite lexicale reconnue est %s \n", yytext); 
				Col= Col + strlen(yytext); 
				return mc_string;}
				
INTEGER		{printf("L'entite lexicale reconnue est %s \n", yytext); 
				Col= Col + strlen(yytext); 
				return mc_integer;}
				
READ 		{printf("L'entite lexicale reconnue est %s \n", yytext); 
				Col= Col + strlen(yytext); 
				return mc_read;}
				
WRITE 		{printf("L'entite lexicale reconnue est %s \n", yytext); 
				Col= Col + strlen(yytext); 
				return mc_write;}
				
While 		{printf("L'entite lexicale reconnue est %s \n", yytext); 
				Col= Col + strlen(yytext); 
				return mc_while;}
				
INF 		{printf("L'entite lexicale reconnue est %s \n", yytext); 
				Col= Col + strlen(yytext); 
				return mc_inf;}
				
SUP 		{printf("L'entite lexicale reconnue est %s \n", yytext); 
				Col= Col + strlen(yytext); 
				return mc_sup;}
				
EG 			{printf("L'entite lexicale reconnue est %s \n", yytext); 
				Col= Col + strlen(yytext); 
				return mc_eg;}
				
INFE 		{printf("L'entite lexicale reconnue est %s \n", yytext); 
				Col= Col + strlen(yytext); 
				return mc_infe;}
				
SUPE 		{printf("L'entite lexicale reconnue est %s \n", yytext); 
				Col= Col + strlen(yytext); 
				return mc_supe;}
				
DIFF 		{printf("L'entite lexicale reconnue est %s \n", yytext); 
				Col= Col + strlen(yytext); 
				return mc_diff;}
				
EXECUT 		{printf("L'entite lexicale reconnue est %s \n", yytext); 
				Col= Col + strlen(yytext); 
				return mc_exec;}
				
IF 			{printf("L'entite lexicale reconnue est %s \n", yytext); 
				Col= Col + strlen(yytext); 
				return mc_if;}
END_IF 		{printf("L'entite lexicale reconnue est %s \n", yytext); 
				Col= Col + strlen(yytext); 
				return mc_end_if;}
				
ELSE		{printf("L'entite lexicale reconnue est %s \n", yytext); 
				Col= Col + strlen(yytext); 
				return mc_else;}
				
{IDF}  		{printf("L'entite lexicale reconnue est %s \n", yytext); 
				Col= Col + strlen(yytext); 
				if (yyleng>10) printf ("Erreur Lexicale: IDF trop longue a la ligne %d a la colonne %d \n ",nb_ligne, Col);
				return idf;}
						
{cst_int} {printf("L'entite lexicale reconnue est %s \n", yytext); 
				Col= Col + strlen(yytext); 
				return cst_int;}
				
{cst_char}	{printf("L'entite lexicale reconnue est %s \n", yytext); 
				Col= Col + strlen(yytext); 
				return cst_char;}
				
{cst_real}	{printf("L'entite lexicale reconnue est %s \n", yytext); 
				Col= Col + strlen(yytext); 
				return cst_real;}
				
{cst_string} {printf("L'entite lexicale reconnue est %s \n", yytext); 
				Col= Col + strlen(yytext); 
				return cst_string;}

"#" 		{Col= Col + strlen(yytext); 
				return htag;}
"##"		{Col= Col + strlen(yytext); 
				return dble_htag;}
"$" 		{Col= Col + strlen(yytext); 
				return dollar;}
"::" 		{Col= Col + strlen(yytext); 
				return dble_point;}
":="		{Col= Col + strlen(yytext); 
				return aff;}
"[" 		{Col= Col + strlen(yytext); 
				return crochet_ovr;}
"]" 		{Col= Col + strlen(yytext); 
				return crochet_frm;}
"/"			{Col= Col + strlen(yytext); 
				return slash;}
"//"		{Col= Col + strlen(yytext); 
				return separateur;}
"+" 		{Col= Col + strlen(yytext); 
				return plus;}
"-" 		{Col= Col + strlen(yytext); 
				return moins;}
"="      	{Col= Col + strlen(yytext); 
				return egal;}
"*" 		{Col= Col + strlen(yytext); 
				return etoile;}
\" 			{Col= Col + strlen(yytext); 
				return dble_cote;}
"'"         {Col= Col + strlen(yytext); 
				return cote;}
"|" 		{Col= Col + strlen(yytext); 
				return barre;}
"@" 		{Col= Col + strlen(yytext); 
				return arobase;}
"(" 		{Col= Col + strlen(yytext); 
				return parnths_ovr;}
")" 		{Col= Col + strlen(yytext); 
				return parnths_frm;}
"%" 		{Col= Col + strlen(yytext); 
				return prcnt;}
"&" 		{Col= Col + strlen(yytext); 
				return et_com;}
"{" 		{Col= Col + strlen(yytext); 
				return acolad_ovr;}
"}" 		{Col= Col + strlen(yytext); 
				return acolad_frm;}

";"			{Col= Col + strlen(yytext); 
				return pvg;}

"?"			{Col= Col + strlen(yytext); 
				return pt_interrogation;}


[ \t] 	Col= Col + strlen(yytext);
\n   	{Col= 1; nb_ligne++;}
. {printf ("Entité lexicale non reconnue a ligne %d a la colonne %d \n", nb_ligne, Col);
    }
%%
