/*
	Name:switchCase.c
	Author: Luiz F Araujo
	Date: 28/10/26 11:06
	Description: Professor ensinando switchCase rapidinho
*/

#include<stdio.h>

main(){
	int opc; opc = 0;
	puts("===============================================");
	printf("1 - escolha 1\n2 - escolha 2\n3 - escolha 3\n99 - encerrar programa\n");
	puts("===============================================");
	printf("Escolha sua opcao: ");
	scanf("%d",&opc);
	
	switch(opc)
	{
		case 1: puts("Usuario digitou 1");
			break;
		
		case 2: puts("Usuario digitou 2");
			break;
		case 3: puts("Usuario digitou 3");
			break;
			
		case 99: exit(0);
		
	default: puts("op invalida");
	}
	system("pause");
	system("cls");
}
