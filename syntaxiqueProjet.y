%{
    int nb_ligne=1, Col=1;
	char sauvType [20];
	char sauvOpr[20];
	int sauvConstInt=-1;
	float sauvConstReal=-1;
	int NbrIdf =0;
	typedef struct
	{
		char signFromatage;
		char idf[20]; 
 
	} compatibilite;

	compatibilite tableau [20];
%}

%union {
         int	entier;
		 float	real;	
		 char	character; 
         char*	string;
}

%token  mc_programme <string>mc_process <string>mc_loop <string>mc_array mc_var mc_const mc_real mc_char mc_string mc_integer mc_read mc_write mc_while mc_inf mc_sup mc_eg mc_infe mc_supe mc_diff mc_exec mc_if mc_end_if mc_else <string>idf <entier>cst_int <character>cst_char <real>cst_real <string>cst_string htag dble_htag dollar dble_point aff crochet_ovr crochet_frm slash separateur plus moins egal etoile cote barre arobase parnths_ovr parnths_frm acolad_ovr acolad_frm  
%start S
%%
S: LIST_BIBLIO mc_programme idf acolad_ovr PGM acolad_frm 
   { printf("\n Le programme est correcte syntaxiquement. \n"); YYACCEPT; }
   |
;

PGM: mc_var LIST_DEC_VAR mc_const LIST_DEC_CONST LIST_INSTRUCTION
	| mc_const LIST_DEC_CONST    mc_var   LIST_DEC_VAR LIST_INSTRUCTION		  

;
LIST_DEC_VAR: DEC_VAR  LIST_DEC_VAR {strcpy(sauvType," ");}
       		|
;

DEC_VAR:TYPE dble_point LIST_IDF dollar
;
TYPE: mc_integer 	{strcpy(sauvType,"INTEGER");}
      |mc_real		{strcpy(sauvType,"REAL");}
	  |mc_string	{strcpy(sauvType,"STRING");}
	  |mc_char		{strcpy(sauvType,"CHAR");}
;

LIST_IDF: idf separateur LIST_IDF
		{
			if (rechercheNonDeclare($1)==0) {insererType($1,sauvType);}
			else {printf("Erreur semantique 'double declaration' a la ligne %d,la variable %s est deja declaree \n", nb_ligne, $1);}
		}
        | idf
		{
			if (rechercheNonDeclare($1)==0) {insererType($1,sauvType);}
			else {printf("Erreur semantique 'double declaration' a la ligne %d, la variable %s est deja declaree \n", nb_ligne, $1);}
		}
		| idf crochet_ovr cst_int crochet_frm separateur LIST_IDF
		{
			if ($3<=0) printf("Erreur sementique a la ligne %d : un tableau ne peux pas avoir une taille inferieure ou egale a 0 \n", nb_ligne);
			if (rechercheBib("ARRAY")==0){printf(" Erreur semantique a la ligne %d . la bibliotheque 'ARRAY' n'esp pas declaree !!\n",nb_ligne);}	
			if (rechercheNonDeclare($1)==0) {insererType($1,sauvType);}
			else {printf("Erreur semantique 'double declaration' a la ligne %d, la variable %s est deja declaree \n", nb_ligne, $1);}			
		} 
		| idf crochet_ovr cst_int crochet_frm
		{
			if ($3<=0) printf("Erreur sementique a la ligne %d : un tableau ne peux pas avoir une taille inferieure ou egale a 0 \n", nb_ligne);
			if (rechercheBib("ARRAY")==0){printf(" Erreur semantique a la ligne %d . la bibliotheque 'ARRAY' n'esp pas declaree !!\n",nb_ligne);}				
			if (rechercheNonDeclare($1)==0) {insererType($1,sauvType);}
			else {printf("Erreur semantique 'double declaration' a la ligne %d, la variable %s est deja declaree \n", nb_ligne, $1);}
		} 
;  



LIST_DEC_CONST:DEC_CST LIST_DEC_CONST
              |
;

