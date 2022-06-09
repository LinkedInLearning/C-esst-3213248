#include <stdio.h>
#include <stdlib.h>

int main()
{
    int z=42;
    int *p1 = &z;
    int **pp2 = &p1;

    printf("Wert von Zeiger auf Zeiger: %d\n", **pp2);
    printf("Adresse von Zeiger auf Zeiger: %d\n", *pp2);

    return 0;
}
