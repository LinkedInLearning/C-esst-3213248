#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,  b, c;
    a = 1;
    printf("%d\n",a);
    a++;
    printf("%d\n",a);

    b = 2;
    printf("%d\n",b);
    b--;
    printf("%d\n",b);

    c = a++;
    printf("%d\n",c);
    c = ++a;
    printf("%d\n",c);




    return 0;
}
