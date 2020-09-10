#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL,"");

	int i, c = 0;
	printf ("Soma dos números pares existentes na faixa de 10 até 29\n");
	for (i = 10; i <=29 ; i++) {
		if ( i % 2 == 0 ) {
			c = c + i;
			printf ("%d\t", i);
		}
		
		printf ("");
	}
	printf ("\nSoma %d", c);
	return 0;
}
