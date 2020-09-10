	#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int main(){
	setlocale(LC_ALL,"");
	
	float vetorA [15];
	float vetorB [15];
	int j, i;
	for ( i = 0; i < 15; i++) {
		if ( i == 0 ){
		printf ("Vetor A\n");
		}
		printf ("\nDigite os valores do vetor: ");
		scanf ("%f", &vetorA [i]);
		vetorB[i] = pow(vetorA[i], 2);
	}
	for ( i = 0; i < 15; i++) {
		if ( i == 0 ){
		printf ("Vetor B (Vetor A em potência de 02)\n\n");
		}
		printf ("Vetor: %.2f", vetorB[i]);
		printf ("\n");
	}
	return 0;
}
