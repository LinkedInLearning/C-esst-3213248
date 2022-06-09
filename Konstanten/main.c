#include <stdio.h>
#include <stdlib.h>
const float MWST = 0.19;

int main() {
    double netto, brutto;
    printf("Geben Sie den Netobetrag ein:\n");
    scanf("%lf",&netto);
	brutto = netto + (netto * MWST);
	printf("Der Bruttopreis von %f EUR ist %f EUR.\n", netto, brutto);
	return 0;
}
