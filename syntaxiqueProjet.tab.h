
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     mc_programme = 258,
     mc_process = 259,
     mc_loop = 260,
     mc_array = 261,
     mc_var = 262,
     mc_const = 263,
     mc_real = 264,
     mc_char = 265,
     mc_string = 266,
     mc_integer = 267,
     mc_read = 268,
     mc_write = 269,
     mc_while = 270,
     mc_inf = 271,
     mc_sup = 272,
     mc_eg = 273,
     mc_infe = 274,
     mc_supe = 275,
     mc_diff = 276,
     mc_exec = 277,
     mc_if = 278,
     mc_end_if = 279,
     mc_else = 280,
     idf = 281,
     cst_int = 282,
     cst_char = 283,
     cst_real = 284,
     cst_string = 285,
     htag = 286,
     dble_htag = 287,
     dollar = 288,
     dble_point = 289,
     aff = 290,
     crochet_ovr = 291,
     crochet_frm = 292,
     slash = 293,
     separateur = 294,
     plus = 295,
     moins = 296,
     egal = 297,
     etoile = 298,
     cote = 299,
     barre = 300,
     arobase = 301,
     parnths_ovr = 302,
     parnths_frm = 303,
     prcnt = 304,
     et_com = 305,
     acolad_ovr = 306,
     acolad_frm = 307,
     dble_cote = 308,
     pvg = 309,
     pt_interrogation = 310
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1676 of yacc.c  */
#line 6 "syntaxiqueProjet.y"

         int	entier;
		 float	real;	
		 char	character; 
         char*	string;



/* Line 1676 of yacc.c  */
#line 116 "syntaxiqueProjet.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


