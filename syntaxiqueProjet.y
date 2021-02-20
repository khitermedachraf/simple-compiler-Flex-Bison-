
%{
    int nb_ligne=1, Col=1;
%}

%token  mc_programme mc_process mc_loop mc_array mc_var mc_const mc_real mc_char mc_string mc_integer mc_read mc_write mc_while mc_inf mc_sup mc_eg mc_infe mc_supe mc_diff mc_exec mc_if mc_end_if mc_else idf cst_int cst_char cst_real cst_string htag dble_htag dollar dble_point aff crochet_ovr crochet_frm slash separateur plus moins egal etoile cote barre arobase parnths_ovr parnths_frm prcnt et_com acolad_ovr acolad_frm dble_cote pvg pt_interrogation
%start S
%%
S: LIST_BIBLIO mc_programme idf acolad_ovr PGM acolad_frm 
   { printf("\n Le programme est correcte syntaxiquement. \n"); YYACCEPT; }
   |
;

PGM: mc_var LIST_DEC_VAR mc_const LIST_DEC_CONST LIST_INSTRUCTION
	| mc_const LIST_DEC_CONST    mc_var   LIST_DEC_VAR LIST_INSTRUCTION		  

;
LIST_DEC_VAR: DEC_VAR  LIST_DEC_VAR
       		|
;

DEC_VAR:TYPE dble_point LIST_IDF dollar
;
TYPE: mc_integer
      |mc_real
	  |mc_string
	  |mc_char
;

LIST_IDF: idf separateur LIST_IDF
        | idf
		| idf crochet_ovr cst_int crochet_frm separateur LIST_IDF
		| idf crochet_ovr cst_int crochet_frm
;  



LIST_DEC_CONST:DEC_CST LIST_DEC_CONST
              |
;

DEC_CST:TYPE dble_point LIST_IDF_CST dollar
;
LIST_IDF_CST:  idf egal cote cst_char cote separateur  LIST_IDF_CST
			  | idf egal cst_int separateur  LIST_IDF_CST
			  | idf egal dble_cote cst_string dble_cote separateur  LIST_IDF_CST
			  | idf egal cst_real separateur  LIST_IDF_CST
              | idf egal cote cst_char cote
			  | idf egal cst_int
			  | idf egal dble_cote cst_string dble_cote
			  | idf egal cst_real
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
IF_SIMPLE: mc_exec LIST_INSTRUCTION mc_if parnths_ovr COND parnths_frm mc_end_if dollar
;
IF_ELSE: mc_exec LIST_INSTRUCTION mc_if parnths_ovr COND parnths_frm mc_else mc_exec LIST_INSTRUCTION mc_end_if dollar
;
INST_WHILE: mc_while parnths_ovr COND parnths_frm acolad_ovr LIST_INSTRUCTION acolad_frm dollar
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
INST_READ: mc_read parnths_ovr dble_cote SIGNE_FORMAT dble_cote barre arobase idf parnths_frm dollar
;

SIGNE_FORMAT: pvg 
			| prcnt
			| pt_interrogation
			| et_com
;
INST_WRITE:  ONE_WRITE
			|WRITE
;
WRITE: mc_write parnths_ovr dble_cote AFFICH_WRITE dble_cote barre idf separateur IDF_WRITE  parnths_frm dollar
;
IDF_WRITE: idf separateur IDF_WRITE
			|idf
;
AFFICH_WRITE: 	SIGNE_FORMAT SIGNE_FORMAT
				| cst_string SIGNE_FORMAT SIGNE_FORMAT
				| SIGNE_FORMAT  cst_string SIGNE_FORMAT
				| SIGNE_FORMAT SIGNE_FORMAT cst_string
				| cst_string SIGNE_FORMAT cst_string SIGNE_FORMAT
				| cst_string SIGNE_FORMAT  SIGNE_FORMAT cst_string
				| SIGNE_FORMAT cst_string SIGNE_FORMAT cst_string
				| cst_string SIGNE_FORMAT cst_string SIGNE_FORMAT cst_string
				| AFFICH_WRITE ONE_SIGN_WRITE
;
ONE_SIGN_WRITE: SIGNE_FORMAT
;

ONE_WRITE: mc_write parnths_ovr dble_cote AFFICH_ONE_WRITE dble_cote barre idf  parnths_frm dollar
;
AFFICH_ONE_WRITE: SIGNE_FORMAT
				| cst_string SIGNE_FORMAT
				| SIGNE_FORMAT cst_string
				| cst_string SIGNE_FORMAT cst_string

;

INST_AFF:  idf aff cote cst_char cote dollar
		| idf aff dble_cote cst_string dble_cote dollar
		| idf aff EXPRESSION_ARTHMTQ dollar

		| idf crochet_ovr idf crochet_frm aff cote cst_char cote dollar
		| idf crochet_ovr idf crochet_frm aff dble_cote cst_string dble_cote dollar
		| idf crochet_ovr idf crochet_frm aff EXPRESSION_ARTHMTQ dollar

		| idf crochet_ovr cst_int crochet_frm aff EXPRESSION_ARTHMTQ dollar 
		| idf crochet_ovr cst_int crochet_frm aff cote cst_char cote dollar
		| idf crochet_ovr cst_int crochet_frm aff dble_cote cst_string dble_cote dollar
;
EXPRESSION_ARTHMTQ: OPERANDE OPERATEUR OPERANDE 
					|OPERANDE
					|parnths_ovr OPERANDE parnths_frm OPERATEUR OPERANDE
					|OPERANDE OPERATEUR parnths_ovr OPERANDE parnths_frm
					|parnths_ovr OPERANDE parnths_frm OPERATEUR parnths_ovr OPERANDE parnths_frm
					|OPERANDE OPERATEUR OPERANDE OPERATEUR EXPRESSION_ARTHMTQ
					|parnths_ovr OPERANDE parnths_frm
					|parnths_ovr OPERANDE parnths_frm OPERATEUR OPERANDE OPERATEUR EXPRESSION_ARTHMTQ
					|OPERANDE OPERATEUR parnths_ovr OPERANDE parnths_frm OPERATEUR EXPRESSION_ARTHMTQ
					|parnths_ovr OPERANDE parnths_frm OPERATEUR parnths_ovr OPERANDE parnths_frm OPERATEUR EXPRESSION_ARTHMTQ
					
;
OPERATEUR: plus
		| moins
		| slash
		| etoile
;
OPERANDE: idf
		| idf crochet_ovr cst_int crochet_frm
		| idf crochet_ovr idf crochet_frm
		| cst_int 
		| cst_real

;
LIST_BIBLIO: BIB LIST_BIBLIO
			|
;	
BIB: dble_htag NOM_BIB dollar
;

NOM_BIB: mc_process
        |mc_loop
		|mc_array
;

%%
main ()
{
   yyparse(); 
 }
 yywrap ()
 {}
int yyerror ( char*  msg )  
{
    printf ("Erreur Syntaxique a la ligne %d a la colonne %d \n", nb_ligne,Col);
} 
 