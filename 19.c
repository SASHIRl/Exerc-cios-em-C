#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL,"");	
	int Z, N, i = 0;
	while ( Z != 0 ) {
		printf ("\nDigite n�meros: ");
		scanf ("%d", &Z);
		if ( Z > 100 && Z < 200 ) {
			++i;
		printf ("\nForam digitados %d n�meros entre 100 e 200", i);
		}
	}
	return 0;	
}
