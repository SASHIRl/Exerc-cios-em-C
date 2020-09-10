#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL,"");

	int i;
	printf ("Números divisíveis por 05 < 150\n");
	for (i = 1; i <= 150; i++) {
		if ( i % 5 == 0 ) {
			printf ("%d\t", i);
		}
		printf ("");
	}
	return 0;
}
