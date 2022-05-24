#include <stdio.h>
#define SIZE 11
//verify if the piece is off the board
int verif_column ( char tab[SIZE+4][SIZE]){
  int i;
  int c=0;
  for (i=0; i<SIZE ; i++){
    if (tab[i][10]=='0'){
      c++;
    }
    }
  return c;
}
