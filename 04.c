#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"");
	
	int matriz [4][5];
	int i, j, maior, menor;
	int somapar = 0, acumulasoma = 0, somaimpar = 0, acumulinha = 0, aculuninha = 0, mediac, valormedia, acumutudo;
	int valprox, menordif, absol, amostra;
	
	for ( i=0; i < 4; i++ ) {
		for ( j = 0; j < 5; j++ ) {
		printf ("\nDigite o valor da %dº linha e %dº coluna da matriz: ", i + 1, j + 1);
		scanf ("%d", &matriz [i][j]);
		acumutudo = acumutudo + matriz [i][j];
		if (j == 0 ) {
			maior = matriz[i][j];
			menor = matriz [i][j];
	}	else {
			if (matriz [i][j] > maior) {
				maior = matriz [i][j];
			}	else {
					if (matriz [i][j] < menor ) {
						menor = matriz [i][j];
					}
			}
		}
	acumulasoma = matriz [i][j];
	if ( acumulasoma % 2 == 1) {
		somaimpar = somaimpar + matriz [i][j];
	}
		else {
			somapar = somapar + matriz [i][j];
		}
		acumulinha = acumulinha + matriz [i][j];
	}
	acumulinha = acumulinha / 5;
	printf ("\nO valor da média dos elementos é: %d\n\n", acumulinha);
	printf ("\nMaior: %d\n", maior);
	printf ("\nMenor: %d\n", menor);
	acumulinha = 0;
	}
	for (j = 0; j < 5; j++ ) {
		for (i = 0; i < 4; i++) {
		aculuninha += matriz [i][j];
		}
		mediac =  aculuninha / 4;
		aculuninha = 0;
		printf ("\nMédia da %dº coluna é %d\n\n", j+1, mediac);
	}
	valormedia = acumutudo / 20;
	for (i = 0; i < 4; i++){
		for (j = 0; j < 5; j++) {
			if(matriz [i][j] == valormedia) {
				amostra = matriz [i][j];
			}else if (j == 0){
				valprox = valormedia - matriz [i][j];
				absol = abs(valprox);
				valprox = absol;
				menordif = valprox;
				amostra = matriz [i][j];
			/*if (j == 0) {
				menordif = valprox;
				amostra = matriz [i][j]; */
			}else {
				if (valprox < menordif) {
					menordif = valprox;
					amostra = matriz [i][j];
				}
			}
		}
	}
		for ( i=0; i< 4; i++ ) {
			if (i==0){
				printf ("\n	  Matriz\n");
			}
		for (j=0; j < 5; j++ ){
			printf ("%d\t", matriz [i][j]);
		   }
		printf ("\n");
	}
	printf ("\nO valor mais próximo da média geral é %d\n", amostra);
	printf ("\nO valor da média de todos os elementos digitados é: %d \n", valormedia);
	printf ("\nA soma de todos os elementos ímpares é: %d\n", somaimpar);
	printf ("\nA soma de todos os elementos pares é: %d\n", somapar);
return 0;
}
