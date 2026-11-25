/*
	Name: mudacordigita.c
	Author: Luiz F ROdriuges
	Date: 11/11/26 12:04
	Description: mudar cor qunado digita
*/

#include <stdio.h>
#include <windows.h>
#include <conio.h>

void mudarCor(int);

main()
{
	int cor;
	while(1) {
		cor = getch();
		mudarCor(cor);
		printf("texto colorido!!!\n");
		
		mudarCor(7);
		printf("texto normal!!!\n");
	}
}

void mudarCor(int cor) {
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole,cor);
}
