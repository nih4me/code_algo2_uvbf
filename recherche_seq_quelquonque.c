#include <stdio.h>
#include <stdlib.h>

// recherche_seq(tableau, N, x) -> entier
int recherche_seq(int x) {
    int N = 10;
    int i;
    int tab[10] = {10, 8,  -1, 2,  5,  -1, -10, 25, -19, 3};

    for (i = 0; i <= N - 1; i++) {
        if (tab[i] == x) {
            return i;
        }
    }

    return -1;
}

int recherche_seq2(int* tab, int N, int x) {
    
    int i;
    for (i = 0; i <= N - 1; i++) {
        if (*tab[i] == x) {
            return i;
        }
    }

    return -1;
}


int main () {
    int x;
    printf("Saisir la valeur á rechercher dans \n[10, 8,  -1, 2,  5,  -1, -10, 25, -19, 3] : ");
    scanf("%d", &x);

    int resultat = recherche_seq(x);
    if (resultat == -1) {
        printf("Valeur non trouvée");
    } else {
        printf("Valeur trouvée á la position %d.", resultat);
    }

    return 0;
    
}