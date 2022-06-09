#include <stdio.h>
#include <stdlib.h>

int rechne(int op1, int op2)
int main()
{
    int a, b, erg;
    printf("Geben Sie die erste Zahl ein:\n");
    scanf("%i",&a);
    printf("Geben Sie die zweite Zahl ein:\n");
    scanf("%i",&b);
    erg = rechne(a, b);
	printf("Summe von %d und %d ist %d\n", a, b, erg);
	return 0;
}

int rechne(int op1, int op2) {
	return (op1 + op2);
}
