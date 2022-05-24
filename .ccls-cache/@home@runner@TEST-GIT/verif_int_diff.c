#include <stdio.h>
//verify if the scanf get a type int and not a type char
int verif_int_diff(){
  int boo=0;
  int o;
  do{
    printf("Please choose a difficulty between HARD (3) 5sec to play / MEDIUM (2) 10sec to play / EASY (1) 20sec to play \n");
    int boole=scanf("%d", &o);
      while(fgetc(stdin)!='\n'){};
      if (boole==1){
        boo=1;
      }
    }while (boo==0||o < 1 || o > 3);
        return o;
        }