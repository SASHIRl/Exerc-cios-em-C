#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL,"");
	int N, Z, R;
	
	printf ("Digite um número: ");
	scanf ("%d", &N);
	printf ("Digite outro número: ");
	scanf ("%d", &Z);
	R = Z + N;
		if ( R > 20 ) {
			R = R + 8;
			printf ("\n%d", R);
			return 0;
		} else 
				R = R - 5;
				printf ("\n%d", R);
	return 0;
}
