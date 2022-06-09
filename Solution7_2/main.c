#include <stdio.h>
#include <stdlib.h>

int main()
{
    char id;
    printf("Bitte geben Sie ein einzelnes Zeichen als Zugangscode ein:\n");
    id = getchar();

    switch(id){
       case 'x': printf("Sie haben Zugang");break;
       default: printf("Die Id war falsch");
    }

    return 0;
}
