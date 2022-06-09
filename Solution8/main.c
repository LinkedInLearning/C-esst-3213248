#include <stdio.h>
#include <stdlib.h>

int main()
{
    for (int i=33; i < 127;i++){
        printf("%d\t%c\n",i, (char)i);
    }
    return 0;
}
