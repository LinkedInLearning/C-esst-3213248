#include <stdio.h>
#include <stdlib.h>

int main()
{
    char id;
    printf("Bitte geben Sie ein einzelnes Zeichen als Zugangscode ein:\n");
    id = getchar();
    if (id=='x'){
      printf("Sie haben Zugang");
    }
    else {
      printf("Die Id war falsch");
    }

    return 0;
}
