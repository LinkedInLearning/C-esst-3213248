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
    if (op3 == 'a') {
        erg = op1 + op2;
    }
    else if (op3 == 's') {
        erg = op1 - op2;
    }
    else if (op3 == 'm') {
        erg = op1 * op2;
    }
    else {
        erg = op1 / op2;
    }

	return erg;
}