DEC_CST:TYPE dble_point LIST_IDF_CST dollar
;
LIST_IDF_CST:  idf egal cote cst_char cote separateur  LIST_IDF_CST
				{
					CodeCst($1);
					if (rechercheNonDeclare($1)==0) {insererType($1,sauvType);}
					else {printf("Erreur semantique 'double declaration' a la ligne %d, la variable %s est deja declaree \n", nb_ligne, $1);}
					if (CompType($1,"CHAR")==0) {printf("Erreur semantique a la ligne %d : ICOMPATIBILITE DE TYPE de la variable %s \n",	 nb_ligne, $1);}
				}
			  | idf egal cst_int separateur  LIST_IDF_CST
			  {
					CodeCst($1);
					if (rechercheNonDeclare($1)==0) {insererType($1,sauvType);}
					else {printf("Erreur semantique 'double declaration' a la ligne		 %d, la variable %s est deja declaree \n", nb_ligne, $1);}
					if (CompType($1,"INTEGER")==0) {printf("Erreur semantique a la	 ligne %d : ICOMPATIBILITE DE TYPE de la variable %s \n", 		 nb_ligne, $1);}
				}
			  | idf egal  cst_string  separateur  LIST_IDF_CST
			  {
					CodeCst($1);
					if (rechercheNonDeclare($1)==0) {insererType($1,sauvType);}
					else {printf("Erreur semantique 'double declaration' a la ligne %d, la variable %s est deja declaree \n", nb_ligne, $1);}
					if (CompType($1,"STRING")==0) {printf("Erreur semantique a la ligne %d : ICOMPATIBILITE DE TYPE de la variable %s \n",		  nb_ligne, $1);}
				}
			  | idf egal cst_real separateur  LIST_IDF_CST
			  {
					
					CodeCst($1);
					if (rechercheNonDeclare($1)==0) {insererType($1,sauvType);}
					else {printf("Erreur semantique 'double declaration' a la ligne %d, la variable %s est deja declaree \n", nb_ligne, $1);}
					if (CompType($1,"REAL")==0) {printf("Erreur semantique a la ligne %d : ICOMPATIBILITE DE TYPE de la variable %s \n", nb_ligne, $1);}
				}
              | idf egal cote cst_char cote
			  {
					CodeCst($1);
					if (rechercheNonDeclare($1)==0) {insererType($1,sauvType);}
					else {printf("Erreur semantique 'double declaration' a la ligne %d, la variable %s est deja declaree \n", nb_ligne, $1);}
					if (CompType($1,"CHAR")==0) {printf("Erreur semantique a la ligne %d : ICOMPATIBILITE DE TYPE de la variable %s \n", nb_ligne, $1);}
				}
			  | idf egal cst_int
			  {
					
					CodeCst($1);
					if (rechercheNonDeclare($1)==0) {insererType($1,sauvType);}
					else {printf("Erreur semantique 'double declaration' a la ligne %d, la variable %s est deja declaree \n", nb_ligne, $1);}
					if (CompType($1,"INTEGER")==0) {printf("Erreur semantique a la ligne %d : ICOMPATIBILITE DE TYPE de la variable %s \n", nb_ligne, $1);}
				}
			  | idf egal  cst_string 
			  {
					CodeCst($1);
					if (rechercheNonDeclare($1)==0) {insererType($1,sauvType);}
					else {printf("Erreur semantique 'double declaration' a la ligne %d, la variable %s est deja declaree \n", nb_ligne, $1);}
					if (CompType($1,"STRING")==0) {printf("Erreur semantique a la ligne %d : ICOMPATIBILITE DE TYPE de la variable %s \n",  nb_ligne, $1);}
				}
			  | idf egal cst_real
			  {
					
					CodeCst($1);
					if (rechercheNonDeclare($1)==0) {insererType($1,sauvType);}
					else {printf("Erreur semantique 'double declaration' a la ligne %d, la variable %s est deja declaree \n", nb_ligne, $1);}
					if (CompType($1,"REAL")==0) {printf("Erreur semantique a la ligne %d : ICOMPATIBILITE DE TYPE de la variable %s \n", nb_ligne, $1);}
				}
;
LIST_INSTRUCTION:INST LIST_INSTRUCTION
         |
;	
INST: INST_AFF
	| INST_READ
	| INST_WRITE
	| INST_WHILE
	| INST_CONDITION
;
INST_CONDITION: IF_SIMPLE
				| IF_ELSE
;
IF_SIMPLE: mc_exec LIST_INSTRUCTION mc_if parnths_ovr COND parnths_frm mc_end_if
 dollar
;
IF_ELSE: mc_exec LIST_INSTRUCTION mc_if parnths_ovr COND parnths_frm mc_else
 mc_exec LIST_INSTRUCTION mc_end_if dollar
;
INST_WHILE: mc_while parnths_ovr COND parnths_frm acolad_ovr LIST_INSTRUCTION 
acolad_frm dollar
	{
		if (rechercheBib("LOOP")==0){printf(" Erreur semantique a la ligne %d . la bibliotheque 'LOOP' n'est pas declaree !!\n",nb_ligne);}
	}
