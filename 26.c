#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL,"");
	int N, Z;
	printf ("\n O programa ir� dizer se o n�mero � positivo, negativo ou nulo. Se quiser sair digite 42");
	while ( N != 42 ) {
		printf ("\nDigite um n�mero: ");
		scanf ("%d", &N);
		if ( N > 0 ) {
			printf ("\nN�mero POSITIVO!");
		}else {
			if ( N < 0 ) {
				printf ("\nN�mero NEGATIVO!");
			}else {
				if ( N == 0 ) {
					printf ("\nN�mero NULO");
				}
			}
		}	
	}
	return 0;
}
