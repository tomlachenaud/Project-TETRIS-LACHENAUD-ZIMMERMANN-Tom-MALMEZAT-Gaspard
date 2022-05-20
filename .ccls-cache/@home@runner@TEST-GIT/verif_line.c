#include <stdio.h>
#define SIZE 11
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

