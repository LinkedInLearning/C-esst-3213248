#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matrix[2][3][2];
    matrix[0][0][0] = 1;
    matrix[0][1][0] = 2;
    matrix[0][2][0] = 3;
    matrix[1][0][0] = -1;
    matrix[1][1][0] = -2;
    matrix[1][2][0] = -3;
    matrix[0][0][1] = 10;
    matrix[0][1][1] = 20;
    matrix[0][2][1] = 30;
    matrix[1][0][1] = -10;
    matrix[1][1][1] = -20;
    matrix[1][2][1] = -30;

	printf("%d\t", matrix[1][2][0]);
    printf("%d\t", matrix[1][1][1]);


    return 0;
}
