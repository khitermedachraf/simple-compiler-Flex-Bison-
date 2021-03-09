%{
	#include "syntaxiqueProjet.tab.h"  
	#include "ts.h" 
    extern nb_ligne;
    extern Col;
	extern YYSTYPE yylval;
%}

lettre [a-zA-Z]
chiffre [0-9]
IDF [A-Z]({lettre}|{chiffre}|[_])*
cst_int [-+]?{chiffre}+
cst_char ({lettre}|{chiffre})
cst_string \"[^\"]*\"
cst_real [+-]?{chiffre}+\.{chiffre}+ 
commentaire "/*"([^*]|\*+[^*/])*\*+"/"


%%

Programme 	{	rechercher(yytext,"Mot cle"," ",0,1);
				printf("L'entite lexicale reconnue est %s \n", yytext); 
				Col= Col + strlen(yytext); 
				return mc_programme;}
				
PROCESS 	{	yylval.string=strdup(yytext);
				rechercher(yytext,"Mot cle"," ",0,1);
				printf("L'entite lexicale reconnue est %s \n", yytext); 
				Col= Col + strlen(yytext); 
				return mc_process;}
				
LOOP 		{	yylval.string=strdup(yytext);
				rechercher(yytext,"Mot cle"," ",0, 1);
				printf("L'entite lexicale reconnue est %s \n", yytext); 
				Col= Col + strlen(yytext); 
				return mc_loop;}
				
ARRAY 		{	yylval.string=strdup(yytext);
				rechercher(yytext,"Mot cle"," ",0, 1);
				printf("L'entite lexicale reconnue est %s \n", yytext); 
				Col= Col + strlen(yytext); 
				return mc_array;}
				
VAR 		{
				rechercher(yytext,"Mot cle"," ",0, 1);
				printf("L'entite lexicale reconnue est %s \n", yytext); 
				Col= Col + strlen(yytext); 
				return mc_var;}
				
CONST		{	printf("L'entite lexicale reconnue est %s \n", yytext); 
				rechercher(yytext,"Mot cle"," ",0, 1);
				Col= Col + strlen(yytext); 
				return mc_const;}
				
REAL 		{	printf("L'entite lexicale reconnue est %s \n", yytext); 
				rechercher(yytext,"Mot cle"," ",0, 1);
				Col= Col + strlen(yytext); 
				return mc_real;}
				
CHAR 		{	printf("L'entite lexicale reconnue est %s \n", yytext); 
				rechercher(yytext,"Mot cle"," ",0, 1);
				Col= Col + strlen(yytext); 
				return mc_char;}
				
STRING 		{	printf("L'entite lexicale reconnue est %s \n", yytext); 
				rechercher(yytext,"Mot cle"," ",0, 1);
				Col= Col + strlen(yytext); 
				return mc_string;}
				
INTEGER		{	printf("L'entite lexicale reconnue est %s \n", yytext); 
				rechercher(yytext,"Mot cle"," ",0, 1);
				Col= Col + strlen(yytext); 
				return mc_integer;}
				
READ 		{printf("L'entite lexicale reconnue est %s \n", yytext); 
				rechercher(yytext,"Mot cle"," ",0, 1);
				Col= Col + strlen(yytext); 
				return mc_read;}
				
WRITE 		{	printf("L'entite lexicale reconnue est %s \n", yytext); 
				rechercher(yytext,"Mot cle"," ",0, 1);
				Col= Col + strlen(yytext); 
				return mc_write;}
				
While 		{	printf("L'entite lexicale reconnue est %s \n", yytext); 
				rechercher(yytext,"Mot cle"," ",0, 1);
				Col= Col + strlen(yytext); 
				return mc_while;}
				
INF 		{   printf("L'entite lexicale reconnue est %s \n", yytext); 
				rechercher(yytext,"Mot cle"," ",0, 1);
				Col= Col + strlen(yytext); 
				return mc_inf;}
				
SUP 		{	printf("L'entite lexicale reconnue est %s \n", yytext); 
				rechercher(yytext,"Mot cle"," ",0, 1);
				Col= Col + strlen(yytext); 
				return mc_sup;}
				
EG 			{	printf("L'entite lexicale reconnue est %s \n", yytext); 
				rechercher(yytext,"Mot cle"," ",0, 1);
				Col= Col + strlen(yytext); 
				return mc_eg;}
				
INFE 		{	printf("L'entite lexicale reconnue est %s \n", yytext); 
				rechercher(yytext,"Mot cle"," ",0, 1);
				Col= Col + strlen(yytext); 
				return mc_infe;}
				
SUPE 		{	printf("L'entite lexicale reconnue est %s \n", yytext); 
				rechercher(yytext,"Mot cle"," ",0, 1);
				Col= Col + strlen(yytext); 
				return mc_supe;}
				
DIFF 		{	printf("L'entite lexicale reconnue est %s \n", yytext); 
				rechercher(yytext,"Mot cle"," ",0, 1);
				Col= Col + strlen(yytext); 
				return mc_diff;}
				
EXECUT 		{	printf("L'entite lexicale reconnue est %s \n", yytext); 
				rechercher(yytext,"Mot cle"," ",0, 1);
				Col= Col + strlen(yytext); 
				return mc_exec;}
				
IF 			{	printf("L'entite lexicale reconnue est %s \n", yytext); 
				rechercher(yytext,"Mot cle"," ",0, 1);
				Col= Col + strlen(yytext); 
				return mc_if;}
