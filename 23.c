#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL,"");
	int N, Z = 0, c;
	
	while ( N != 0 ) {
		printf ("\nDigite um número qualquer: ");
		scanf ("%d", &N);
		Z = Z + N;
		printf ("\nSoma é:%d ", Z);
	}
return 0;
}
