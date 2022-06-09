#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matrix[2][3];
    matrix[0][0] = 1;
    matrix[0][1] = 2;
    matrix[0][2] = 3;
    matrix[1][0] = -1;
    matrix[1][1] = -2;
    matrix[1][2] = -3;

    int i, j;

// Schleife fuer 1. Dimension
    for(i=0; i<2; i++) {
	// Schleife fuer 2. Dimension
        for(j=0; j<3; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}
