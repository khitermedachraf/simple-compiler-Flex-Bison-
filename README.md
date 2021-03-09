# simple-compiler-Flex-Bison-
a. Introduction :
   The goal of this project is to create a language mini-compiler described below, by performing the different phases of compilation: lexical, syntactic, semantic and generation of the intermediate code.
a.  Language Description:

The implemented functionalities are:

1- For the lexical part, the file: lexicalProjet.l is OK.
2- For the syntax part, the file: syntaxiqueProjet.y is OK.
3- For the ts.h file, it contains:
- The symbol table.
- The functions used for the semantic part.
4- For the semantic part, the error cases treated are:
- The size of the array <0.
- The index of an array if it is an IDF, must be of type integer.
- Non-type compatibility in the following cases:
• Declaration of constants.
• Assignments.
• Formatting sign (not 100% optimized).
- Undeclared IDF.
- Double IDF declared.
- Undeclared library
- Declared double library
- Division by Zero. (Only in the case of a constant = 0).
- The incompatibility of the number of formatting marks with the number of IDFs in the read and write instruction.
