/*
	Name: gravaProntuario.c
	Author: Luiz F Rodrigues
	Date: 18/11/26 10:06
	Description: Programa para ler nome,idade,
	peso e altura de 5 pessoas e de cada uma delas calcular e analisar o imc, gravando os resultados em um arquivo chamado prontuario
*/

#include<stdio.h>
#include <string.h>
#include <windows.h>
main()
{
	FILE *arq =  fopen("prontuario.txt","w");
	
	if (arq == NULL)
	{
		perror("Erro ao abrir o arquivo!");
		return 1;
	}
	char nome [50],situacao[30]; int idade,i; float peso,altura,imc; i = idade = 0; peso = altura = imc = 0.0;
	
	for(i = 0;i<5;i++) 
	{
		printf("Insira um nome: ");
		gets(nome);
		printf("Insira uma idade: ");
		scanf("%d",&idade);
		printf("Insira um peso: ");
		scanf("%f",&peso);
		printf("Insira uma altura: ");
		scanf("%f",&altura);
		imc = peso/(altura*altura);
		if (imc <= 18.5)
		{
			strcpy(situacao,"Abaixo do normal");
		}
		else if (imc < 24.9)
		{
			strcpy(situacao,"Normal");
		}
		else if (imc < 29.9)
		{
			strcpy(situacao,"Sobrepeso");
		}
		else if (imc < 34.9)
		{
			strcpy(situacao,"Obesidade Grau I");
		}
		else if (imc < 39.9)
		{
			strcpy(situacao,"Obesidade Grau II");
		}
		else
		{
			strcpy(situacao,"Obesidade Grau III");
		}
		fprintf(arq,"Nome : %s | Idade : %d | Peso : %.2f | Altura : %.2f | Imc : %.2f| Situacao : %s |\n\n ",nome,idade,peso,altura,imc,situacao);
		fflush(stdin);
	}	
	
	printf("Dados gravados com sucesso!");
	
}
