#include <stdio.h>
#define SIZE 11
//verify if the line is full of $
int verif_line (int l, char tab[SIZE+4][SIZE]){
  int i;
  int c=0;
  for (i=0; i<SIZE-1 ; i++){
    if (tab[l][i]=='$'){
      c++;
    }
    }
  return c;
}
//verify if the line is full of void
int verif_void(int l,char tab[SIZE+4][SIZE]){
  int i;
  int c=0;
  for (i=0; i<SIZE-1 ; i++){
    if (tab[l][i]=='-'){
      c++;
    }
    }
  return c;
}
//verify if a piece is too high
int verif_high(int l,char tab[SIZE+4][SIZE]){
  int i;
  int c=0;
  for (i=0; i<SIZE-1 ; i++){
    if (tab[l][i]==' '){
      c++;
    }
    }
  return c;
}