;
COND: EXPRESSION_ARTHMTQ OPERATEUR_LOGIQUE EXPRESSION_ARTHMTQ
;
OPERATEUR_LOGIQUE: mc_eg
				| mc_inf
				| mc_sup
				| mc_infe
				| mc_supe
				| mc_diff
;
INST_READ: mc_read parnths_ovr cst_string barre arobase IDF_READ parnths_frm dollar
			{
				if (NbrIdf != 1 || NbrSgnFormat($3)!=1)
			{
				printf("Erreur semantique a la ligne %d : Le nombre de signes de formatages et de variables doit etre egal a 1\n", nb_ligne);
			}else {
				insererSignFormat($3,tableau);
				if (verifierCompatibilite(tableau,NbrIdf)!=0){
					printf("Erreur semantique a la ligne %d : INCOMPATIBILIE de	type de la variabe numero %d dans l instruction READ \n",nb_ligne,verifierCompatibilite(tableau,NbrIdf));
				}
				initialiseTableau(tableau);
			}
				NbrIdf = 0;
	
			}
;
IDF_READ:idf
			{
				strcpy(tableau[NbrIdf].idf,$1);
				NbrIdf++;
				if(rechercheNonDeclare($1)==0){printf("Erreur semantique a la ligne  %d : la variable %s n'est pas declaree !!\n",nb_ligne,$1);}
			}
		|idf crochet_ovr idf crochet_frm
			{
				strcpy(tableau[NbrIdf].idf,$1);
				NbrIdf++;
				if ($3<=0) printf("Erreur sementique a la ligne %d : un tableau ne peux pas avoir une taille inferieure ou egale a 0 \n", nb_ligne);
				if (rechercheBib("ARRAY")==0){printf(" Erreur semantique a la ligne %d . la bibliotheque 'ARRAY' n'esp pas declaree !!\n",nb_ligne);}				
				if(rechercheNonDeclare($1)==0){printf("Erreur semantique a la ligne  %d : la variable %s n'est pas declaree !!\n",nb_ligne,$1);}
				if(rechercheNonDeclare($3)==0){printf("Erreur semantique a la ligne  %d : la variable %s n'est pas declaree !!\n",nb_ligne,$3);}
			}		
		|idf crochet_ovr cst_int crochet_frm
			{
				strcpy(tableau[NbrIdf].idf,$1);
				NbrIdf++;
				if ($3<=0) printf("Erreur sementique a la ligne %d : un tableau ne peux pas avoir une taille inferieure ou egale a 0 \n", nb_ligne);
				if (rechercheBib("ARRAY")==0){printf(" Erreur semantique a la ligne %d . la bibliotheque 'ARRAY' n'esp pas declaree !!\n",nb_ligne);}				
				if(rechercheNonDeclare($1)==0 ){printf("Erreur semantique a la ligne  %d : la variable %s n'est pas declaree !!\n",nb_ligne,$1);}
			}
;

INST_WRITE:  ONE_WRITE
			|WRITE
;
WRITE: mc_write parnths_ovr cst_string barre IDF_WRITE  parnths_frm dollar
		{
			if (NbrIdf != NbrSgnFormat($3))
			{
				printf("Erreur semantique a la ligne %d : Le nombre de signes de formatages n'est pas egal au nombre de variables \n", nb_ligne);
			}else {
				insererSignFormat($3,tableau);
				if (verifierCompatibilite(tableau,NbrIdf)!=0){
					printf("Erreur semantique a la ligne %d : INCOMPATIBILIE de type de la variabe numero %d dans l'instruction WRITE \n",nb_ligne,verifierCompatibilite(tableau,NbrIdf));
				}
				initialiseTableau(tableau);
			}
			NbrIdf=0;
		}
