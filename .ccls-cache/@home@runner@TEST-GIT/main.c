#include"game2.c"
#include"verif_int_diff.c"
#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>
#include <time.h>

int main(){
int d = verif_int_diff();
  
  int t;
    if (d==1){
      t=20;
    }
  else if(d==2){
    t=10;
  }
  else if (d==3){
      t=5;
  }
 game2(t);
}
