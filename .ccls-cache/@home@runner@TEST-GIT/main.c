#include <stdio.h>
#include <stdlib.h>
#include <time.h> 
#include "affiche_tableau.c"
#include "affiche_alea_piece.c"
#include "gaspard.c"
#include "remplissage_tableau.c"
#define TAILLE 10

int main(){
  srand(time(NULL));
  char tab[TAILLE+4][TAILLE];
  int a,b;
  char I1 [1][4]={'$','$','$','$'};
  char I2 [4][1]={'$','$','$','$'};
  char O [2][2]={{'$','$'},{'$','$'}};
  char T1 [2][3]={{'$','$','$'},{' ','$',' '}};
  char T2 [3][2]={{'$',' '},{'$','$'},{'$',' '}};
  char T3 [2][3]={{' ','$',' '},{'$','$','$'}};
  char T4 [3][2]={{' ','$'},{'$','$'},{' ','$'}};
  char L1 [2][3]={{'$','$','$'},{'$',' ',' '}};
  char L2 [3][2]={{'$',' '},{'$',' '},{'$','$'}};
  char L3 [2][3]={{' ',' ','$'},{'$','$','$'}};
  char L4 [3][2]={{'$','$'},{' ','$'},{' ','$'}};
  char J1 [2][3]={{'$','$','$'},{' ',' ','$'}};
  char J2 [3][2]={{'$','$'},{'$',' '},{'$',' '}};
  char J3 [2][3]={{'$',' ',' '},{'$','$','$'}};
  char J4 [3][2]={{' ','$'},{' ','$'},{'$','$'}};
  char Z1 [2][3]={{'$','$',' '},{' ','$','$'}};
  char Z2 [3][2]={{' ','$'},{'$','$'},{'$',' '}};
  char S1 [2][3]={{' ','$','$'},{'$','$',' '}};
  char S2 [3][2]={{'$',' '},{'$','$'},{' ','$'}};
 
  //do{
  aff_tab(tab);
  printf ("\n");
  a = rand()%6;
  if (a==0){
    printf ("Voici la pièce\n");
    pieceO(O);
  }
  else if (a==1){
    printf("Choisir l'orientation de la pièce\n");
    pieceI(I1,I2);
    scanf("%d",&b);
  }
  else if (a==2){
    printf("Choisir l'orientation de la pièce\n");
    pieceT (T1,T2,T3,T4);
    scanf("%d",&b);
  }
  else if(a==3){
    printf("Chosir l'orientation de la pièce\n");
    pieceL (L1,L2,L3,L4);
    scanf("%d",&b);
  }
  else if (a==4){
    printf ("Choisir l'orienttion de la pièce\n");
    pieceJ (J1,J2,J3,J4);
    scanf("%d",&b);
  }
  else if (a==5){
    printf("Choisir l'orientation de la pièce\n");
    pieceZ(Z1,Z2);
    scanf("%d",&b);
  }
  else if (a==6){
    printf("Choisir l'orientation de la pièce\n");
    pieceS(S1,S2);
    scanf("%d",&b);
  }
  // }while ();
}
