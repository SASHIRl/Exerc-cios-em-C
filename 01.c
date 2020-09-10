#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"");
	
	float nota [8][5];
	float media, mg;
	int i, j;

	for(i=0; i < 8; i++ ){
		for(j=0; j < 4; j++ ){
			printf("\nDigite a nota do aluno %d: ",i + 1);
			scanf ("%f", &nota[i][j]);	
			}	
				nota [i] [4] = (nota [i][0] + nota [i][1] + nota [i][2] + nota [i][3] ) / 4;
}
		
			for ( i=0; i< 8; i++ ) {
			if (i==0){
				printf ("\nAluno\tnota 1  nota 2  nota 3  nota 4  media\n");
			}
			for (j=0; j<= 4; j++ ){
			
				if (j==0){
					printf ("%d\t", i+1);
				}
				printf ("%.1f\t", nota [i] [j]);
		   }
		   printf ("\n");
}
		mg = (nota [0][4] + nota [1][4] + nota [2][4] + nota [3][4] + nota [4][4] + nota [5][4] + nota [6][4] + nota [7][4] ) / 8;
		printf ("																					\n Média da sala %.2f \n", mg);
	system("pause");
	return 0;
}
