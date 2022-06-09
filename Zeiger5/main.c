#include <stdio.h>
#include <stdlib.h>

int rechne(int z1, int z2, char op) {
    switch(op){
      case 'a':return z1 + z2;

      case 'm':return z1 * z2;

      case 's':return z1 - z2;

      default:return z1 / z2;


    }

}
int main()
{
    int z1 = 6;
	int z2 = 7;
	int (*berechnen) (int, int, char);
	berechnen = rechne;



	printf("Addition von Zahl1 und Zahl2: %d\n", berechnen(z1, z2, 'a'));
	printf("Multiplikation von Zahl1 und Zahl2: %d\n", berechnen(z1, z2, 'm'));

    return 0;
}
