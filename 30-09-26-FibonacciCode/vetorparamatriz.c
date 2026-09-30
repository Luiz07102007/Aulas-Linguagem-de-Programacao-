/*
	Name: vetorparamatriz.c
	Author: Luiz F Rodrigues
	Date: 30/09/26 11:37
	Description: Fazer um programa que carregue um 
	vetor com 25 elementos inteiros,
	passe-o para uma função e, a partir daí,
	faça a carga em uma matriz quadrada.
	Depois imprima o vetor em uma função
	e a matriz em outra função 
*/

#include<stdio.h>
void imprimirMatriz(int[][5]);
void imprimirVetor (int*);
void carregarMatriz(int[][5],int*);

main()
{
	int vet[25] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25};
	int mat[5][5];
	carregarMatriz(mat,vet);
	imprimirVetor(vet);
	imprimirMatriz(mat);
}
//funcao carregarMatriz
void carregarMatriz(int mat[][5],int *vet)
{
	int i,j,y;
	for(i = 0;i < 5; i++){
		for(j = 0;j < 5; j++){		
		mat[i][j] = vet[y];
		y++;
		}
	}		
}
//funcao imprimirMatriz
void imprimirMatriz(int mat[][5])
{
	int i,j;
	printf("Conteudo da matriz: \n");
		for(i=0;i<5;i++){
			for(j=0;j<5;j++){
			printf(" %d |",mat[i][j]);
		}
		printf("\n");
	}
}
//funcao imprimirVetor
void imprimirVetor(int *vet){
	int i;
	printf("Conteudo do vetor: \n");
	for(i=0;i<25;i++){
		printf("%d |", vet[i]);
	}
	printf("\n\n");
}

