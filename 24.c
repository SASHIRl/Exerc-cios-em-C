#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
	int regiao;
	float frete, pesog, valor, test;
	setlocale (LC_ALL, "portuguese");
	
	printf ("O programa ir� calcular o valor do frete por quilo!\n");
	printf ("Digite em R$ o valor do frete por Kg: ");
	scanf ("%f", &frete);
	printf ("Digite o peso da mercadoria em gramas: ");
	scanf ("%f", &pesog);
	valor = (pesog / 1000 ) * frete;
	printf ("Escolha a op��o de acordo com sua regi�o!\n");
	printf ("\n'1' para Zona Norte\n'2' para Zona Leste\n'3' para Zona Sul\n'4' para Zona Oeste\n");
	printf ("\nQual regi�o? ");
	scanf ("%d", &regiao);

	switch (regiao)
	{
		case 1 :
		valor = (valor * 0.05 )+ valor;
		printf ("Para Zona Norte o frete � de %.2f", valor);
		break;
		
		case 2 :
		valor = (valor * 0.1)+ valor;
		printf ("Para Zona Leste o frete � de %.2f", valor);
		break;
		
		case 3 :
		valor = (valor * 0.15) + valor;
		printf ("Para Zona Sul o frete � de %.2f", valor);
		break;
		
		case 4 :
		valor = (valor * 0.2) + valor;
		printf ("Para Zona Oeste o frete � de %.2f", valor);
		break;
	}
	return 0;
}
