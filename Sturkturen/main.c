#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct person {
        char name[50];
        char vorname[50];
        char strasse[100];
        int nr;
        int plz;
        char stadt[50];
    };
    struct person konkretePerson;
    konkretePerson.nr=42;
    printf("%d\n",konkretePerson.nr);
    struct adr{
      char t[50];
      int a;
    } i1 = {"Test",42},i2,i3;
     printf("%d\n",i1.a);
    return 0;
}
