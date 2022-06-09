#include <stdio.h>
#include <stdlib.h>

int rechne() {
    static int i = 0;
    return i++;

}

int main() {


	printf("Wert: %d\n", rechne());

	printf("Wert: %d\n", rechne());
	return 0;
}