;
IDF_WRITE: idf separateur IDF_WRITE
			{
				strcpy(tableau[NbrIdf].idf,$1);
				NbrIdf++;
				if (rechercheNonDeclare($1)==0 ){printf("Erreur semantique a la ligne  %d : la variable %s n'est pas declaree !!\n",nb_ligne,$1);}
			}
			|idf
			{
				strcpy(tableau[NbrIdf].idf,$1);
				NbrIdf++;
				if (rechercheNonDeclare($1)==0 ){printf("Erreur semantique a la ligne  %d : la variable %s n'est pas declaree !!\n",nb_ligne,$1);}
			}
			|idf crochet_ovr idf crochet_frm
			{
				strcpy(tableau[NbrIdf].idf,$1);
				NbrIdf++;
				if ($3<=0) printf("Erreur sementique a la ligne %d : un tableau ne peux pas avoir une taille inferieure ou egale a 0 \n", nb_ligne);
				if (rechercheBib("ARRAY")==0){printf(" Erreur semantique a la ligne %d . la bibliotheque 'ARRAY' n'esp pas declaree !!\n",nb_ligne);}				
				if(rechercheNonDeclare($1)==0 ){printf("Erreur semantique a la ligne  %d : la variable %s n'est pas declaree !!\n",nb_ligne,$1);}
				if(rechercheNonDeclare($3)==0 ){printf("Erreur semantique a la ligne  %d : la variable %s n'est pas declaree !!\n",nb_ligne,$3);}
			}		
			|idf crochet_ovr cst_int crochet_frm
			{
				strcpy(tableau[NbrIdf].idf,$1);
				NbrIdf++;
				if ($3<=0) printf("Erreur sementique a la ligne %d : un tableau ne peux pas avoir une taille inferieure ou egale a 0 \n", nb_ligne);
				if (rechercheBib("ARRAY")==0){printf(" Erreur semantique a la ligne %d . la bibliotheque 'ARRAY' n'esp pas declaree !!\n",nb_ligne);}				
				if(rechercheNonDeclare($1)==0 ){printf("Erreur semantique a la ligne  %d : la variable %s n'est pas declaree !!\n",nb_ligne,$1);}
			}
			|idf crochet_ovr idf crochet_frm separateur IDF_WRITE
			{
				strcpy(tableau[NbrIdf].idf,$1);
				NbrIdf++;
				if ($3<=0) printf("Erreur sementique a la ligne %d : un tableau ne peux pas avoir une taille inferieure ou egale a 0 \n", nb_ligne);
				if (rechercheBib("ARRAY")==0){printf(" Erreur semantique a la ligne %d . la bibliotheque 'ARRAY' n'esp pas declaree !!\n",nb_ligne);}				
				if(rechercheNonDeclare($1)==0 ){printf("Erreur semantique a la ligne  %d : la variable %s n'est pas declaree !!\n",nb_ligne,$1);}
				if(rechercheNonDeclare($3)==0 ){printf("Erreur semantique a la ligne  %d : la variable %s n'est pas declaree !!\n",nb_ligne,$3);}
			}		
			|idf crochet_ovr cst_int crochet_frm separateur IDF_WRITE
			{
				strcpy(tableau[NbrIdf].idf,$1);
				NbrIdf++;
				if ($3<=0) printf("Erreur sementique a la ligne %d : un tableau ne peux pas avoir une taille inferieure ou egale a 0 \n", nb_ligne);
				if (rechercheBib("ARRAY")==0){printf(" Erreur semantique a la ligne %d . la bibliotheque 'ARRAY' n'esp pas declaree !!\n",nb_ligne);}				
				if(rechercheNonDeclare($1)==0 ){printf("Erreur semantique a la ligne  %d : la variable %s n'est pas declaree !!\n",nb_ligne,$1);}
			}
;



ONE_WRITE: mc_write parnths_ovr cst_string  parnths_frm dollar	
			{
				if (NbrIdf != NbrSgnFormat($3))
			{
				printf("Erreur semantique a la ligne %d : Le nombre de signes de formatages n'est pas egal au nombre de variables\n", nb_ligne);
			}
			}
;