END_IF 		{	printf("L'entite lexicale reconnue est %s \n", yytext); 
				rechercher(yytext,"Mot cle"," ",0, 1);
				Col= Col + strlen(yytext); 
				return mc_end_if;}
				
ELSE		{	printf("L'entite lexicale reconnue est %s \n", yytext); 
				rechercher(yytext,"Mot cle"," ",0, 1);
				Col= Col + strlen(yytext); 
				return mc_else;}
				
{IDF}  		{	printf("L'entite lexicale reconnue est %s \n", yytext); 
				yylval.string=strdup(yytext);
				rechercher(yytext,"IDF"," ",0,0); 
				Col= Col + strlen(yytext); 
				if (yyleng>10) printf ("\n Erreur Lexicale: IDF trop longue a la ligne %d a la colonne %d \n\n ",nb_ligne, Col);
				return idf;}
						
{cst_int} {		printf("L'entite lexicale reconnue est %s \n", yytext); 
				yylval.entier=atoi(yytext);
				rechercher(yytext,"CONSTANT","INTEGER",atof(yytext),0);
				Col= Col + strlen(yytext); 
				return cst_int;}
				
{cst_char}	{	printf("L'entite lexicale reconnue est %s \n", yytext); 
				yylval.character=yytext[0];
				rechercher(yytext,"CONSTANT","CHAR",atof(yytext),0);
				Col= Col + strlen(yytext); 
				return cst_char;}
				
{cst_real}	{	printf("L'entite lexicale reconnue est %s \n", yytext); 
				yylval.real=atof(yytext);
				rechercher(yytext,"CONSTANT","REAL",atof(yytext),0);
				Col= Col + strlen(yytext); 
				return cst_real;}
				
{cst_string} {	printf("L'entite lexicale reconnue est %s \n", yytext); 
				yylval.string=strdup(yytext);
				rechercher(yytext,"CONSTANT","STRING",atof(yytext),0);
				Col= Col + strlen(yytext); 
				return cst_string;}

{commentaire} { printf("L'entite lexicale est reconnue comme commentaire \n"); 
				char* str = yytext;
				char *ptrChar=strchr(str,'\n'); // ptrChar un pointeur vers le caractere '\n' de la variable str 
				while (ptrChar!=NULL) {
					nb_ligne++;
					ptrChar=strchr(ptrChar+1,'\n');
				}}
				

"#" 		{Col= Col + strlen(yytext); 
			rechercher(yytext,"Separateur",0,0,2);
				return htag;}
"##"		{Col= Col + strlen(yytext); 
				rechercher(yytext,"Separateur",0,0,2);
				return dble_htag;}
"$" 		{Col= Col + strlen(yytext); 
				rechercher(yytext,"Separateur",0,0,2);
				return dollar;}
"::"		{Col= Col + strlen(yytext); 
				rechercher(yytext,"Separateur",0,0,2);
				return dble_point;}
":="		{Col= Col + strlen(yytext); 
				rechercher(yytext,"Separateur",0,0,2);
				return aff;}
"[" 		{Col= Col + strlen(yytext); 
				rechercher(yytext,"Separateur",0,0,2);
				return crochet_ovr;}
"]" 		{Col= Col + strlen(yytext); 
				rechercher(yytext,"Separateur",0,0,2);
				return crochet_frm;}
"/"			{Col= Col + strlen(yytext); 
				rechercher(yytext,"Separateur",0,0,2);
				return slash;}
"//"		{Col= Col + strlen(yytext); 
				rechercher(yytext,"Separateur",0,0,2);
				return separateur;}
"+" 		{Col= Col + strlen(yytext); 
				rechercher(yytext,"Separateur",0,0,2);
				return plus;}
"-" 		{Col= Col + strlen(yytext); 
				rechercher(yytext,"Separateur",0,0,2);
				return moins;}
"="      	{Col= Col + strlen(yytext); 
				rechercher(yytext,"Separateur",0,0,2);
				return egal;}
"*" 		{Col= Col + strlen(yytext); 
				rechercher(yytext,"Separateur",0,0,2);
				return etoile;}
\'         {Col= Col + strlen(yytext); 
				rechercher(yytext,"Separateur",0,0,2);
				return cote;}
"|" 		{Col= Col + strlen(yytext); 
				rechercher(yytext,"Separateur",0,0,2);
				return barre;}
"@" 		{Col= Col + strlen(yytext); 
				rechercher(yytext,"Separateur",0,0,2);
				return arobase;}
"(" 		{Col= Col + strlen(yytext); 
				rechercher(yytext,"Separateur",0,0,2);
				return parnths_ovr;}
")" 		{Col= Col + strlen(yytext); 
				rechercher(yytext,"Separateur",0,0,2);
				return parnths_frm;}
"{" 		{Col= Col + strlen(yytext); 
				rechercher(yytext,"Separateur",0,0,2);
				return acolad_ovr;}
"}" 		{Col= Col + strlen(yytext); 
				rechercher(yytext,"Separateur",0,0,2);
				return acolad_frm;}




[ \t] 	Col= Col + strlen(yytext);
\n   	{Col= 1; nb_ligne++;}
. {printf ("\n Entité lexicale non reconnue a ligne %d a la colonne %d \n\n",
 nb_ligne, Col);}
%%