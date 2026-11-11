/*
	Name: dadoscoloridos.c
	Author: Luiz F Rodrigues
	Date: 11/11/26 11:16
	Description: programa que o usuario entre com o nome idade e altura mudando a cor, nome: , idade: altura: | ao final modar cada um com uma cor diferente e com um som
*/
#include<stdio.h>
#include<windows.h>

main()
{
	char nome[30];
	int idade,i; idade = i = 0;
	float altura; altura = 0.0;
	printf("\033[47;31m================== CADASTRO USUARIO ==================\033[40;33m\n");
	
	printf("Nome:\033[32m");
	gets(nome);
	Beep(2300, 300);
	printf("\033[34mIdade:\033[31m");
	scanf("%d",&idade); 
	Beep(2300, 300);
	printf("\033[36mAltura:\033[35m");
	scanf("%f",&altura);
	Beep(2300, 300);
	printf("\033[0mVoce\033[33m se \033[36mchama \033[34m%s \033[31mtem \033[35m%d \033[35manos \033[37me \033[32m%.2f \033[33mde \033[34maltura\033[0m",nome,idade,altura);
	Beep(523, 100); 
	Beep(659, 100); 
	Beep(784, 200);
}
