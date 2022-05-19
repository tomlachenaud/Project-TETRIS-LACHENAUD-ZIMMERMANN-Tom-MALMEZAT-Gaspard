#include <stdio.h>
#define TAILLE 11

void aff_tab(char tab[TAILLE+4][TAILLE]){
	int i,j;
	printf(" A B C D E F G H I J\n");
	printf(" ___________________\n");
	
	for (j=1;j<TAILLE-1;j++){
		printf ("|");
		for (i=0; i<TAILLE-1; i++){
			printf("%c|", tab[j][i]);
		}
	printf("\n");
	}
}