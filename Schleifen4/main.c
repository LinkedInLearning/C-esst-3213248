#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 0;
    while (1) {
      printf("Hello world!\n");
      if(i++ > 5) break;

    }
    for (i=0;i < 10;i++) {
        if(i%2==0) continue;
        printf("%d\n",i);
    }
    return 0;
}
