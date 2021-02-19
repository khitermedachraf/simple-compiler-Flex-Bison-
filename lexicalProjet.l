%{
	#include "syntaxiqueProjet.tab.h"   
   int nb_ligne=1;
%}

lettre [a-zA-Z]
chiffre [0-9]
IDF [A-Z]({lettre}|{chiffre})*
cst_int {chiffre}+
cst_char ({lettre}|{chiffre})
cst_string ({lettre}|{chiffre})+
cst_real {chiffre}+[\.]({chiffre})+


%%

Programme 	{return mc_programme;}
PROCESS 	{return mc_process;}
LOOP 		{return mc_loop;}
ARRAY 		{return mc_array;}
VAR 		{return mc_var;}
CONST		{return mc_const;}
REAL 		{return mc_real;}
CHAR 		{return mc_char;}
STRING 		{return mc_string;}
INTEGER		{return mc_integer;}
READ 		{return mc_read;}
WRITE 		{return mc_write;}
While 		{return mc_while;}
INF 		{return mc_inf;}
SUP 		{return mc_sup;}
EG 			{return mc_eg;}
INFE 		{return mc_infe;}
SUPE 		{return mc_supe;}
DIFF 		{return mc_diff;}
EXECUT 		{return mc_exec;}
IF 			{return mc_if;}
END_IF 		{return mc_end_if;}
ELSE		{return mc_else;}
{IDF}  			return idf;
{cst_int}  		return cst_int;
{cst_char}		return cst_char;
{cst_real}		return cst_real;
{cst_string} 	return cst_string;

"#" 		return htag;
"##"		return dble_htag;
"$" 		return dollar;
"::" 		return dble_point;
":="		return aff;
"[" 		return crochet_ovr;
"]" 		return crochet_frm;
"/"			return slash;
"//"		return separateur;
"+" 		return plus;
"-" 		return moins;
"="      	return egal;
"*" 		return etoile;
\" 			return dble_cote;
"'"         return cote;
"|" 		return barre;
"@" 		return arobase;
"(" 		return parnths_ovr;
")" 		return parnths_frm;
"%" 		return prcnt;
"&" 		return et_com;
"{" 		return acolad_ovr;
"}" 		return acolad_frm;


[ \t] 
\n   {nb_ligne++; }
. {printf("erreur lexicale à la ligne %d \n",nb_ligne) ;
    }
%%
