/*
	Name: MaiorElementoPosicao.c
	Author: Luiz F Rodrigues
	Date: 25/11/26 12:14
	Description: Faça uma função que receba uma matriz 4x4 e retorne o maior valor encontrado nela (e, se quiser treinar ponteiros, também retorne sua linha e coluna).

*/

#include <stdio.h>

int maiorValorPosicao(int[][4]);
int i,j;
int ordem = 4;
main() {
	int mat[4][4];
	for(i = 0; i < ordem; i++) {
		for (j = 0; j < ordem; j++) {
			printf("Insira o conteudo de [%d][%d]: ",i,j);
			scanf("%d",&mat[i][j]);
		}
	}
	int m = maiorValorPosicao(mat);
	printf("O maior valor eh %d",m);
}

int maiorValorPosicao(int m[][4]) {
	int maior = 0;
	for(i = 0; i < ordem; i++) {
		for (j = 0; j < ordem; j++) {
			if (m[i][j] > maior) {
				maior = m[i][j];
			}
		}
	}
	return maior;
}
