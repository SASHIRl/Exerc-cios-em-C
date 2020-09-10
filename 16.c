#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL,"");	
	printf ("Digite 15 números para apresentarmos a soma e a média.");
	int i = 0, N[15], somam = 0, mult;
	while ( i < 15) {
		printf ("\nDigite um número: ");
		scanf ("%d", &N[i]);
		somam = somam + N[i];
		i++;
	}
	printf ("%d %d", somam, somam/15);
	return 0;
}
