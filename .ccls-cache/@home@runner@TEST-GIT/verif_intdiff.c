#include <stdio.h>

int verif_intdiff(){
  int boo=0;
  int o;
  do{
    printf("Choose the difficulty between Hard (3) Medium (2) and Easy (1)\n");
    int boole=scanf("%d", &o);
      while(fgetc(stdin)!='\n'){};
      if (boole==1){
        boo=1;
      }
    }while (boo==0||o == 1 || o == 2 || o == 3);
        return o;
        }