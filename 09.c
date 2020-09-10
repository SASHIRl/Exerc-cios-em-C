#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL,"");
	
	int i;
	
	printf ("Números ímpares na faixa de 999 a 1500\n");
	for ( i = 0; i < 1500; i++) {
		if ( i % 2 == 1 ) {
			printf ("%d\n", i);
		}
	}
	return 0;
}
