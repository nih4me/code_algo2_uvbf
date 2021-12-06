#include <stdlib.h>
#include <stdio.h>

int main() {
    int x; // Reservation d'un emplacement en memoire pour une valeur de type int
    x = 10; // Ecire 10 á l'emplacement reservé

    int* px; // Un pointeur
    px = &x; // Changer l'adresse contenu dans le pointeur. &x -> adresse de l'emplacement en memoire pour x

    *px = 20; // changer la valeur contenu à l'adresse du pointeur

    printf("%d", x);

    return 0;
}