#include <stdio.h>
#include <stdlib.h>

int main()
{
    int z = 42;
    int *antwort;
    antwort = &z;
    printf("Wert, der vom Zeiger adressiert wird: %d\n", *antwort);

    return 0;
}
