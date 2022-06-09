#include <stdio.h>
#include <stdlib.h>

int main()
{
    int z = 42;
    int *antwort=NULL;
    if(antwort != NULL)
    printf("Wert, der vom Zeiger adressiert wird: %d\n", *antwort);
    antwort = &z;
    if(antwort != NULL)
    printf("Wert, der vom Zeiger adressiert wird: %d\n", *antwort);
    return 0;
}
