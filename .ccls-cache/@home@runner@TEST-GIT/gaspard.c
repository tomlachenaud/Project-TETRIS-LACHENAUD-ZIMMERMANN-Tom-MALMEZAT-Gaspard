#include <stdio.h>
#include "affiche_alea_piece.c"
#define TAILLE 10
#define zoneN 4

int demande_colonne()
{
    int num_colonne, verif=0;
    while(verif != 1)
    {
        printf("saisir le numéro de la colonne de votre choix");
        scanf("%d", &num_colonne);
        if(num_colonne < 10 || num_colonne >= 0)
        {
            verif++;
        }
    }
    return num_colonne;
}

void placement_piece(char tab[TAILLE+zoneN][TAILLE], char piece)
{
    int y=0, x;
    x = demande_colonne();
    while(y<10 && (tab[y+1][x] != ' ' ))
    {    
        
        
    }



    
}