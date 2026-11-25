/*
	Name: exercicio2.c
	Author: Luiz F Rodrigues
	Date: 25/11/26 10:43
	Description: programa pra carregar matrizes
*/

#include <stdio.h>

main()
{
	
	int matA[3][3], matB[3][3], matSoma[3][3];	
	int i, j,ordem; i = j = 0; ordem =  3;
	
	printf("Digite 9 elementos inteiros para carregar a matriz A: ");
	for(i = 0;i < ordem;i++) {
		for (j = 0; j < ordem;j++) {
			scanf("%d",&matA[i][j]);
		}
	}
	printf("Digite 9 elementos inteiros para carregar a matriz B: ");
	for(i = 0;i < ordem;i++) {
		for (j = 0; j < ordem;j++) {
			scanf("%d",&matB[i][j]);
			matSoma[i][j] = matA[i][j] + matB[i][j];
		}
	}
	printf("\nConteudo da Matriz A: \n");
	for(i = 0;i < ordem;i++) {
		printf("|");
		for (j = 0; j < ordem;j++) {
			printf("%d|",matA[i][j]);		
		}
		printf("\n");
	}
		printf("\nConteudo da Matriz B: \n");
	for(i = 0;i < ordem;i++) {
		printf("|");
		for (j = 0; j < ordem;j++) {
			printf("%d|",matB[i][j]);
		}
		printf("\n");
	}
		printf("\nConteudo da Matriz Soma: \n");
	for(i = 0;i < ordem;i++) {
		printf("|");
		for (j = 0; j < ordem;j++) {
			printf("%d|",matSoma[i][j]);
		}
		printf("\n");
	}

	printf("\nConteudo Zeros e Uns da Matriz Soma: \n");
	for(i = 0;i < ordem;i++) {
		printf("|");
		for (j = 0; j < ordem;j++) {
		if (matSoma[i][j]%2 == 0) {
			printf("0|");
		}
		else if (matSoma[i][j]%2 != 0){
			printf("1|");
			}		
		}
		printf("\n");
	}
		printf("\nConteudo inverso da Matriz Soma: \n");
			for(i = ordem-1;i >= 0;i--) {
		printf("|");
		for (j = ordem-1; j >= 0;j--) {
			printf("%d|",matSoma[i][j]);
		}
		printf("\n");
	}		

}
