#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>
int main () {
	setlocale(LC_ALL,"");
	
	char string1[42], string2[42], conta1, conta2;
	
	printf ("Digite os caracteres da primeira string: ");
	gets(string1);
	printf ("Digite os caracteres da segunda string: ");
	gets(string2);
	if (strcmp (string1, string2) == 0) {
		printf ("As strings são iguais!\n");
		return 0;
	}
	conta1 = strlen(string1);
	conta2 = strlen(string2);
	
	if ( conta1 > conta2 ) {
		printf ("A primeira string é maior que a segunda string!");
		} else {
			printf ("A segunda string é maior que a primeira string!");
	}
	return 0;
}
