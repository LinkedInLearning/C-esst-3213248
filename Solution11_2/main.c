#include <stdio.h>
#include <stdlib.h>

void tausche(int *a, int *b){
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}

int main()
{
    int a = 1;
    int b = 2;
    printf("%d %d\n",a,b);
    tausche(&a,&b);
    printf("%d %d\n",a,b);
    return 0;
}
