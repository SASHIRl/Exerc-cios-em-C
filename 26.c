#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL,"");
	int N, Z;
	printf ("\n O programa irá dizer se o número é positivo, negativo ou nulo. Se quiser sair digite 42");
	while ( N != 42 ) {
		printf ("\nDigite um número: ");
		scanf ("%d", &N);
		if ( N > 0 ) {
			printf ("\nNúmero POSITIVO!");
		}else {
			if ( N < 0 ) {
				printf ("\nNúmero NEGATIVO!");
			}else {
				if ( N == 0 ) {
					printf ("\nNúmero NULO");
				}
			}
		}	
	}
	return 0;
}
