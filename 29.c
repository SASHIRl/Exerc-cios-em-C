#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL,"");
	int an, a1, n, r;
	
	printf ("\nUma PA (Progress�o Aritm�tica) fica determinada pela sua raz�o (r) e pelo primeiro termo (a1).\n ( an = a1 + (n-1)*r )");
	printf ("\nDigite a1: ");	
	scanf ("%d", &a1);
	printf ("\nDigite o valor da raz�o (r): ");
	scanf ("%d", &r);
	printf ("\nQual o n-essimo termo a ser determinado: ");
	scanf ("%d", &n);
	an = a1 + ( n - 1) * r;
	printf ("%d", an);
return 0;
}
