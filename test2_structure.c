#include <stdlib.h>
#include <stdio.h>
#include <string.h> // lib manipuler les chaines de caractères

int main() {

    typedef struct etudiant etudiant; // declaration votre nouveau type `etudiant`
    struct etudiant {
        int matricule;
        char nom[20];
        char prenom[50];
        short inscrit;
        char cote;
    }; // definition des element de votre nouveau type `etudiant`

    // declaration et allocation dynamique
    etudiant *var1 = malloc(sizeof(*var1));
    
    var1->matricule = 123;
    var1->inscrit = 0;

    printf("Matricule: %d\n", var1->matricule);
    printf("Inscription: %d\n", var1->inscrit);

    // fini
    free(var1);

    // Affichage

    return 0;
}