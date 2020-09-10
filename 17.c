#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL,"");	
	int Z = 0, N;
	
	while ( Z != -999 ) {

	printf ("\nEntre com um número para ser multiplicado por 3: ");
	scanf ("%d", &Z);
	N = Z * 3;
	printf ("%d", N);
	if ( Z = -999 ) {return 0;}
	}
	return 0;
}
