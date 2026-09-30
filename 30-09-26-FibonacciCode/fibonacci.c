/*
	Name: Fibonacci.c 
	Author: Luiz F Rodrigues
	Date: 30/09/26 10:00
	Description: Programa para exibir a sequência de fibonacci com o número de elementos selecionados pelo usuário
*/
//seção de importação
#include<stdio.h>
//seção de prototipação
void calcularFibonacci(int*,int);
void imprimirFibonacci(int*,int);
void imprimirNumOuro(int*,int);
//main
main()
{
	int qtdE = 0;
	printf("Qual quantidade de elementos da sequencia fibonacci vc deseja visualizar?");
	puts(" ");
	scanf("%d", &qtdE);
	int fibo[qtdE];
	calcularFibonacci(fibo,qtdE);
	imprimirFibonacci(fibo,qtdE);
	imprimirNumOuro(fibo,qtdE);
}
//função para calcular a sequencia de fibonacci
void calcularFibonacci(int *fibo,int qtdE)
{
	int i;
	fibo[1] = fibo[0] = 1;
	for (i = 2; i < qtdE; i++)
	{
		fibo[i] = fibo[i-1] + fibo[i-2];
	}
}
//função para imprimir o vetor de fibonacci
void imprimirFibonacci(int *fibo, int qtdE)
{
	int i;
	
	puts("\nConteudo do vetor de Fibonacci: ");
	printf("|");
	for(i = 0;i<qtdE;i++)
	{
		printf(" %d |", fibo[i]);
	}
	puts(" ");
}

void imprimirNumOuro(int *fibo, int qtdE)
{
	int i = qtdE-1;
	puts("\nProporcao Aurea do Fibonacci: ");
	printf("|");
	for(i;i>0;i--)
	{
		printf(" %.15f |", (float)fibo[i]/fibo[i-1]);
	}
	puts(" ");
}