INST_AFF:  idf aff cote cst_char cote dollar
			{
				if (CompType($1,"CHAR")==0) {printf("Erreur semantique a la ligne %d : ICOMPATIBILITE DE TYPE de la variable %s \n", nb_ligne, $1);}
				if (VerifIdfConst($1)==1){printf("Erreur semantique a la ligne  %d : la variable %s est une constante, affectation impossible\n",nb_ligne,$1);}
				if (rechercheNonDeclare($1)==0){printf("Erreur semantique a la ligne  %d : la variable %s n'est pas declaree !!\n",nb_ligne,$1);}
			}
		| idf aff  cst_string  dollar
			{
				if (CompType($1,"STRING")==0) {printf("Erreur semantique a la ligne %d : ICOMPATIBILITE DE TYPE de la variable %s \n", nb_ligne, $1);}
				if (VerifIdfConst($1)==1){printf("Erreur semantique a la ligne  %d : la variable %s est une constante, affectation impossible\n",nb_ligne,$1);}
				if (rechercheNonDeclare($1)==0 ){printf("Erreur semantique a la ligne  %d : la variable %s n'est pas declaree !!\n",nb_ligne,$1);}
			}
		| idf aff EXPRESSION_ARTHMTQ dollar
			{
				if ((CompType($1,"INTEGER")==0) && (CompType($1,"REAL")==0)) 
				{printf("Erreur semantique a la ligne %d : ICOMPATIBILITE DE TYPE de la variable %s \n", nb_ligne, $1);}
				if (VerifIdfConst($1)==1){printf("Erreur semantique a la ligne  %d : la variable %s est une constante, affectation impossible\n",nb_ligne,$1);}
				if (rechercheNonDeclare($1)==0 ){printf("Erreur semantique a la ligne  %d : la variable %s n'est pas declaree !!\n",nb_ligne,$1);}
			}
		| idf crochet_ovr idf crochet_frm aff cote cst_char cote dollar
			{
				if (CompType($1,"CHAR")==0) {printf("Erreur semantique a la ligne %d : ICOMPATIBILITE DE TYPE de la variable %s \n", nb_ligne, $1);}
				if (CompType($3,"INTEGER")==0) {printf("Erreur semantique a la ligne %d : ICOMPATIBILITE DE TYPE de la variable %s \n", nb_ligne, $1);}
				if (VerifIdfConst($1)==1){printf("Erreur semantique a la ligne  %d : la variable %s est une constante, affectation impossible\n",nb_ligne,$1);}
				if ($3<=0) printf("Erreur sementique a la ligne %d : un tableau ne peux pas avoir une taille inferieure ou egale a 0 \n", nb_ligne);
				if (rechercheBib("ARRAY")==0){printf(" Erreur semantique a la ligne %d . la bibliotheque 'ARRAY' n'esp pas declaree !!\n",nb_ligne);}				
				if (rechercheNonDeclare($1)==0 ){printf("Erreur semantique a la ligne  %d : la variable %s n'est pas declaree !!\n",nb_ligne,$1);}			
				if (rechercheNonDeclare($3)==0 ){printf("Erreur semantique a la ligne  %d : la variable %s n'est pas declaree !!\n",nb_ligne,$3);}			
			}
		| idf crochet_ovr idf crochet_frm aff  cst_string  dollar
			{
				if (CompType($1,"STRING")==0) {printf("Erreur semantique a la ligne %d : ICOMPATIBILITE DE TYPE de la variable %s \n", nb_ligne, $1);}
				if (CompType($3,"INTEGER")==0) {printf("Erreur semantique a la ligne %d : ICOMPATIBILITE DE TYPE de la variable %s \n", nb_ligne, $1);}
				if (VerifIdfConst($1)==1){printf("Erreur semantique a la ligne  %d : la variable %s est une constante, affectation impossible\n",nb_ligne,$1);}
				if ($3<=0) printf("Erreur sementique a la ligne %d : un tableau ne peux pas avoir une taille inferieure ou egale a 0 \n", nb_ligne);
				if (rechercheBib("ARRAY")==0){printf(" Erreur semantique a la ligne %d . la bibliotheque 'ARRAY' n'esp pas declaree !!\n",nb_ligne);}				
				if (rechercheNonDeclare($1)==0 ){printf("Erreur semantique a la ligne  %d : la variable %s n'est pas declaree !!\n",nb_ligne,$1);}
				if (rechercheNonDeclare($3)==0 ){printf("Erreur semantique a la ligne  %d : la variable %s n'est pas declaree !!\n",nb_ligne,$3);}			
			
			}
		| idf crochet_ovr idf crochet_frm aff EXPRESSION_ARTHMTQ dollar
			{
				if ((CompType($1,"INTEGER")==0)&&(CompType($1,"REAL")==0)) {printf("Erreur semantique a la ligne %d : ICOMPATIBILITE DE TYPE de la variable %s \n", nb_ligne, $1);}
				if (CompType($3,"INTEGER")==0) {printf("Erreur semantique a la ligne %d : ICOMPATIBILITE DE TYPE de la variable %s \n", nb_ligne, $1);}
				if (VerifIdfConst($1)==1){printf("Erreur semantique a la ligne  %d : la variable %s est une constante, affectation impossible\n",nb_ligne,$1);}
				if ($3<=0) printf("Erreur sementique a la ligne %d : un tableau ne peux pas avoir une taille inferieure ou egale a 0 \n", nb_ligne);
				if (rechercheBib("ARRAY")==0){printf(" Erreur semantique a la ligne %d . la bibliotheque 'ARRAY' n'esp pas declaree !!\n",nb_ligne);}				
				if (rechercheNonDeclare($1)==0 ){printf("Erreur semantique a la ligne  %d : la variable %s n'est pas declaree !!\n",nb_ligne,$1);}
				if (rechercheNonDeclare($3)==0 ){printf("Erreur semantique a la ligne  %d : la variable %s n'est pas declaree !!\n",nb_ligne,$3);}			

			}
		| idf crochet_ovr cst_int crochet_frm aff EXPRESSION_ARTHMTQ dollar
				{
				if ((CompType($1,"INTEGER")==0)&&(CompType($1,"REAL")==0))
				 {printf("Erreur semantique a la ligne %d : ICOMPATIBILITE DE TYPE de la variable %s \n", nb_ligne, $1);}
				if (VerifIdfConst($1)==1){printf("Erreur semantique a la ligne  %d : la variable %s est une constante, affectation impossible\n",nb_ligne,$1);}
				if ($3<=0) printf("Erreur sementique a la ligne %d : un tableau ne peux pas avoir une taille inferieure ou egale a 0 \n", nb_ligne);
				if (rechercheBib("ARRAY")==0){printf(" Erreur semantique a la ligne %d . la bibliotheque 'ARRAY' n'esp pas declaree !!\n",nb_ligne);}				
				if (rechercheNonDeclare($1)==0 ){printf("Erreur semantique a la ligne  %d : la variable %s n'est pas declaree !!\n",nb_ligne,$1);}
			} 
		| idf crochet_ovr cst_int crochet_frm aff cote cst_char cote dollar
			{
				if (CompType($1,"CHAR")==0) {printf("Erreur semantique a la ligne %d : ICOMPATIBILITE DE TYPE de la variable %s \n", nb_ligne, $1);}
				if (VerifIdfConst($1)==1){printf("Erreur semantique a la ligne  %d : la variable %s est une constante, affectation impossible\n",nb_ligne,$1);}
				if ($3<=0) printf("Erreur sementique a la ligne %d : un tableau ne peux pas avoir une taille inferieure ou egale a 0 \n", nb_ligne);
				if (rechercheBib("ARRAY")==0){printf(" Erreur semantique a la ligne %d . la bibliotheque 'ARRAY' n'esp pas declaree !!\n",nb_ligne);}				
				if (rechercheNonDeclare($1)==0){printf("Erreur semantique a la ligne  %d : la variable %s n'est pas declaree !!\n",nb_ligne,$1);}
			} 
		| idf crochet_ovr cst_int crochet_frm aff  cst_string  dollar
				{
				if (CompType($1,"STRING")==0) {printf("Erreur semantique a la ligne %d : ICOMPATIBILITE DE TYPE de la variable %s \n", nb_ligne, $1);}
				if (VerifIdfConst($1)==1){printf("Erreur semantique a la ligne  %d : la variable %s est une constante, affectation impossible\n",nb_ligne,$1);}
				if ($3<=0) printf("Erreur sementique a la ligne %d : un tableau ne peux pas avoir une taille inferieure ou egale a 0 \n", nb_ligne);
				if (rechercheBib("ARRAY")==0){printf(" Erreur semantique a la ligne %d . la bibliotheque 'ARRAY' n'esp pas declaree !!\n",nb_ligne);}				
				if (rechercheNonDeclare($1)==0 ){printf("Erreur semantique a la ligne  %d : la variable %s n'est pas declaree !!\n",nb_ligne,$1);}
			} 
