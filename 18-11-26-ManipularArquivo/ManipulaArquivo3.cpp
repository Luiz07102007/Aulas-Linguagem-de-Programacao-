/*
	Name: ManipulaArquivo3.cpp
	Author: Luiz F Rodrigues
	Date: 18/11/26 09:06
	Description: Programa para adicionar texto a um arquivo já existente
*/

#include <stdio.h>

main()
{
	FILE *arq = fopen("alunosX.txt","a");
	
	if (arq == NULL) 
	{
		perror("erro ao abrir o arquivo");
		return 1;
	}
	
	fprintf(arq,"\n\n====> Fim do Arquivo");
	fputs("Alterado por Luiz Felipe em 18/11/26",arq);
	
	fclose(arq);
	puts("Arquivo modificado com Sucesso!!");
}
