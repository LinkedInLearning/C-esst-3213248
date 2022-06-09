#include <stdio.h>
#include <stdlib.h>

int main()
{
    char t1[] = "Hello world\0";
    char t2[] = "Hello world";



    printf("%d\n",sizeof(t1));
    printf("%d\n",sizeof(t2));
    for(int i = 0;i < sizeof(t1);i++){
        printf("%c\t",t1[i]);
    }
    printf("\n***************\n");
    for(int i = 0;i < sizeof(t2);i++){
        printf("%c ",t2[i]);
    }
    printf("\n***************\n");
    printf("%c,\t%d ",t1[sizeof(t1)-1],(int)t1[sizeof(t1)-1]);
    printf("\n***************\n");
    printf("%c,\t%d ",t2[sizeof(t2)-1],(int)t2[sizeof(t2)-1]);
    return 0;
}
