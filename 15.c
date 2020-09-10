#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL,"");
	int vetA[15], i = 1, j = 15;
	printf ("Números do '1' ao '15' em ordem decrescente");
	while ( i <= 15 ) {
		vetA[i] = i;
		++i;
	}
	while ( j >= 1 ){
		printf ("\n%d\n", vetA[j]);
		--j;
	}
	return 0;
}
