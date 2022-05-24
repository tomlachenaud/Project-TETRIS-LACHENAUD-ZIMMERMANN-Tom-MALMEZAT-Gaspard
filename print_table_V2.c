#include <stdio.h>
#define TAILLE 11
//print the game board
void aff_tab(char tab[TAILLE+4][TAILLE]){
	int i,j;
	printf(" 1 2 3 4 5 6 7 8 9 10\n");
	printf(" ___________________\n");
	
	for (j=1;j<TAILLE;j++){
		printf ("|");
		for (i=0; i<TAILLE-1; i++){
			printf("%c|", tab[j][i]);
		}
	printf("\n");
	}
}