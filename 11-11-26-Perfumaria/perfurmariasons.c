/*
	Name: PerfumariaSons.c
	Author: Luiz F Rodrigues
	Date: 11/11/26 09:50
	Description: Programa para emitir sons necessário para chamar a atenção do usuário
*/
#include<windows.h> //biblioteca para usar Beep() e Sleep()
#include<stdio.h>
main()
{
	int freq, tempo;
	int cont;
	freq = 2000;
	tempo = 500;
	/*for(cont = 0; cont<20; cont++)
	{
		Beep(freq,tempo);
		freq =  freq + 500;
	}	
		for(cont = 0; cont>0; cont--)
	{
		Beep(freq,tempo);
		freq =  freq - 500;
		
	}*/
	Beep(700,1000);	
}
