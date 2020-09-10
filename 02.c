#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main () {
	setlocale (LC_ALL, "Portuguese");
	
	float A[10], B[10];
	int i, j, k;
	
	for (j=0; j<10; j++) {
		printf ("\nDigite um número: ");
		scanf("%f", &A[j]);
		k = A[j];
			if ( k % 2 == 0) {
				B[j] = A [j] * 5; 
	} else B[j] = A [j] + 5;
}
	printf ("\nVetor B\n");
	for (i=0; i<10; i++) {
	printf ("%.3f ", B[i]);
	}
	printf ("\nVetor A\n");
	for (i=0; i<10; i++) {
		printf ("%.3f ", A[i]);
	}
	return 0;
}
