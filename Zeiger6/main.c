#include <stdio.h>
#include <stdlib.h>

int main()
{
    int z[] = { 1, 2, 3, 5, 7, 9, 11 };
    printf("Groesse des Arrays: %d\n", sizeof(z));


    // Positionszeiger
    int *index;

    // Position auf den Anfragn des Arrays setzen
    index = z;
    printf("Wert index: %d\n", *index);

    // Position auf naechstes Element setzen
    index++;
    printf("Wert index: %d\n", *index);

     // Position auf das letzte Element setzen
    index = index + sizeof(z)/sizeof(int) - 2;
    printf("Wert index: %d\n", *index);
    return 0;
}
