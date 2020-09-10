#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL,"");
	float sal, prest1, prest2;
	printf ("\nSimulador de prestações // Digite '0' em 'Salário' e 'Prestação' para sair!");
	while ( sal != 0 ) {
	printf ("\nDigite seu salario bruto: ");
	scanf ("%f", &sal);
	printf ("Digite o valor da prestação: ");
	scanf ("%f", &prest1);
	prest2 = ( sal * 0.3 );
	if ( prest1 > prest2 ) {
		printf ("\nO valor da prestação é maior que 30%% do salário bruto, empréstimo não pode ser concedido.\nEntre com um novo valor!\n");
	} else {
		if ( prest1 <= prest2 ) {
			printf ("\nValor de prestação aceito! se quiser simular novamente insira o valor, caso não digite '0' nos campos para sair.\n");
		}
	}
}
return 0;
}
