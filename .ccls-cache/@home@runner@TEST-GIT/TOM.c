#include "print_rand_pieces.c"
#include "print_table_V2.c"
#include "verif_line.c"
#include "verify_column.c"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
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
  char g[1000];
  char n[1000];
  char name;
  //char hn;
  int q;
  int r, c, i, j, l1, l2, l3, l4, o, a, z, score;
  char x;
  z = 0;
  score = 0;
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
    tab[SIZE + 1][j] = '*';
  }

  for (i = 1; i < SIZE; i++) {
    for (j = 0; j < SIZE - 1; j++) {
      tab[i][j] = ' ';
    }
  }
  for (i = 0; i < SIZE; i++) {
    tab[i][10] = ' ';
  }
  printf("Saisir votre nom");
  scanf("%s", &name);
  printf("%s", &name);
  do {
    r = 1;
    o=0;
    c=0;

    aff_tab(tab);
    if (r == 0) {
      printf("Voici la pièce\n");
      pieceO(O);
    } else if (r == 1) {
      printf("Choisir l'orientation de la pièce\n");
      pieceI(I1, I2);
      scanf("%d", &o);
      sleep(10);
      if (o==0){
          o=(rand()%2)+1;
        }
      while (o < 1 || o > 2) {
        printf("Erreur Choisir l'orientation de la pièce");
        scanf("%d", &o);
        
      }
      
    } else if (r == 2) {
      printf("Choisir l'orientation de la pièce\n");
      pieceT(T1, T2, T3, T4);
      scanf("%d", &o);
      while (o < 1 || o > 4) {
        printf("Erreur Choisir l'orientation de la pièce");
        scanf("%d", &o);
      }
    } else if (r == 3) {
      printf("Chosir l'orientation de la pièce\n");
      pieceL(L1, L2, L3, L4);
      scanf("%d", &o);
      while (o < 1 || o > 4) {
        printf("Erreur Choisir l'orientation de la pièce");
        scanf("%d", &o);
      }
    } else if (r == 4) {
      printf("Choisir l'orienttion de la pièce\n");
      pieceJ(J1, J2, J3, J4);
      scanf("%d", &o);
      while (o < 1 || o > 4) {
        printf("Erreur Choisir l'orientation de la pièce");
        scanf("%d", &o);
      }
    } else if (r == 6) {
      printf("Choisir l'orientation de la pièce\n");
      pieceS(S1, S2);
      scanf("%d", &o);
      while (o < 1 || o > 2) {
        printf("Erreur Choisir l'orientation de la pièce");
        scanf("%d", &o);
      }
    } else if (r == 5) {
      printf("Choisir l'orientation de la pièce\n");
      pieceZ(Z1, Z2);
      scanf("%d", &o);
      while (o < 1 || o > 2) {
        printf("Erreur Choisir l'orientation de la pièce");
        scanf("%d", &o);
        
      }
    }

    printf("Saisir une colonne");
    scanf("%d", &c);

    if (r == 0) {
      while (c > 9 || c < 1) {
        printf("erreur ressaisir colonne");
        scanf("%d", &c);
      }
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

      while (c > 7 || c < 1) {
        printf("erreur ressaisir colonne");
        scanf("%d", &c);
      }
      if (sleep(10)==0&&c==0){
        c=(rand()%7)+1;
      }
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
      while (c > 10 || c < 1) {
        printf("erreur ressaisir colonne");
        scanf("%d", &c);
      }
      if (sleep(10)==0&&c==0){
        c=(rand()%10)+1;
      }

      l1 = verif_bas(tab, c);
      tab[l1][c - 1] = '$';
      tab[l1 - 1][c - 1] = '$';
      tab[l1 - 2][c - 1] = '$';
      tab[l1 - 3][c - 1] = '$';
    } else if (r == 2 && o == 1) {
      while (c > 8 || c < 1) {
        printf("erreur ressaisir colonne");
        scanf("%d", &c);
      }

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
      while (c > 9 || c < 1) {
        printf("erreur ressaisir colonne");
        scanf("%d", &c);
      }
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
      while (c > 8 || c < 1) {
        printf("erreur ressaisir colonne");
        scanf("%d", &c);
      }
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
      while (c > 9 || c < 1) {
        printf("erreur ressaisir colonne");
        scanf("%d", &c);
      }
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
      while (c > 8 || c < 1) {
        printf("erreur ressaisir colonne");
        scanf("%d", &c);
      }
      l1 = verif_bas(tab, c);
      l2 = verif_bas(tab, c + 1);
      l3 = verif_bas(tab, c + 2);
      if (l1 > l2 + 1) {
        l1 = l2;
      } else if (l1 > l3 + 1) {
        l1 = l3;
      }
      tab[l1][c - 1] = '$';
      tab[l1 - 1][c - 1] = '$';
      tab[l1 - 1][c] = '$';
      tab[l1 - 1][c + 1] = '$';
    } else if (r == 3 && o == 2) {
      while (c > 9 || c < 1) {
        printf("erreur ressaisir colonne");
        scanf("%d", &c);
      }
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
      while (c > 8 || c < 1) {
        printf("erreur ressaisir colonne");
        scanf("%d", &c);
      }
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
      while (c > 9 || c < 1) {
        printf("erreur ressaisir colonne");
        scanf("%d", &c);
      }
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
      while (c > 8 || c < 1) {
        printf("erreur ressaisir colonne");
        scanf("%d", &c);
      }
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
      while (c > 9 || c < 1) {
        printf("erreur ressaisir colonne");
        scanf("%d", &c);
      }
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
      while (c > 8 || c < 1) {
        printf("erreur ressaisir colonne");
        scanf("%d", &c);
      }
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
      while (c > 9 || c < 1) {
        printf("erreur ressaisir colonne");
        scanf("%d", &c);
      }
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
      while (c > 8 || c < 1) {
        printf("erreur ressaisir colonne");
        scanf("%d", &c);
      }
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
      while (c > 9 || c < 1) {
        printf("erreur ressaisir colonne");
        scanf("%d", &c);
      }
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
      while (c > 8 || c < 1) {
        printf("erreur ressaisir colonne");
        scanf("%d", &c);
      }
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
      while (c > 9 || c < 1) {
        printf("erreur ressaisir colonne");
        scanf("%d", &c);
      }
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
    int tablp[4] = {5};
    int ind = 0;
    for (int l = 0; l < SIZE; l++) {
      if (verif_line(l, tab) == 10) {
        ind++;
        tablp[ind] = l;
      }
      if (ind == 4) {
        score = score + 1200;
        for (i = 1; i < 4; i++) {
          for (j = 0; j < SIZE - 1; j++) {
            tab[tablp[i + 1]][j] = '-';
          }
        }
      } else if (ind == 3) {
        score = score + 300;
        for (i = 1; i < 3; i++) {
          for (j = 0; j < SIZE - 1; j++) {
            tab[tablp[i + 1]][j] = '-';
          }
        }
      } else if (ind == 2) {
        score = score + 100;
        for (i = 1; i < 2; i++) {
          for (j = 0; j < SIZE - 1; j++) {
            tab[tablp[i + 1]][j] = '-';
          }
        }
      } else if (ind == 1) {
        score = score + 40;
        for (j = 0; j < SIZE - 1; j++) {
          tab[tablp[1]][j] = '-';
        }
      } else {
        score = score;
      }
    }
    for (j = 0; j < SIZE - 1; j++) {
      tab[0][j] = ' ';
    }
    for (int l = 0; l < SIZE; l++) {
      if (verif_void(l, tab) == 10) {
        for (i = SIZE - 1; i > -1; i--) {
          for (j = 0; j < SIZE - 1; j++) {
            tab[i + 1][j] = tab[i][j];
          }
        }
      }
    }

    printf("SCORE : %d\n", score);
  } while (verif_high(1, tab) == 10);

  aff_tab(tab);
  printf("GAME OVER!\n");
  printf("Votre score est %d\n", score);
  FILE *NAME = NULL;
  NAME = fopen("Name.txt", "r");
  FILE *SCORE = NULL;
  printf("%s", &name);
  SCORE = fopen("high_score.txt", "r");
  char tableau[1000];
  char hn[1000];
  fgets(tableau,999,SCORE);
  //fscanf(SCORE, "%s", &x);
  printf("%s", &name);

  q = atoi(&x);
  printf("%s", &name);

  if (score < q) {
    //fscanf(NAME, "%s", &hn);
    fgets(hn,999,NAME);
    printf("%s", &name);

    printf("Le meilleur score est %d par %s", q, hn);
    fclose(SCORE);
    fclose(NAME);
  } else {

    SCORE = fopen("high_score.txt", "w");
    NAME = fopen("Name.txt", "w");
    sprintf(g, "%d", score);
    fputs(n, NAME);
    fputs(g, SCORE);
    fclose(SCORE);
    fclose(NAME);
    printf("Le meilleur score est %d par %s", score, &name);
  }
}