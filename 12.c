#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL,"");
	
	float i = 0, N = 0, R = 0;
	
	printf ("\nTABUADA \n");
	printf ("Digite o valor desejado: ");
	scanf ("%f", &N);
	for (i = 1; i < 10; i++) {
		R = N + i;
		printf ("\n%.2f + %.2f = %.2f\n", N, i, R);
}
	for (i = 1; i < 10; i++) {
		R = N - i;
		printf ("\n%.2f - %.2f = %.2f\n", N, i, R);
}
	for (i = 1; i < 10; i++) {
		R = N * i;
		printf ("\n%.2f * %.2f = %.2f\n", N, i, R);
}
	for (i = 1; i < 10; i++) {
		R = N /	i;
		printf ("\n%.2f / %.2f = %.2f\n", N, i, R);
}
	return 0;
}
