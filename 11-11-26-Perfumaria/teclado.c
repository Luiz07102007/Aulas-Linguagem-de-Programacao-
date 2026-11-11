/*
	Name: teclado.c
	Author: Luiz F Rodrigues
	Date: 11/11/26 10:15
	Description: Programa para simular sons de um teclado
*/

#include<stdio.h>
#include<windows.h>

main()
{
	int tecla;
	while(1)
	{
		tecla = getch();
		Beep(tecla*100,100);
		printf("Tecla: %c - %d\n",tecla,tecla);	
	}
	
}
