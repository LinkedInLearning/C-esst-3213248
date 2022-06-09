#include <stdio.h>
#include <stdlib.h>
int i = 0;
void rechne() {
    i++;

}

int main() {

	rechne();
	printf("Wert: %d\n", i);
	return 0;
}
