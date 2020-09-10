#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>
int main () {
	setlocale(LC_ALL,"");
	
	char string[42];
	int numcaracteres = 0, i = 0;
	
	printf ("Digite algo para armazenarmos na string e contar os caracteres, ou digite 'encerrar' para encerrar o programa: ");
	gets(string);
	if ( strcmp(string, "encerrar") == 0) {
		return 0;
		}
	while (string[i] != '\0') {
		++i;
}
	printf ("Valor retornado: %d ", i);
	return 0;
}
