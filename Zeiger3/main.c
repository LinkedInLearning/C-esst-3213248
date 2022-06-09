#include <stdio.h>
#include <stdlib.h>

void rechne(int *z1, int *z2, int *erg, char *op) {
    switch(*op){
      case 'a':*erg = *z1 + *z2;
      break;
      case 'm':*erg = *z1 * *z2;
      break;
      case 's':*erg = *z1 - *z2;
      break;
      default:*erg = *z1 / *z2;


    }

}
int main()
{
    int z1 = 6;
	int z2 = 7;
	char op = 'a';
	int erg;

	rechne(&z1, &z2, &erg, &op);

	printf("Addition von Zahl1 und Zahl2: %d\n", erg);
	op = 'm';
	rechne(&z1, &z2, &erg, &op);
	printf("Multiplikation von Zahl1 und Zahl2: %d\n", erg);

    return 0;
}
