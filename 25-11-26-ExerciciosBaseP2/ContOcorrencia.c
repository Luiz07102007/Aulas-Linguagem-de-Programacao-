/*
	Name: ContOcorrencia.c
	Author: Luiz F Rodrigues
	Date: 25/11/26 11:58
	Description: Escreva uma função que receba um vetor, seu tamanho e um número x, retornando quantas vezes x aparece no vetor
*/

#include<stdio.h>
int i;
int contarOcorrencia(int*,int,int);
main() {
	int tamanho = 0;
	int numero = 0;
	
	printf("Insira o tamanho do vetor: ");
	scanf("%d",&tamanho);
	int vet[tamanho];
	
	for(i = 0; i < tamanho; i++) {
		printf("Insira o conteudo do vetor na posicao [%d]: ",i+1);
		scanf("%d",&vet[i]);
	}
	
	printf("Insira um numero para verificar a ocorrencia dele: ");
	scanf("%d",&numero);
    
	    printf("Conteudo do Vetor: ");
	for(i = 0; i < tamanho; i++) {
		printf("%d|",vet[i]);
	}
	int ocorre = contarOcorrencia(vet,tamanho,numero);
	printf("\n o numero %d aparece %d vezes.",numero,ocorre);	
}

int contarOcorrencia(int*v,int t,int n) {
	int o;
	for(i = 0; i < t; i++) {
		if (v[i] == n) {
			o++;	
		}
	}
	return o;
}
