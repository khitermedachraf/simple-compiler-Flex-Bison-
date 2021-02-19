
%token  mc_programme mc_process mc_loop mc_array mc_var mc_const mc_real mc_char mc_string mc_integer mc_read mc_write mc_while mc_inf mc_sup mc_eg mc_infe mc_supe mc_diff mc_exec mc_if mc_end_if mc_else idf cst_int cst_char cst_real cst_string htag dble_htag dollar dble_point aff crochet_ovr crochet_frm slash separateur plus moins egal etoile cote barre arobase parnths_ovr parnths_frm prcnt et_com acolad_ovr acolad_frm dble_cote
%start S
%%
S: LIST_BIBLIO mc_programme idf acolad_ovr PGM acolad_frm 
   { printf(" Le programme est correcte syntaxiquement"); YYACCEPT; }
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

INST:INST_AFF
;

INST_AFF: idf aff idf dollar 
          | idf aff cote cst_char cote dollar
		  | idf aff dble_cote cst_string dble_cote dollar
		  | idf aff cst_int dollar
		  | idf aff cst_real dollar
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