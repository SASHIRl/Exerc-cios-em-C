#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL,"");
	float sal, prest1, prest2;
	printf ("\nSimulador de presta��es // Digite '0' em 'Sal�rio' e 'Presta��o' para sair!");
	while ( sal != 0 ) {
	printf ("\nDigite seu salario bruto: ");
	scanf ("%f", &sal);
	printf ("Digite o valor da presta��o: ");
	scanf ("%f", &prest1);
	prest2 = ( sal * 0.3 );
	if ( prest1 > prest2 ) {
		printf ("\nO valor da presta��o � maior que 30%% do sal�rio bruto, empr�stimo n�o pode ser concedido.\nEntre com um novo valor!\n");
	} else {
		if ( prest1 <= prest2 ) {
			printf ("\nValor de presta��o aceito! se quiser simular novamente insira o valor, caso n�o digite '0' nos campos para sair.\n");
		}
	}
}
return 0;
}
