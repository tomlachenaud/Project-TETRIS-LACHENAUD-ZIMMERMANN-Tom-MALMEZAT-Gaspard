#include <stdio.h>

int main (){
  char tab [2][2]={{'$','$'},{'$','$'}};
  int i,j;
  for (i=0;i<2;i++){
    for (j=0;j<2;j++){
      printf("%c",tab[i][j]);
    }
  printf("\n");
  }
}