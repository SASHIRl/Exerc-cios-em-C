#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL,"");	
	int Z, N, i = 0;
	while ( Z > 0 ) {
		printf ("Digite números positivos: ");
		scanf ("%d", &Z);
		++i;
	}
	printf ("Foram digitados %d", i - 1);
	return 0;	
}
