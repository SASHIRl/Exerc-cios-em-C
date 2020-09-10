#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int main() {
	setlocale(LC_ALL, "");
	
	float vetor [10];
	int i, maior=0, menor=0;
	float pos = 0;
	int soma = 0, a;
	
	printf ("Digite 10 números\n");
	for (i=0; i<10; i++) {
		printf ("Digite os valores do vetor: ");
		scanf ("%f", &vetor[i]);
		a = vetor [i];
	if(i == 0) {
		maior = vetor[i];
		menor = vetor[i];
	}else{ 
		if(vetor[i]>maior){
			maior = vetor[i]; 
	}else{
		if(vetor[i] < menor) {
			menor = vetor[i]; 
			}
 		}
	}
	if ( a % 2 == 1 ){
		soma = soma + vetor [i];
	}
		if (i % 2 == 1){
			pos = pos + vetor [i];
		}
}
		printf ("Os valores digitados são\n" );
		for (i = 0; i < 10; i++) {
			printf ("%.1f\t", vetor[i]);
			}
printf ("\n O maior valor é %d\n", maior);
printf ("\n O menor valor é %d\n", menor);
printf ("\n A soma dos números ímpares é: %d\n ", soma);
printf ("\n A soma dos números que estão em posição ímpar é: %.2f\n", pos);
system ("pause");
return 0;
}
