#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>
int main () {
	setlocale(LC_ALL,"");
	int MAT[4][5], SOMALINHA[5], TOTAL = 0, i, j, ACUMULADOR = 0;

	for ( i = 0; i < 4; i++) {
		for ( j = 0; j < 5; j++) {
			printf ("Digite o valor da %dº linha e %dº coluna: ", i+1, j+1);
			scanf ("%d", &MAT[i][j]);
			ACUMULADOR += MAT[i][j];
		}
		printf ("\nSoma da linha %d: %d\n\n", i+1, ACUMULADOR);
		SOMALINHA[i] = ACUMULADOR;
		ACUMULADOR = 0;
	}
	for (i = 0; i < 4; i++) {
		TOTAL = TOTAL + SOMALINHA[i];
}
		for ( i=0; i < 4; i++ ) {
		for (j=0; j < 5; j++ ){
		printf ("%d\t", MAT [i] [j]);
		}
		printf ("\n");
	}
		printf ("Soma das linhas do vetor acima\n");
		for ( i = 0; i < 4; i++) {
			printf ("%d\n\n", SOMALINHA[i]);
		}
	printf ("Valor total			%d", TOTAL);
	return 0;
}
