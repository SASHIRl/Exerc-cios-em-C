#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL,"");
	
int N, numerosoma;
	printf ("Digite um n�mero para come�ar: ");
	scanf ("%d", &N);
	while (numerosoma != 0) {
		printf ("\nDigite outro n�mero para somar, ou digite 0 para sair: ");
		scanf ("%d", &numerosoma);
		N = N + numerosoma;
		printf ("A soma �: %d\n", N);
	}
	return 0;
}
