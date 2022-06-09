#include <stdio.h>
#include <stdlib.h>

int main()
{
    char id;
    printf("Bitte geben Sie ein einzelnes Zeichen als Zugangscode ein:\n");
    id = getchar();
    printf(id=='x'? "Sie haben Zugang": "Die Id war falsch");
    return 0;
}
