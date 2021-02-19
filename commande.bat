flex lexicalProjet.l
bison -d syntaxiqueProjet.y
gcc lex.yy.c syntaxiqueProjet.tab.c -lfl -ly -o simpleCompilateur




