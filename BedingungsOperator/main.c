#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, max;
    printf("Geben Sie die erste Zahl ein:\n");
    scanf("%i",&a);
    printf("Geben Sie die zweite Zahl ein:\n");
    scanf("%i",&b);
    max = (a > b) ? a : b;
    printf("\nDie groessere Zahl war %d\n",max);
    return 0;
}
