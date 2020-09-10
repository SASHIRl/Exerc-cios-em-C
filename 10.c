#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL,"");
	
int N, numerosoma;
	printf ("Digite um número para começar: ");
	scanf ("%d", &N);
	while (numerosoma != 0) {
		printf ("\nDigite outro número para somar, ou digite 0 para sair: ");
		scanf ("%d", &numerosoma);
		N = N + numerosoma;
		printf ("A soma é: %d\n", N);
	}
	return 0;
}
