#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL,"");
	int fatorial, numero, c = 1, d;
	setlocale (LC_ALL, "portuguese");
	printf ("Digite um número para fatorarmos: ");
	scanf ("%d", &numero);
	fatorial = 1;
	if (numero != 0) {
	while ( c <= numero ) {
		fatorial = fatorial * c;
		c = c + 1;
}
	}
	else
	{
		printf ("Você digitou '0', pressione qualquer tecla para encerrar... ");
		return 0;
	}
	printf ("\nO valor fatorado é: %d", fatorial);
	return 0;
}
