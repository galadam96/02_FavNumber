/*Date: 2023.06.01
Purpose: Asks for favourite number and prints it back on console*/


#include <stdio.h>

int main() {
	int myNumber = 0;
	printf("Mi a kedvenc szamod?\n");
	scanf_s("%d", &myNumber);
	printf("A kedvenc szamod: %d\n", myNumber);
	return 0;
}
