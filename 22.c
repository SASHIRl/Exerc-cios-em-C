#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL,"");
	int N[21], Z, i = 0, a = 1, c = 0;
	setlocale (LC_ALL, "portuguese");	
	
	while ( i < 19 ) {
	i++;
	printf ("\n%dº número inteiro positivo: ", i);
	scanf ("%d", &N[i]);
	if ( N[i] % 2 == 1) {
		a = a * N[i];
		printf ("\n%d\n", N[i]);
		printf ("\n%d\n", a);
	}
	else if ( N[i] % 2 == 0) {
		c = c + N[i];
		printf ("\n%d\n", N[i]);
		printf ("\n%d\n", c);
		}
	}
	printf ("%d %d", a, c);
return 0;
}
