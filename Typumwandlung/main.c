#include <stdio.h>
#include <stdlib.h>

int main()
{
    float f = 3.9;
    int i = (int)f;
    double erg1 = 2 * f;
    double erg2 = 2 * i;
    printf("%f, %f", erg1, erg2);
    return 0;
}
