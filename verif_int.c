#include <stdio.h>
//verify if the scanf get a type int and not a type char
int verif_int2(){
  int boo=0;
  int o;
  do{
    printf("Choose the orientation of the piece\n");
    int boole=scanf("%d", &o);
      while(fgetc(stdin)!='\n'){};
      if (boole==1){
        boo=1;
      }
    }while (boo==0||o < 1 || o > 2);
        return o;
        }

int verif_int4(){
  int boo=0;
  int o;
  do{
    printf("Choose the orientation of the piece\n");
    int boole=scanf("%d", &o);
      while(fgetc(stdin)!='\n'){};
      if (boole==1){
        boo=1;
      }
    }while (boo==0||o < 1 || o > 4);
        return o;
        }

int verif_int10(){
  int boo=0;
  int o;
  do{
    printf("Choose the column\n");
    int boole=scanf("%d", &o);
      while(fgetc(stdin)!='\n'){};
      if (boole==1){
        boo=1;
      }
    }while (boo==0||o < 1 || o > 10);
        return o;
        }

int verif_int7(){
  int boo=0;
  int o;
  do{
    printf("Choose the column\n");
    int boole=scanf("%d", &o);
      while(fgetc(stdin)!='\n'){};
      if (boole==1){
        boo=1;
      }
    }while (boo==0||o < 1 || o > 7);
        return o;
        }

int verif_int9(){
  int boo=0;
  int o;
  do{
    printf("Choose the column\n");
    int boole=scanf("%d", &o);
      while(fgetc(stdin)!='\n'){};
      if (boole==1){
        boo=1;
      }
    }while (boo==0||o < 1 || o > 9);
        return o;
        }
int verif_int8(){
  int boo=0;
  int o;
  do{
    printf("Choose the column\n");
    int boole=scanf("%d", &o);
      while(fgetc(stdin)!='\n'){};
      if (boole==1){
        boo=1;
      }
    }while (boo==0||o < 1 || o > 8);
        return o;
        }