;
EXPRESSION_ARTHMTQ: OPERANDE OPERATEUR OPERANDE 
	{
		if((strcmp(sauvOpr,"/")==0)&& sauvConstInt==0)
        {printf(" Erreur semantique 'division par zero' a la ligne %d \n",nb_ligne);
		 sauvConstInt=-1;}
		else if ((strcmp(sauvOpr,"/")==0)&& sauvConstReal==0) {printf(" Erreur semantique 'division par zero' a la ligne %d \n",nb_ligne); sauvConstReal=-1.0;}
		if (rechercheBib("PROCESS")==0){printf(" Erreur semantique a la ligne %d . la bibliotheque 'PROCESS' n'est pas declaree !!\n",nb_ligne);}
	}
					|OPERANDE
					|parnths_ovr OPERANDE parnths_frm OPERATEUR OPERANDE
	{
		if((strcmp(sauvOpr,"/")==0)&& sauvConstInt==0)
        {printf(" Erreur semantique 'division par zero' a la ligne %d \n",nb_ligne); 
		sauvConstInt=-1;}
		else if ((strcmp(sauvOpr,"/")==0)&& sauvConstReal==0) {printf(" Erreur semantique 'division par zero' a la ligne %d \n",nb_ligne); sauvConstReal=-1.0;}
		if (rechercheBib("PROCESS")==0){printf(" Erreur semantique a la ligne %d . la bibliotheque 'PROCESS' n'est pas declaree !!\n",nb_ligne);}
	}
					|OPERANDE OPERATEUR parnths_ovr OPERANDE parnths_frm
	{
		if((strcmp(sauvOpr,"/")==0)&& sauvConstInt==0)
        {printf(" Erreur semantique 'division par zero' a la ligne %d \n",nb_ligne); sauvConstInt=-1;}
		else if ((strcmp(sauvOpr,"/")==0)&& sauvConstReal==0) {printf(" Erreur semantique 'division par zero' a la ligne %d \n",nb_ligne); sauvConstReal=-1.0;}
		if (rechercheBib("PROCESS")==0){printf(" Erreur semantique a la ligne %d . la bibliotheque 'PROCESS' n'est pas declaree !!\n",nb_ligne);}
	}
					|parnths_ovr OPERANDE parnths_frm OPERATEUR parnths_ovr OPERANDE parnths_frm
	{
		if((strcmp(sauvOpr,"/")==0)&& sauvConstInt==0)
        {printf(" Erreur semantique 'division par zero' a la ligne %d \n",nb_ligne); sauvConstInt=-1;}
		else if ((strcmp(sauvOpr,"/")==0)&& sauvConstReal==0) {printf(" Erreur semantique 'division par zero' a la ligne %d \n",nb_ligne); sauvConstReal=-1.0;}
		if (rechercheBib("PROCESS")==0){printf(" Erreur semantique a la ligne %d . la bibliotheque 'PROCESS' n'est pas declaree !!\n",nb_ligne);}
	}
					|OPERANDE OPERATEUR OPERANDE OPERATEUR EXPRESSION_ARTHMTQ
	{
		if((strcmp(sauvOpr,"/")==0)&& sauvConstInt==0)
        {printf(" Erreur semantique 'division par zero' a la ligne %d \n",nb_ligne); sauvConstInt=-1;}
		else if ((strcmp(sauvOpr,"/")==0)&& sauvConstReal==0) {printf(" Erreur semantique 'division par zero' a la ligne %d \n",nb_ligne); sauvConstReal=-1.0;}
		if (rechercheBib("PROCESS")==0){printf(" Erreur semantique a la ligne %d . la bibliotheque 'PROCESS' n'est pas declaree !!\n",nb_ligne);}
	}
					|parnths_ovr OPERANDE parnths_frm					
					|parnths_ovr OPERANDE parnths_frm OPERATEUR OPERANDE OPERATEUR EXPRESSION_ARTHMTQ
	{
		if((strcmp(sauvOpr,"/")==0)&& sauvConstInt==0)
        {printf(" Erreur semantique 'division par zero' a la ligne %d \n",nb_ligne); sauvConstInt=-1;}
		else if ((strcmp(sauvOpr,"/")==0)&& sauvConstReal==0) {printf(" Erreur semantique 'division par zero' a la ligne %d \n",nb_ligne); sauvConstReal=-1.0;}
		if (rechercheBib("PROCESS")==0){printf(" Erreur semantique a la ligne %d . la bibliotheque 'PROCESS' n'est pas declaree !!\n",nb_ligne);}
	}
					|OPERANDE OPERATEUR parnths_ovr OPERANDE parnths_frm OPERATEUR EXPRESSION_ARTHMTQ
	{
		if((strcmp(sauvOpr,"/")==0)&& sauvConstInt==0)
        {printf(" Erreur semantique 'division par zero' a la ligne %d \n",nb_ligne); sauvConstInt=-1;}
		else if ((strcmp(sauvOpr,"/")==0)&& sauvConstReal==0) {printf(" Erreur semantique 'division par zero' a la ligne %d \n",nb_ligne); sauvConstReal=-1.0;}
		if (rechercheBib("PROCESS")==0){printf(" Erreur semantique a la ligne %d . la bibliotheque 'PROCESS' n'est pas declaree !!\n",nb_ligne);}
	}	
					|parnths_ovr OPERANDE parnths_frm OPERATEUR parnths_ovr OPERANDE parnths_frm OPERATEUR EXPRESSION_ARTHMTQ
	{
		if((strcmp(sauvOpr,"/")==0)&& sauvConstInt==0)
        {printf(" Erreur semantique 'division par zero' a la ligne %d \n",nb_ligne); sauvConstInt=-1;}
		else if ((strcmp(sauvOpr,"/")==0)&& sauvConstReal==0) {printf(" Erreur semantique 'division par zero' a la ligne %d \n",nb_ligne); sauvConstReal=-1.0;}
		if (rechercheBib("PROCESS")==0){printf(" Erreur semantique a la ligne %d . la bibliotheque 'PROCESS' n'est pas declaree !!\n",nb_ligne);}
	}	
					|parnths_ovr OPERANDE OPERATEUR OPERANDE parnths_frm
	{
		if((strcmp(sauvOpr,"/")==0)&& sauvConstInt==0)
        {printf(" Erreur semantique 'division par zero' a la ligne %d \n",nb_ligne); sauvConstInt=-1;}
		else if ((strcmp(sauvOpr,"/")==0)&& sauvConstReal==0) {printf(" Erreur semantique 'division par zero' a la ligne %d \n",nb_ligne); sauvConstReal=-1.0;}
		if (rechercheBib("PROCESS")==0){printf(" Erreur semantique a la ligne %d . la bibliotheque 'PROCESS' n'est pas declaree !!\n",nb_ligne);}
	}	
					|parnths_ovr OPERANDE OPERATEUR OPERANDE parnths_frm OPERATEUR EXPRESSION_ARTHMTQ
	{
		if((strcmp(sauvOpr,"/")==0)&& sauvConstInt==0)
        {printf(" Erreur semantique 'division par zero' a la ligne %d \n",nb_ligne); sauvConstInt=-1;}
		else if ((strcmp(sauvOpr,"/")==0)&& sauvConstReal==0) {printf(" Erreur semantique 'division par zero' a la ligne %d \n",nb_ligne); sauvConstReal=-1.0;}
		if (rechercheBib("PROCESS")==0){printf(" Erreur semantique a la ligne %d . la bibliotheque 'PROCESS' n'est pas declaree !!\n",nb_ligne);}
	}						
