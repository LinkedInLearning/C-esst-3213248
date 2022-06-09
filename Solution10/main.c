#include <stdio.h>
#include <stdlib.h>

int main()
{
    double feld[] = {1.0,1.1,1,2,3.14,42,4.2};
    for(int i = 0; i < sizeof(feld)/sizeof(double);i++){
            if ((int)feld[i]==feld[i]) {
                printf("%d\t",(int)feld[i]);
            }
            else{
                printf("%f\t",feld[i]);
            }
    }

    return 0;
}
