/*
	Name: switchCase.c
	Author: Luiz F Rodrigues
	Date: 18/11/26 11:42
	Description: Elaborar um programa que apresente um menu de opções para o usuário perguntando qual operação ele deseja fazer:
	- Criar novo arquivo ("w")
	- Altera conteúdo já existente("a")
	- Somente ler o conteúdo gravado no arquivo("r")
*/

#include<stdio.h>
#include<string.h>
#define extensao ".txt"
main() {
	int op; op = 0;
	FILE *file = NULL;
	printf("=========================================================\n");	
	printf("=========== Manipulador de arquivos 3000 ================\n");
	printf("=========================================================\n");
	printf("Digite qual acao quer realizar\n1 - Criar Novo Arquivo\n2 - Alterar Arquivo existente\n3 - Ler conteudo de arquivo existente\n");
	scanf("%d",&op);
	
	switch(op) {
		case 1: {
			char texto[50];
			char arquivo[50];
			printf("Digite o nome do arquivo: ");
			gets(arquivo);
			file = fopen(strcat(arquivo,extensao),"w");
			if (file == NULL) {
			perror("Erro ao abrir o arquivo!");
			return 1;
			}
			printf("Digite o conteudo do arquivo: ");
			scanf("%s",texto);
			fprintf(file,"%s", texto);
			
			fclose(file);
			break;
		}
		case 2: {
			char arquivo[50];
			printf("Digite o nome do arquivo: ");
			gets(arquivo);
			file = fopen(strcat(arquivo,extensao),"a");
	
		if (file == NULL) 
		{
		perror("erro ao abrir o arquivo");
		return 1;
		}
		fprintf(file,"\n\n====> Fim do Arquivo");
		fclose(file);
			break;
			}
		}
}
