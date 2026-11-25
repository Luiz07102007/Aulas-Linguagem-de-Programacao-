/*
	Name: somalinha.c
	Author: Luiz F Rodrigues
	Date: 25/11/26 12:04
	Description: Escreva uma função somaLinha que receba uma matriz 4x4 e o índice de uma linha, retornando a soma dos elementos dessa linha.
*/

#include<stdio.h>

int somalinha(int[][4],int);
int i,j;
int ordem = 4;
main(){
	int mat[4][4];
	
	int linha = 0;
	for(i = 0; i < ordem; i++) {
		for (j = 0; j < ordem; j++) {
			printf("Insira o conteudo de [%d][%d]: ",i,j);
			scanf("%d",&mat[i][j]);
		}
	}
	printf("\nInsira o indice de uma linha: ");
	scanf("%d",&linha);
	
	int res = somalinha(mat,linha);
	printf("a soma da %d linha eh: %d",linha,res);
	
}

int somalinha(int m[][4],int l) {
	int soma = 0;
		for (j = 0; j < ordem; j++) {
			soma += m[l][j];
		}
	return soma;
}
