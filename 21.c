#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL,"");
	int fatorial, numero = 1, c, d;
	setlocale (LC_ALL, "portuguese");
	fatorial = 1;
	while (numero != 0) {
		printf ("\nDigite um número para fatorarmos: ");
		scanf ("%d", &numero);
		c = 1;
		fatorial = 1;
		while ( c <= numero ) {
			fatorial = fatorial * c;
			c = c + 1;
			printf ("\nO valor fatorado é: %d", fatorial);
		}
	}
		{
		printf ("Você digitou '0', pressione qualquer tecla para encerrar... ");
		return 0;
	}
	return 0;
}	
