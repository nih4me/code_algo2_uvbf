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
    var1.matricule = 123; // scanf("%d", &var1.matricule);
    var1.inscrit = 1; // scanf("%d", &var1.inscrit);
    var1.cote = 'A'; // scanf("%c", &var1.cote);

    // assignation des valeurs pour les chaines de caracteres
    // strcpy(dest, source) : copier ce qui se trouve dans source vers dest
    strcpy(var1.nom, "Doe"); // char tmp1[20]; scanf("%s", tmp1); strcpy(var1.nom, tmp1);
    strcpy(var1.prenom, "John"); // char tmp2[50]; scanf("%s", tmp2); strcpy(var1.prenom, tmp2);

    // assignation des valeurs pour les pointeurs

    // Affichage
    printf("Nom: %s\n", var1.nom);
    printf("Prenom: %s\n", var1.prenom);
    printf("Matricule: %d\n", var1.matricule);
    printf("Cote: %c\n", var1.cote);
    printf("Inscription: %d\n", var1.inscrit);

    return 0;
}