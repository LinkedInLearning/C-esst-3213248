#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;
    a = 1;
    b = 2;
    c = 2;
    printf("%d\n", (c == b) ^ (c == b));
    return 0;
}
