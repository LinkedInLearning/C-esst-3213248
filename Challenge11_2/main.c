#include <stdio.h>
#include <stdlib.h>

// Funktion tausche, die mit call-by-reference arbeiten soll

int main()
{
    int a = 1;
    int b = 2;
    printf("%d %d\n",a,b);
    // Aufruf Funktion tausche
    printf("%d %d\n",a,b);
    return 0;
}
