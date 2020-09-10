#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"");
	
	float vetorA [20];
	float vetorB [20];
	int i, j;
	
	for ( i = 0; i < 20; i++) {
			printf ("\nDigite os valores do vetor: ");
			scanf ("%f", &vetorA [i]);
		}
	for ( i = 19; i >= 0; i--) {
		if ( i == 19 ){
			printf ("Vetor B\n");
		}
		vetorB[i] = vetorA[i];
		printf ("%.2f\n", vetorB[i]);
		printf ("\n");
		}
	for ( i = 0; i <= 19; i++) {
		if ( i == 0 ){
		printf ("Vetor A\n");
		}
		printf ("%.2f\n", vetorA[i]);
		printf ("\n");
	}
	return 0;
}
