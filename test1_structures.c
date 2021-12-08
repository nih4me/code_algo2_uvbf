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

    // declaration en tant que variable
    etudiant var1, var2; 
    
    // assignation des valeurs pour tous les types primitifs
    var1.matricule = 123;
    var1.inscrit = 1;
    var1.cote = 'A';

    // assignation des valeurs pour les chaines de caracteres
    // strcpy(dest, source) : copier ce qui se trouve dans source vers dest
    strcpy(var1.nom, "Doe");
    strcpy(var1.prenom, "John");

    // assignation des valeurs pour les pointeurs


    // Affichage
    printf("Nom: %s\n", var1.nom);
    printf("Prenom: %s\n", var1.prenom);
    printf("Matricule: %d\n", var1.matricule);
    printf("Cote: %c\n", var1.cote);
    printf("Inscription: %d\n", var1.inscrit);

    return 0;
}