;

OPERATEUR: plus
		{
			strcpy(sauvOpr,"+");
		}
		| moins
		{
			strcpy(sauvOpr,"-");
		}
		| slash 
		{
			strcpy(sauvOpr,"/");
		}
		| etoile
		{
			strcpy(sauvOpr,"*");
		}
;
OPERANDE: idf
			{
			if (rechercheNonDeclare($1)==0 ){printf("Erreur semantique a la ligne  %d : la variable %s n'est pas declaree !!\n",nb_ligne,$1);}
			}
		| idf crochet_ovr cst_int crochet_frm
				{
				if ($3<=0) printf("Erreur sementique a la ligne %d : un tableau ne peux pas avoir une taille inferieure ou egale a 0 \n", nb_ligne);
				if (rechercheBib("ARRAY")==0){printf(" Erreur semantique a la ligne %d . la bibliotheque 'ARRAY' n'esp pas declaree !!\n",nb_ligne);}				
				if (rechercheNonDeclare($1)==0 ){printf("Erreur semantique a la ligne  %d : la variable %s n'est pas declaree !!\n",nb_ligne,$1);}
			} 	
		| idf crochet_ovr idf crochet_frm
				{
			if ($3<=0) printf("Erreur sementique a la ligne %d : un tableau ne peux pas avoir une taille inferieure ou egale a 0 \n", nb_ligne);
				if (rechercheBib("ARRAY")==0){printf(" Erreur semantique a la ligne %d . la bibliotheque 'ARRAY' n'esp pas declaree !!\n",nb_ligne);}				
				if (rechercheNonDeclare($3)==0 ){printf("Erreur semantique a la ligne  %d : la variable %s n'est pas declaree !!\n",nb_ligne,$3);}			
				if (rechercheNonDeclare($1)==0 ){printf("Erreur semantique a la ligne  %d : la variable %s n'est pas declaree !!\n",nb_ligne,$1);}			
	
				} 
		| cst_int 
		{    
			sauvConstInt=$1;           
		}  
		| cst_real
		{    
			sauvConstReal=$1;           
		}  
;
LIST_BIBLIO: BIB LIST_BIBLIO
			|
;	
BIB: dble_htag NOM_BIB dollar
;

NOM_BIB: mc_process
		{
			if (DoubleDecBib($1)==0){insererTypeBib($1);}
			else {printf("Erreur semantique : double declaration de la bibliotheque %s a la ligne %d \n", $1,nb_ligne);}
		}
        |mc_loop
		{
			if (DoubleDecBib($1)==0){insererTypeBib($1);}
			else {printf("Erreur semantique : double declaration de la bibliotheque %s a la ligne %d \n", $1,nb_ligne);}
		}
		|mc_array
		{
			if (DoubleDecBib($1)==0){insererTypeBib($1);}
			else {printf("Erreur semantique : double declaration de la bibliotheque %s a la ligne %d \n", $1,nb_ligne);}
		}
;

%%
main ()
{
   initialisation();
   initialiseTableau(tableau);
   yyparse(); 
   printf("\n");
   afficher();
 }
 yywrap ()
 {}
int yyerror ( char*  msg )  
{
    printf ("Erreur Syntaxique a la ligne %d a la colonne %d \n", nb_ligne,Col);
} 
 