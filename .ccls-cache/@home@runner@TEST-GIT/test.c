#include <stdio.h>

int main (){
  char O [2][2]={{'$','$'},{'$','$'}};
  char I [4]={'$','$','$','$'};
  char T [2][3]={{'$','$','$'},{' ','$',' '}};
  
  
  
  
  
  
  
  int i,j;
  for (i=0;i<2;i++){
    for (j=0;j<3;j++){
      printf("%c",T[i][j]);
    }
  printf("\n");
  }
}