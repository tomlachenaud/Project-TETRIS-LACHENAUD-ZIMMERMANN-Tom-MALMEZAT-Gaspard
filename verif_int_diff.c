#include <stdio.h>

int verif_int_diff(){
  int boo=0;
  int o;
  do{
    printf("Please choose a difficulty between HARD (3) MEDIUM (2) and EASY (1)\n");
    int boole=scanf("%d", &o);
      while(fgetc(stdin)!='\n'){};
      if (boole==1){
        boo=1;
      }
    }while (boo==0||o < 1 || o > 3);
        return o;
        }