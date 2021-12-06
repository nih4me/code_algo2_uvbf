#include <stdio.h>
#include <stdlib.h>

void tri_selection(/*Votre tableau*/, /*La taille du tableau*/) {
    // **************
    /* tri du tableau par ordre croissant */
    for(i = 0; i <= N - 1; i++){
        pos_min = i;
        for(j = i; j <= N - 1; j++) {
            if (tab[j] < tab[pos_min]) {
                pos_min = j;
            }
        }

        tmp = tab[i];
        tab[i] = tab[pos_min];
        tab[pos_min] = tmp;
    }
    // **************
}

int main () {

    int i, j, N, pos_min, tmp; /* déclaration des variables */

    /* saisie du nombre d'éléments du tableau */
    printf("Entrer le nombre d'elements du tableau : ");
    scanf("%d", &N);

    // Declaration du tableau á trier
    int tab[N];

    /*************** Debut Saisie *****************/
    /* saisie des éléments du tableau */
    for(i = 0; i <= N - 1; i++){
        printf("Saisir l'element %d: ", i + 1);
        scanf("%d", &tab[i]);
    }
    printf("Tableau non trié: \n");
    for(i = 0; i <= N - 1; i++){
        printf("%d\t", tab[i]);
    }
    /*************** Fin Saisie *****************/

    /*************** Debut Trie *****************/
    tri_selection(/*Votre tableau*/, /*La taille du tableau*/);
    /*************** Fin Trie *****************/


    /*************** Debut Affichage tableau trié *****************/
    printf("\n\nTableau trié: \n");
    for(i = 0; i <= N-1; i++){
        printf("%d\t",tab[i]);
    }
    /*************** Fin Affichage tableau trié *****************/

    return 0;
}