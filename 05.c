#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"");
	
	float matrizA [5][3];
	float matrizB [5][3];
	float matrizC [5][3];
	int i, j;
	
	for ( i = 0; i < 5; i++) {
		for ( j = 0; j < 3; j++) {
			printf ("\nDigite o valor da %dº linha e %dº coluna da matriz A: ", i + 1, j + 1);
			scanf ("%f", &matrizA [i][j]);
		}
	}
	for ( i = 0; i < 5; i++) {
		for (j = 0; j < 3; j++) {
			printf ("\nDigite o valor da %dº linha e %dº coluna da matriz B: ", i + 1, j + 1);
			scanf ("%f", &matrizB[i][j]);
		}
	}
	for ( i = 0; i < 5; i++) {
		for (j = 0; j < 3; j++ ) {
			matrizC[i][j] = matrizA[i][j] + matrizB[i][j];
		}
	}
	for ( i = 0; i < 5; i++) {
		if ( i == 0 ) {
			printf ("\nA soma da Matriz A + B\n");
		}
		for (j = 0; j < 3; j++ ) {
			printf ("%.2f\t", matrizC [i][j]);
		}
	}
	return 0;
}	
