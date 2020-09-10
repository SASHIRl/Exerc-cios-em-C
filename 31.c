#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>
int main () {
	setlocale(LC_ALL,"");
	char nome[20], sobrenome[20];
	int CPF[12];
	float VNF, ICMS, NFe;
	
	while ( nome != "FIM") {
	printf ("\nDigite o nome do cliente: ");
	scanf (" %s", &nome);
	printf ("\nDigite o sobrenome do cliente: ");
	scanf (" %s", &sobrenome);
	if (strcmp(nome, "FIM") == 0) {
		break;
	}
	printf ("\nDigite o CPF do cliente: ");
	scanf ("%s", &CPF);
	printf ("\nDigite o valor da nota fiscal: ");
	scanf ("%f", &VNF);
	ICMS = VNF * 0.18;
	NFe = ICMS * 0.3;
	printf ("\nNome: %s %s", nome, sobrenome);
	printf ("\nCPF: %s", CPF);
	printf ("\nValor da Nota Fiscal: %f", VNF);
	printf ("\nValor do ICMS: %f", ICMS);
	printf ("\nCrédito da NF-e: %f\n", NFe);
	}
	return 0;
}
