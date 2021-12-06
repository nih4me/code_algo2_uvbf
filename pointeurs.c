#include <stdio.h>
#include <stdlib.h>

// liste(1, 2, 3, 4, 5)

int main() {
    int i = 10;
    // pointeur
    int *p = &i;
    // scanf("%d", &i);
    printf("Valeur de i = %d.\n", i);
    printf("Pointeur vers i = %p.\n\n", p);

    int *j;
    printf("Pointeur j %p.\n", j);
    printf("Valeur j %d", *j);

    return 0;
}