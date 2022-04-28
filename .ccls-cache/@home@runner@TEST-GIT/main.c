#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

char cp(){
  char c[2][2]={'$','$'}{'$','$'}
  
}

char piece(){
  int p=rand()%2;
  if (p==0){
    return '0';
    }
  else {
    return ' ';
  }
  
}

void aff_tab(int tab[10][10]){
	int i,j;
	printf(" A B C D E F G H I J\n");
	printf(" ___________________\n");
	
	for (j=0;j<10;j++){
		printf ("|");
		for (i=0; i<10; i++){
			printf("%c|", piece((tab[j][i])));
		}
	printf("\n");
	}
}


int main() {
  int tab[10][10]={0};
  int p;
  srand(time(NULL));
  aff_tab(tab);
}
