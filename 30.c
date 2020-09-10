#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL,"");
	int idade;
	
	printf ("A confederação brasileira de natação promoverá eliminatórias para o próximo mundial.\n");
	printf ("Digite a idade de um nadador: ");
	scanf ("%d", &idade);
	while ( idade >= 5 ) {
	if ( idade >= 5 && idade <= 7 ) {
		printf ("\nInfantil A");
		return 0;
	} else {
		if ( idade >= 8 && idade <= 10 ) {
			printf ("\nInfantil B");
			return 0;
		} else {
			if ( idade >= 11 && idade <= 13 ) {
				printf ("\nJuvenil A");
				return 0;
			} else {
				if ( idade >= 14 && idade <= 17 ) {
					printf ("\nJuvenil B");
					return 0;
				} else {
					if ( idade >= 17 ) {
						printf ("\nSênior");
						return 0;
					}
				}
			}
		}
	}
}
	printf ("\nMenor que cinco anos, sem categoria.");
	return 0;
}
