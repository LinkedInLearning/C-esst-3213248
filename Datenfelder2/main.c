#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 0;
    int pz[5];
    pz[0] = 1;
    pz[1] = 2;
    pz[2] = 3;
    pz[3] = 5;
    pz[4] = 7;
    for(i=0; i<5; i++) {
      printf("%d\n",pz[i]);
    }
    return 0;
}
