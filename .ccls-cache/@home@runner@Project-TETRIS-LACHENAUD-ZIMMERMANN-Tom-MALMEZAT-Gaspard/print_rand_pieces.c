#include <stdio.h>
//print a table with the pieces 
void pieceO(char tab[2][2]){
  int i,j;
  for (i=0;i<2;i++){
    for (j=0;j<2;j++){
      printf("%c",tab[i][j]);
    }
  printf("\n");
  }
}

void pieceI(char tab1[1][4], char tab2 [4][1]){
  int i,j;
  for (i=0;i<1;i++){
    for (j=0;j<4;j++){
      printf("%c",tab1[i][j]);
    }
  printf("\n");
  }
  printf("---");
  printf ("1");
  printf("---");
  printf("\n");
  for (i=0;i<4;i++){
    for (j=0;j<1;j++){
      printf("%c",tab2[i][j]);
    }
  printf("\n");
  }
  printf("---");
  printf("2");
  printf("---");
  printf("\n");
}

void pieceT (char tab1[2][3], char tab2 [3][2], char tab3 [2][3], char tab4 [3][2]){
  int i,j;
  for (i=0;i<2;i++){
    for (j=0;j<3;j++){
      printf("%c",tab1[i][j]);
    }
  printf("\n");
  }
  printf("---");
  printf ("1");
  printf("---");
  printf("\n");
  for (i=0;i<3;i++){
    for (j=0;j<2;j++){
      printf("%c",tab2[i][j]);
    }
  printf("\n");
  }
  printf("---");
  printf("2");
  printf("---");
  printf("\n");
  for (i=0;i<2;i++){
    for (j=0;j<3;j++){
      printf("%c",tab3[i][j]);
    }
    printf("\n");
  }
  printf("---");
  printf("3");
  printf("---");
  printf("\n");
  for (i=0;i<3;i++){
    for (j=0;j<2;j++){
      printf("%c",tab4[i][j]);
    }
  printf("\n");
  }
  printf("---");
  printf("4");
  printf("---");
  printf("\n");
}

void pieceL (char tab1[2][3], char tab2 [3][2], char tab3 [2][3], char tab4 [3][2]){
  int i,j;
  for (i=0;i<2;i++){
    for (j=0;j<3;j++){
      printf("%c",tab1[i][j]);
    }
  printf("\n");
  }
  printf("---");
  printf("1");
  printf("---");
  printf("\n");
  for (i=0;i<3;i++){
    for (j=0;j<2;j++){
      printf("%c",tab2[i][j]);
    }
  printf("\n");
  }
  printf("---");
  printf("2");
  printf("---");
  printf("\n");
  for (i=0;i<2;i++){
    for (j=0;j<3;j++){
      printf("%c",tab3[i][j]);
    }
  printf("\n");
  }
  printf("---");
  printf("3");
  printf("---");
  printf("\n");
  for (i=0;i<3;i++){
    for (j=0;j<2;j++){
      printf("%c",tab4[i][j]);
    }
  printf("\n");
  }
  printf("---");
  printf("4");
  printf("---");
  printf("\n");
}

void pieceJ (char tab1[2][3], char tab2 [3][2], char tab3 [2][3], char tab4 [3][2]){
  int i,j;
  for (i=0;i<2;i++){
    for (j=0;j<3;j++){
      printf("%c",tab1[i][j]);
    }
  printf("\n");
  }
  printf("---");
  printf("1");
  printf("---");
  printf("\n");
  for (i=0;i<3;i++){
    for (j=0;j<2;j++){
      printf("%c",tab2[i][j]);
    }
  printf("\n");
  }
  printf("---");
  printf("2");
  printf("---");
  printf("\n");
  for (i=0;i<2;i++){
    for (j=0;j<3;j++){
      printf("%c",tab3[i][j]);
    }
  printf("\n");
  }
  printf("---");
  printf("3");
  printf("---");
  printf("\n");
  for (i=0;i<3;i++){
    for (j=0;j<2;j++){
      printf("%c",tab4[i][j]);
    }
  printf("\n");
  }
  printf("---");
  printf("4");
  printf("---");
  printf("\n");
}

void pieceZ(char tab1[2][3], char tab2 [3][2]){
  int i,j;
  for (i=0;i<2;i++){
    for (j=0;j<3;j++){
      printf("%c",tab1[i][j]);
    }
  printf("\n");
  }
  printf("---");
  printf("1");
  printf("---");
  printf("\n");
  for (i=0;i<3;i++){
    for (j=0;j<2;j++){
      printf("%c",tab2[i][j]);
    }
  printf("\n");
  }
  printf("---");
  printf("2");
  printf("---");
  printf("\n");

}

void pieceS(char tab1[2][3], char tab2 [3][2]){
  int i,j;
  for (i=0;i<2;i++){
    for (j=0;j<3;j++){
      printf("%c",tab1[i][j]);
    }
  printf("\n");
  }
  printf("---");
  printf("1");
  printf("---");
  printf("\n");
  for (i=0;i<3;i++){
    for (j=0;j<2;j++){
      printf("%c",tab2[i][j]);
    }
  printf("\n");
  }
  printf("---");
  printf("2");
  printf("---");
  printf("\n");
}