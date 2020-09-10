#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL,"");
	int an, a1, n, r;
	
	printf ("\nUma PA (Progressão Aritmética) fica determinada pela sua razão (r) e pelo primeiro termo (a1).\n ( an = a1 + (n-1)*r )");
	printf ("\nDigite a1: ");	
	scanf ("%d", &a1);
	printf ("\nDigite o valor da razão (r): ");
	scanf ("%d", &r);
	printf ("\nQual o n-essimo termo a ser determinado: ");
	scanf ("%d", &n);
	an = a1 + ( n - 1) * r;
	printf ("%d", an);
return 0;
}
