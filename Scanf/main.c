#include <stdio.h>
#include <stdlib.h>

int main()
{
   int tag, monat, jahr;
   printf("Bitte geben Sie ihr Geburtsdatum ein:\n");
   scanf("%d.%d.%d", &tag, &monat, &jahr);
   printf("Ihr Geburtsdatum: %02d.%02d.%04d\n", tag, monat, jahr);
   return 0;
}
