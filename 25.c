#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL,"");
	int horas, minutos, horasm, minutoss;
	
	printf ("\nDigite o valor em horas: ");
	scanf ("%d", &horas);
	printf ("\nDigite o valor em minutos: ");
	scanf ("%d", &minutos);
	horasm = horas * 60;
	minutoss = minutos * 60;
	printf ("\n%d:%d decorridos desde o começo do dia", horasm, minutoss);
        printf("       ___________      \n");
        printf("      '._==_==_=_.'     \n");
        printf("      .-\\:      /-.    \n");
        printf("     | (|:.     |) |    \n");
        printf("      '-|:.     |-'     \n");
        printf("        \\::.    /      \n");
        printf("         '::. .'        \n");
        printf("           ) (          \n");
        printf("         _.' '._        \n");
        printf("        '-------'       \n\n");	
	return 0;
}	
