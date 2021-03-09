/****************CREATION DE LA TABLE DES SYMBOLES ******************/
/***Step 1: Definition des structures de données ***/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
   int state;
   char name[20];
   char code[20];
   char type[20];
   float val;
 } element;

typedef struct
{ 
   int state; 
   char name[20];
   char code[20];
   char type[20];
} elt;
	typedef struct
	{
		char signFromatage;
		char idf[20]; 
 
	} compatibilite;

element tab[1000];
elt tabs[40],tabm[40];


/***Step 2: initialisation de l'état des cases des tables des symbloles***/
/*0: la case est libre    1: la case est occupée*/

void initialisation()
{
  int i;
  for (i=0;i<1000;i++)
  tab[i].state=0;
  
  

  for (i=0;i<40;i++)
    {tabs[i].state=0;
    tabm[i].state=0;}

}


/***Step 3: insertion des entititées lexicales dans les tables des symboles ***/

void inserer (char entite[], char code[],char type[],float val,int i, int y)
{
  switch (y)
 { 
   case 0:/*insertion dans la table des IDF et CONST*/
       tab[i].state=1;
       strcpy(tab[i].name,entite);
       strcpy(tab[i].code,code);
	   strcpy(tab[i].type,type);
	   tab[i].val=val;
	   break;

   case 1:/*insertion dans la table des mots clés*/
       tabm[i].state=1;
       strcpy(tabm[i].name,entite);
       strcpy(tabm[i].code,code);
	   strcpy(tabm[i].type,type);
       break; 
    
   case 2:/*insertion dans la table des séparateurs*/
      tabs[i].state=1;
      strcpy(tabs[i].name,entite);
      strcpy(tabs[i].code,code);
      break;
 }

}

/***Step 4: La fonction Rechercher permet de verifier  si l'entité existe dèja dans la table des symboles */
void rechercher (char entite[], char code[],char type[],float val,int y)	
{

int j,i;

switch(y) 
  {
   case 0:/*verifier si la case dans la tables des IDF et CONST est libre*/
        for (i=0;((i<1000)&&(tab[i].state==1))&&(strcmp(entite,tab[i].name)!=0);i++); 
        if(tab[i].state==0)
        { 
	        
			inserer(entite,code,type,val,i,0); 
	      
         }
		 
        else if (strcmp(entite,tab[i].name)==0){
          printf("entite (%s) existe deja\n",entite);
		}
		else if (i>=1000)
		{ printf("La table des symboles des idfs est pleine");}
        break;

   case 1:/*verifier si la case dans la tables des mots clés est libre*/
       
       for (i=0;((i<40)&&(tabm[i].state==1))&&(strcmp(entite,tabm[i].name)!=0);i++); 
        if(tabm[i].state==0){
		inserer(entite,code,type,val,i,1);}
        else if (strcmp(entite,tabm[i].name)==0){
		printf("entite (%s) existe deja\n",entite);}
		else if (i>=40){
		printf ("La table des mots cles est pleine");}
        break; 
    
   case 2:/*verifier si la case dans la tables des séparateurs est libre*/
         for (i=0;((i<40)&&(tabs[i].state==1))&&(strcmp(entite,tabs[i].name)!=0);i++); 
        if(i<40)
         inserer(entite,code,type,val,i,2);
        else
   	       printf("entite (%s) existe deja\n",entite);
        break;

  }

}


/***Step 5 L'affichage du contenue de la table des symboles ***/

void afficher() {
    int i;
    printf("/***************Table des symboles IDF*************/\n");
    printf("____________________________________________________________________\n");
    printf("\t| Nom_Entite |  Code_Entite | Type_Entite | Val_Entite\n");
    printf("____________________________________________________________________\n");
    
    for(i=0;i<50;i++) {	
        if(tab[i].state==1)
        { 
            printf("\t|%10s |%15s | %12s | %12f\n",tab[i].name,tab[i].code,tab[i].type,tab[i].val);    
        }
    }

 
    printf("\n/***************Table des symboles mots cles*************/\n");

    printf("___________________________________________________\n");
    printf("\t| Nom_Entite |  Code_Entite | Type_Entite |\n");
    printf("___________________________________________________\n");
    
    for(i=0;i<40;i++){
        if(tabm[i].state==1){ 
            printf("\t|%10s |%12s | |%12s | \n",tabm[i].name, tabm[i].code, tabm[i].type);       
        }
    }

    printf("\n/***************Table des symboles separateurs*************/\n");

    printf("_____________________________________\n");
    printf("\t| NomEntite |  CodeEntite | \n");
    printf("_____________________________________\n");
    
    for(i=0;i<40;i++){
        if(tabs[i].state==1) { 
            printf("\t|%10s |%12s | \n",tabs[i].name,tabs[i].code );   
        }
    } 
}

/***Step 6 : la fonction qui retourne la position d'un IDF  ***/

int rechercherIDF(char entite[]){
  int i=0;
  for (i; i<1000; i++){
    if (strcmp(entite,tab[i].name)==0){return i;}//retourne la position de l'IDF
  }
  return -1;//si l'IDF n'existe pas
}


/***Step 7 : la fonction qui permet de de vérifier l'existance d'une bibliotheque***/

int rechercheBib(char entite[]) {
  int i = 0;
  for (i;i <40; i++){
     if (strcmp(entite,tabm[i].name)==0){return 1;}//la bibliotheque existe
  }
  return 0; //la bibliotheque n'existe pas
}


/***Step 8 : la fonction qui permet de vérifier si une variable (IDF) est déclarée ***/

