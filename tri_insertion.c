#include <stdio.h>
#include <stdlib.h>

int main () {

    int i, j, N, tmp; /* déclaration des variables */

    /* saisie du nombre d'éléments du tableau */
    printf("Entrer le nombre d'elements du tableau : ");
    scanf("%d", &N);

    // Declaration du tableau á trier
    int tab[N];

    /* saisie des éléments du tableau */
    for(i = 0; i <= N - 1; i++){
        printf("Saisir l'element %d: ", i + 1);
        scanf("%d", &tab[i]);
    }

    printf("Tableau non trié: \n");
    for(i = 0; i <= N - 1; i++){
        printf("%d\t", tab[i]);
    }

    // 1. variables : i, j, N: entiers
    // 2.           : tab[N] : tableau de N entiers
    // 3. pour i allant de 0 à N - 1
    // 4.      j = i + 1
    // 5.      tant que Tab[j-1] > Tab [j] et (j > 0)
    // 6.          échanger(Tab[j], Tab[j-1])
    // 7.          j--
    // **************
    /* tri du tableau par ordre croissant */
    for (i = 0; i <= N - 1; i++) {
        j = i + 1;
        while (tab[j - 1] > tab[j] && j > 0) {
            tmp = tab[j - 1];
            tab[j - 1] = tab[j];
            tab[j] = tmp;
            j--;
        }
    }
    // **************

    printf("\n\nTableau trié: \n");
    for(i = 0; i <= N-1; i++){
        printf("%d\t",tab[i]);
    }

    return 0;
}