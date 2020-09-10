#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <string.h>
/* Pedir o nome e sexo de uma pessoa. Apresentar no final quantas pessoas são
do sexo masculino e quantas são do sexo feminino. O programa encerra
quando o usuário digitar FIM no nome da pessoa */
int main () {
	setlocale (LC_ALL, "portuguese");
	char nome[50];
	int sexo, a, b;
	a = 0;
	b = 0;
	while ( nome != "FIM") {
	printf ("Digite seu nome: ");
	scanf (" %s", &nome);
	if (strcmp(nome, "FIM") == 0) {
	break;
	}
	printf ("Digite '1' para feminino ou '2' para masculino: ");
	scanf ("%d", &sexo);
	if ( sexo == 1 )
		a = a + 1;
		else
			if ( sexo == 2 )
				b = b + 1;
	}
	printf ("%d pessoas do sexo feminino e %d pessoas do sexo masculino", a, b);
return 0;
}
