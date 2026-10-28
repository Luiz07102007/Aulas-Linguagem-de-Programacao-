/*
Nome:Recursao2.c
Autor: Luiz F Araujo
Data: 28/10/26
Descrição: Programa para demonstrar a recursividade INDIRETA
*/


#include <stdio.h>
//seção de prototipação
void lerNum();
void analisarNumero(int);

main()
{
    lerNum();
} //fim do programa

//função para ler um numero
void lerNum()
{
    int num;num = 0;
    printf("Insira um numero: ");
    scanf("%d",&num);
    analisarNumero(num);
}

void analisarNumero(int n)
{
    if (n == 0) {
    	return;
	}
    if (n%2 == 0) {
        puts("o numero eh par");
    }
    else {
        puts("o numero eh IMPAR!!");
    }
    lerNum();
}
