#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"");
	
	float vetorA [20];
	float vetorB [20];
	float vetorC [20];
	int j, i;
	
	for ( j = 0; j < 20; j++) {
		printf ("\nDigite os valores do Vetor A: ");
		scanf ("%f", &vetorA[j]);
	}	
	for ( j = 0; j < 20; j++) {
	printf ("\nDigite os valores do Vetor B: ");
	scanf ("%f", &vetorB[j]);
	}
	for ( j = 0; j < 20; j++) {
		vetorC [j] = vetorA[j] - vetorB[j];
	}
	for ( i = 0; i < 20; i++) {
		if ( i == 0 ) {
			printf ("A subtração das matrizes A - B\n");
		}
		printf ("Vetor A %.2f \t Vetor B %.2f \t Vetor C %.2f", vetorA[i], vetorB[i], vetorC[i]);
		printf ("\n");
}
	return 0;
}	
