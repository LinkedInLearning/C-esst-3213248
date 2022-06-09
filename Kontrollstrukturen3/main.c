#include <stdio.h>
#include <stdlib.h>

int rechne(int op1, int op2, char op3);
int main()
{
    int a, b, erg;
    char c;
    printf("Geben Sie die erste Zahl ein:\n");
    scanf("%i",&a);
    printf("Geben Sie die zweite Zahl ein:\n");
    scanf("%i",&b);
    printf("Geben Sie an, welche Operation ausgefuehrt werden soll (a, s, m, d):\n");
    scanf(" %c",&c);
    erg = rechne(a, b, c);
	printf("Berechnung von %d und %d ist %d\n", a, b, erg);
	return 0;
}

int rechne(int op1, int op2, char op3) {


    int erg;
    switch(op3) {
        case 'a': erg = op1 + op2;break;
        case 's': erg = op1 - op2;break;
        case 'm': erg = op1 * op2;break;
        default: erg = op1 / op2;
    }

	return erg;
}
