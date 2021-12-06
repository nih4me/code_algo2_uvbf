#include <stdio.h>
#include <stdlib.h>

void inc(int* a);

int main() {

    int a = 10;

    printf("\tAdresse de a avant la fonction %p\n", &a);
    printf("Avant la fonction, a = %d\n", a);
    inc(&a);
    printf("Apres la fonction, a = %d\n", a);
    printf("\tAdresse de a apres la fonction %p\n", &a);

    return 0;

}

void inc(int* a) {
    *a = 30;
    printf("\tAdresse de a dans la fonction %p\n", a);
}