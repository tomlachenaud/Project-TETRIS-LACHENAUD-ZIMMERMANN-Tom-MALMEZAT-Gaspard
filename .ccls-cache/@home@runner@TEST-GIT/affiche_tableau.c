#include <stdio.h>
#define TAILLE 10

void aff_tab(char tab[TAILLE][TAILLE]){
	int i,j;
	printf(" A B C D E F G H I J\n");
	printf(" ___________________\n");
	
	for (j=0;j<10;j++){
		printf ("|");
		for (i=0; i<10; i++){
			printf("%c|", ' ');
		}
	printf("\n");
	}
}