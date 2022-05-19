#include "print_rand_pieces.c"
#include "print_table_V2.c"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 11

int verif_bas(char tab[SIZE + 4][SIZE], int c) {
  int z = 0;
  int l1, l2;
  do {
    if (tab[z + 1][c - 1] == '*') {
      l1 = z - 1;
      return l1;
    } else if (tab[z + 1][c - 1] == '$') {
      l2 = z;
      return l2;
    }
    z++;
  } while (z < SIZE + 4);
}

int main() {
  srand(time(NULL));
  char tab[SIZE + 4][SIZE] = {0};
  int r, c, i, j, l1, l2, l3, l4, o, a,z;
  z=0;
  char I1[1][4] = {'$', '$', '$', '$'};
  char I2[4][1] = {'$', '$', '$', '$'};
  char O[2][2] = {{'$', '$'}, {'$', '$'}};
  char T1[2][3] = {{'$', '$', '$'}, {' ', '$', ' '}};
  char T2[3][2] = {{'$', ' '}, {'$', '$'}, {'$', ' '}};
  char T3[2][3] = {{' ', '$', ' '}, {'$', '$', '$'}};
  char T4[3][2] = {{' ', '$'}, {'$', '$'}, {' ', '$'}};
  char L1[2][3] = {{'$', '$', '$'}, {'$', ' ', ' '}};
  char L2[3][2] = {{'$', ' '}, {'$', ' '}, {'$', '$'}};
  char L3[2][3] = {{' ', ' ', '$'}, {'$', '$', '$'}};
  char L4[3][2] = {{'$', '$'}, {' ', '$'}, {' ', '$'}};
  char J1[2][3] = {{'$', '$', '$'}, {' ', ' ', '$'}};
  char J2[3][2] = {{'$', '$'}, {'$', ' '}, {'$', ' '}};
  char J3[2][3] = {{'$', ' ', ' '}, {'$', '$', '$'}};
  char J4[3][2] = {{' ', '$'}, {' ', '$'}, {'$', '$'}};
  char Z1[2][3] = {{'$', '$', ' '}, {' ', '$', '$'}};
  char Z2[3][2] = {{' ', '$'}, {'$', '$'}, {'$', ' '}};
  char S1[2][3] = {{' ', '$', '$'}, {'$', '$', ' '}};
  char S2[3][2] = {{'$', ' '}, {'$', '$'}, {' ', '$'}};
  for (j = 0; j < SIZE - 1; j++) {
    tab[SIZE][j] = '*';
  }

  for (i = 1; i < SIZE - 1; i++) {
    for (j = 0; j < SIZE - 1; j++) {
      tab[i][j] = ' ';
    }
  }

  do {
    r = rand()%7;
    aff_tab(tab);
    if (r == 0) {
      printf("Voici la pièce\n");
      pieceO(O);
    } else if (r == 1) {
      printf("Choisir l'orientation de la pièce\n");
      pieceI(I1, I2);
      scanf("%d", &o);
    } else if (r == 2) {
      printf("Choisir l'orientation de la pièce\n");
      pieceT(T1, T2, T3, T4);
      scanf("%d", &o);
    } else if (r == 3) {
      printf("Chosir l'orientation de la pièce\n");
      pieceL(L1, L2, L3, L4);
      scanf("%d", &o);
    } else if (r == 4) {
      printf("Choisir l'orienttion de la pièce\n");
      pieceJ(J1, J2, J3, J4);
      scanf("%d", &o);
    } else if (r == 6) {
      printf("Choisir l'orientation de la pièce\n");
      pieceS(S1, S2);
      scanf("%d", &o);
    } else if (r == 5) {
      printf("Choisir l'orientation de la pièce\n");
      pieceZ(Z1, Z2);
      scanf("%d", &o);
    }
    printf("Saisir une colonne");
    scanf("%d", &c);

    if (r == 0) {
      l1 = verif_bas(tab, c);
      l2 = verif_bas(tab, c + 1);
      if (l1 > l2) {
        l1 = l2;
      }
      tab[l1][c - 1] = '$';
      tab[l1 - 1][c - 1] = '$';
      tab[l1][c] = '$';
      tab[l1 - 1][c] = '$';
    } else if (r == 1 && o == 1) {
      l1 = verif_bas(tab, c);
      l2 = verif_bas(tab, c + 1);
      l3 = verif_bas(tab, c + 2);
      l4 = verif_bas(tab, c + 3);

      if (l1 > l3) {
        l1 = l3;
      } else if (l1 > l4) {
        l1 = l4;
      } else if (l1 > l2) {
        l1 = l2;
      }
      tab[l1][c - 1] = '$';
      tab[l1][c] = '$';
      tab[l1][c + 1] = '$';
      tab[l1][c + 2] = '$';
    } else if (r == 1 && o == 2) {
      l1 = verif_bas(tab, c);
      tab[l1][c - 1] = '$';
      tab[l1 - 1][c - 1] = '$';
      tab[l1 - 2][c - 1] = '$';
      tab[l1 - 3][c - 1] = '$';
    } else if (r == 2 && o == 1) {
      l1 = verif_bas(tab, c);
      l2 = verif_bas(tab, c + 1);
      l3 = verif_bas(tab, c + 2);
      if (l1 > l3) {
        l1 = l3 + 1;
      } else if (l1 + 1 > l2) {
        l1 = l2;
      } else {
        l1 = l1 + 1;
      }

      tab[l1 - 1][c - 1] = '$';
      tab[l1][c] = '$';
      tab[l1 - 1][c] = '$';
      tab[l1 - 1][c + 1] = '$';
    } else if (r == 2 && o == 2) {
      l1 = verif_bas(tab, c);
      l2 = verif_bas(tab, c + 1);
      if (l1 > l2) {
        l1 = l2 + 1;
      }
      tab[l1][c - 1] = '$';
      tab[l1 - 1][c - 1] = '$';
      tab[l1 - 2][c - 1] = '$';
      tab[l1 - 1][c] = '$';
    } else if (r == 2 && o == 3) {
      l1 = verif_bas(tab, c);
      l2 = verif_bas(tab, c + 1);
      l3 = verif_bas(tab, c + 2);
      if (l1 > l2) {
        l1 = l2;
      } else if (l1 > l3) {
        l1 = l3;
      }
      tab[l1][c - 1] = '$';
      tab[l1][c] = '$';
      tab[l1 - 1][c] = '$';
      tab[l1][c + 1] = '$';
    } else if (r == 2 && o == 4) {
      l1 = verif_bas(tab, c);
      l2 = verif_bas(tab, c + 1);
      if (l1 + 1 > l2) {
        l1 = l2;
      } else {
        l1 = l1 + 1;
      }
      tab[l1 - 1][c - 1] = '$';
      tab[l1][c] = '$';
      tab[l1 - 1][c] = '$';
      tab[l1 - 2][c] = '$';
    } else if (r == 3 && o == 1) {
      l1 = verif_bas(tab, c);
      l2 = verif_bas(tab, c + 1);
      l3 = verif_bas(tab, c + 2);
      if (l1 > l2) {
        l1 = l2;
      } else if (l1 > l3) {
        l1 = l3;
      }
      tab[l1][c - 1] = '$';
      tab[l1 - 1][c - 1] = '$';
      tab[l1 - 1][c] = '$';
      tab[l1 - 1][c + 1] = '$';
    } else if (r == 3 && o == 2) {
      l1 = verif_bas(tab, c);
      l2 = verif_bas(tab, c + 1);
      if (l1 > l2) {
        l1 = l2;
      }
      tab[l1][c - 1] = '$';
      tab[l1 - 1][c - 1] = '$';
      tab[l1 - 2][c - 1] = '$';
      tab[l1][c] = '$';
    } else if (r == 3 && o == 3) {
      l1 = verif_bas(tab, c);
      l2 = verif_bas(tab, c + 1);
      l3 = verif_bas(tab, c + 2);
      if (l1 > l2) {
        l1 = l2;
      } else if (l1 > l3) {
        l1 = l3;
      }
      tab[l1][c - 1] = '$';
      tab[l1][c] = '$';
      tab[l1][c + 1] = '$';
      tab[l1 - 1][c + 1] = '$';
    } else if (r == 3 && o == 4) {
      l1 = verif_bas(tab, c);
      l2 = verif_bas(tab, c + 1);
      if (l1 + 2 > l2) {
        l1 = l2;
      } else {
        l1 = l1 + 2;
      }
      tab[l1 - 2][c - 1] = '$';
      tab[l1][c] = '$';
      tab[l1 - 1][c] = '$';
      tab[l1 - 2][c] = '$';
    } else if (r == 4 && o == 1) {
      l1 = verif_bas(tab, c);
      l2 = verif_bas(tab, c + 1);
      l3 = verif_bas(tab, c + 2);
      if (l1 > l2) {
        l1 = l2;
      } else if (l1 + 1 > l3) {
        l1 = l3;
      } else {
        l1 = l1 + 1;
      }
      tab[l1 - 1][c - 1] = '$';
      tab[l1 - 1][c] = '$';
      tab[l1][c + 1] = '$';
      tab[l1 - 1][c + 1] = '$';
    } else if (r == 4 && o == 2) {
      l1 = verif_bas(tab, c);
      l2 = verif_bas(tab, c + 1);
      if (l1 > l2) {
        l1 = l2 + 2;
      }
      tab[l1][c - 1] = '$';
      tab[l1 - 1][c - 1] = '$';
      tab[l1 - 2][c - 1] = '$';
      tab[l1 - 2][c] = '$';
    } else if (r == 4 && o == 3) {
      l1 = verif_bas(tab, c);
      l2 = verif_bas(tab, c + 1);
      l3 = verif_bas(tab, c + 2);
      if (l1 > l2) {
        l1 = l2;
      } else if (l1 > l3) {
        l1 = l3;
      }
      tab[l1][c - 1] = '$';
      tab[l1 - 1][c - 1] = '$';
      tab[l1][c] = '$';
      tab[l1][c + 1] = '$';
    } else if (r == 4 && o == 4) {
      l1 = verif_bas(tab, c);
      l2 = verif_bas(tab, c + 1);
      if (l1 > l2) {
        l1 = l2;
      }
      tab[l1][c - 1] = '$';
      tab[l1][c] = '$';
      tab[l1 - 1][c] = '$';
      tab[l1 - 2][c] = '$';
    } else if (r == 5 && o == 1) {
      l1 = verif_bas(tab, c);
      l2 = verif_bas(tab, c + 1);
      l3 = verif_bas(tab, c + 2);
      if (l1 + 1 > l2) {
        l1 = l2;
      } else if (l1 + 1 > l3) {
        l1 = l3;
      } else {
        l1 = l1 + 1;
      }
      tab[l1 - 1][c - 1] = '$';
      tab[l1][c] = '$';
      tab[l1 - 1][c] = '$';
      tab[l1][c + 1] = '$';
    } else if (r == 5 && o == 2) {
      l1 = verif_bas(tab, c);
      l2 = verif_bas(tab, c + 1);
      if (l1 > l2) {
        l1 = l2 + 1;
      }
      tab[l1][c - 1] = '$';
      tab[l1 - 1][c - 1] = '$';
      tab[l1 - 1][c] = '$';
      tab[l1 - 2][c] = '$';
    } else if (r == 6 && o == 1) {
      l1 = verif_bas(tab, c);
      l2 = verif_bas(tab, c + 1);
      l3 = verif_bas(tab, c + 2);
      if (l1 > l2) {
        l1 = l2;
      } else if (l1 > l3) {
        l1 = l3 + 1;
      }
      tab[l1][c - 1] = '$';
      tab[l1][c] = '$';
      tab[l1 - 1][c] = '$';
      tab[l1 - 1][c + 1] = '$';
    } else if (r == 6 && o == 2) {
      l1 = verif_bas(tab, c);
      l2 = verif_bas(tab, c + 1);
      if (l1 + 1 > l2) {
        l1 = l2;
      } else {
        l1 = l1 + 1;
      }
      tab[l1 - 1][c - 1] = '$';
      tab[l1 - 2][c - 1] = '$';
      tab[l1 - 1][c] = '$';
      tab[l1][c] = '$';
    }
    for (i=5;i<SIZE+4;i++){
      for (j=1;j<SIZE;j++){
        if (tab[i][j-1]=='$'){
          z++;
          }
        }
      if (z==10){
        for(j=1;j<SIZE-1;j++){
          tab[i][j-1]=tab[i-1][j-1];
      }
      }
      }
  } while (l1 - 1 > 0);
  aff_tab(tab);
  printf("GAME OVER!\n");
}