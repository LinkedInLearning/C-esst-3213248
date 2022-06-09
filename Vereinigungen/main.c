#include <stdio.h>
#include <stdlib.h>

int main()
{

    union werte{
      int a;
      int b;
    };
    union werte meineZahlen;
    meineZahlen.a = 1;

    printf("%d\n",meineZahlen.a);
    meineZahlen.b = 2;

    printf("%d\n",meineZahlen.a);

    return 0;
}