int rechercheNonDeclare(char entite[]) {
  int position;
  position=rechercherIDF(entite);
       if (position != -1 && strcmp(tab[position].type," ")==0){ return 0;} // la variable n'est pas declaree.
       else {return 1;} // la variable est declaree.
}





/***Step 9 : la fonction qui permet d'inserer un type à une variable (IDF) ***/
 
void insererType(char entite[], char type[])
	{
   int position;
   position =rechercherIDF(entite);
	 if(position !=-1)
	  {
	    strcpy(tab[position].type,type); 
	  }
  }


/***Step 10 : la fonction qui permet de vérifier si une bibliotheque est déja déclarée ou non ***/

int DoubleDecBib(char entite[]){
    int i = 0;
    for (i;i <40; i++){
       if (strcmp(entite,tabm[i].name)==0 && strcmp(tabm[i].type," ")==0){ return 0;}//la bibliotheque n'est pas declaree
   }
  return 1;//la bibliotheque est declaree

}


/***Step 11 : la fonction qui permet d'inserer un type a une bibliotheque  ***/

void insererTypeBib (char entite[])
	{
   int i = 0;
    for (i;i <40; i++){
       if (strcmp(entite,tabm[i].name)==0){strcpy(tabm[i].type,"BIB");}//inserer un  type a la bibliotheque 
   }
  }


/***Step 12 : la fonction qui modifie le code des idfs constants ***/

void CodeCst (char entite [])
{
	int position;
	position =rechercherIDF(entite);
	if (position != -1) 
	{
		strcpy(tab[position].code,"IDF CONSTANT");
	}
}


/***Step 13 : la fonction qui sauvegarde la valeur des variables ***/ ////////////////////////////////////////////////////////////////////////////////////

void SaveValue(char entite[], float val)
{
	int position;
	position =rechercherIDF(entite);
	if (position != -1) 
	{
		tab[position].val=val;
	}
}


/***Step 14 : la fonction qui verifie si l'idf est une constante ***/

int VerifIdfConst(char entite[])
{
	int position;
	position =rechercherIDF(entite);
	if (position != -1) 
	{
		if (strcmp(tab[position].code,"IDF CONSTANT")==0){return 1;}//l'idf est un IDF CONSTANT
		else {return 0;}// l'idf n'est pas un IDF CONSTANT
	}
}


/***Step 15 : la fonction qui returne le nombre de signe de formatage ***/

int NbrSgnFormat (char chaine [])
{
	int i =0;
	int taille = strlen(chaine);
	int compteur=0;
	for (i=0; i<taille; i++)
	{
		if ((chaine[i]==';') || (chaine[i]=='%') || (chaine[i]=='&') || (chaine[i]=='?'))
		{
			compteur++;
		}
	}
	return compteur;
}


/***Step 16 : la fonction qui returne verifie la compatibilité des types  ***/

int CompType (char entite [], char type [])
{
	int position;
	position =rechercherIDF(entite);
	if (position != -1) 
	{
		if (strcmp(tab[position].type,type)==0){return 1;}//le type est compatible
		else {return 0;}//le type n'est pas compatible
	}
}

/***Step 17 : la fonction qui insere les signes de formatage d une instruction dans un tableau  ***/

 void insererSignFormat (char chaine[],compatibilite tableau[]){
  int i = 0;
  int j= 0;
	int taille = strlen(chaine);
  	for (i=0; i<taille; i++)
	{
		switch (chaine[i])
    {
    case  ';'/* constant-expression */:
      tableau[j].signFromatage =';';/* code */
      j++;
      break;
    case  '?'/* constant-expression */:
      tableau[j].signFromatage ='?';/* code */
      j++;
      break;
    case  '&'/* constant-expression */:
      tableau[j].signFromatage ='&';/* code */
      j++;
      break;      
    case  '%'/* constant-expression */:
      tableau[j].signFromatage ='%';/* code */
      j++;
      break;    
    default:
      break;
    }
  }


 }
/***Step 18 : la fonction qui retourne le type de l iDF passe  a la fonction  ***/

char* retournType(char entite[]){
  int position=0;
  position = rechercherIDF(entite);
  if (position!=-1){
    return tab[position].type;
  }
}


/***Step 17 : la fonction qui verifier la compatibilite entre  le signe de formatage et la variable dans un tableau  ***/

int verifierCompatibilite(compatibilite tableau[],int nbr){
  int i = 0;
  for (i; i<nbr; i++){
    switch (tableau[i].signFromatage)
    {
    case ';'/* constant-expression */:
      /* code */
      if (strcmp(retournType(tableau[i].idf),"INTEGER")!=0){return i+1;} // incompatibilie de type dans la case i / la variable numero i+1
      break;
    case '%'/* constant-expression */:
      /* code */
      if (strcmp(retournType(tableau[i].idf),"REAL")!=0){return i+1;}
      break;
    case '?'/* constant-expression */:
      /* code */
      if (strcmp(retournType(tableau[i].idf),"STRING")!=0){return i+1;}
      break;
    case '&'/* constant-expression */:
      /* code */
      if (strcmp(retournType(tableau[i].idf),"CHAR")!=0){return i+1;}
      break;    
    default:
      break;
    }
  }
  return 0 ; // tous les types sont  compatible

}

/***Step 19 : la fonction qui initialise  les variabes du tableau compatibilite a zero  a   ***/
void initialiseTableau(compatibilite tableau[]){
  int i = 0; 
  int taille = sizeof(tableau);
  for (i; i<taille; i++){
    tableau[i].signFromatage=' ';
    strcpy(tableau[i].idf," ");
  }
}














