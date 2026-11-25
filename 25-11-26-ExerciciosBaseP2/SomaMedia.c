/*
	Name: SomaMedia.c
	Author: Luiz F Rodrigues
	Date: 25/11/26 11:34
	Description: Crie uma função que receba um vetor de float e seu tamanho n, e retorne a média dos valores.
*/

#include <stdio.h>

float calcularMedia(float*,int);
int i;
main() 
{
	int tamanho;
	printf("Insira o tamanho do vetor: ");
	scanf("%d",&tamanho);
	float notas[tamanho];
	
	for(i = 0;i < tamanho;i++) {
	printf("Insira a %da Nota :",i+1);
	scanf("%f",&notas[i]);
	}
	float media = calcularMedia(notas,tamanho);
	
	printf("a media das notas eh: %.2f",media);
}

float calcularMedia(float *n, int t) {
	float med;
	for(i = 0;i < t;i++) {
		med += n[i];
	}
	return med/t;
}
