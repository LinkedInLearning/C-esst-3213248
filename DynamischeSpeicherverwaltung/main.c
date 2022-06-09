#include <stdio.h>
#include <stdlib.h>


int main()
{
   	int groesse=10;
	int *a1;
	int *a2;

		// Speicher reservieren
	a1 = (int *) malloc(groesse * sizeof(int));

	a2 = (int *) calloc(groesse, sizeof(int));
	printf("%d\n",sizeof(a1));
	printf("%d\n",sizeof(a2));

	free(a1);
	free(a2);


    return 0;
}
