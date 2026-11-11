/*
	Name: textocolorido.c
	Author: Luiz F rODRIGUES 
	Date: 11/11/26 10:53
	Description: 
*/

#include<stdio.h>

main()
{
  // --- CORES NORMAIS ---
    printf("\033[30mTexto em preto!\n");
    printf("\033[31mTexto em vermelho!\n");
    printf("\033[32mTexto em verde!\n");
    printf("\033[33mTexto em amarelo!\n");
    printf("\033[34mTexto em azul!\n");
    printf("\033[35mTexto em magenta (roxo)!\n");
    printf("\033[36mTexto em ciano (azul claro)!\n");
    printf("\033[37mTexto em branco (cinza claro)!\n");

    printf("\033[0m\n"); // Reseta e pula linha

    // --- CORES CLARAS / NEGRITO (1;) ---
    printf("\033[1;30mTexto em cinza escuro (preto claro)!\n");
    printf("\033[1;31mTexto em vermelho claro!\n");
    printf("\033[1;32mTexto em verde claro!\n");
    printf("\033[1;33mTexto em amarelo claro!\n");
    printf("\033[1;34mTexto em azul claro!\n");
    printf("\033[1;35mTexto em magenta claro!\n");
    printf("\033[1;36mTexto em ciano claro!\n");
    printf("\033[1;37mTexto em branco brilhante!\n");

    printf("\033[0m\n"); // Reseta e pula linha

    // --- CORES DE FUNDO ---
    printf("\033[40mFundo preto!\033[0m\n");
    printf("\033[41mFundo vermelho!\033[0m\n");
    printf("\033[42mFundo verde!\033[0m\n");
    printf("\033[43mFundo amarelo!\033[0m\n");
    printf("\033[44mFundo azul!\033[0m\n");
    printf("\033[45mFundo magenta!\033[0m\n");
    printf("\033[46mFundo ciano!\033[0m\n");
    printf("\033[47;30mFundo branco com letra preta!\033[35m\n");
	printf("\033[46mFundo ciano com texto roxo\033[35m\n");
    printf("\n");

    // --- VOLTAR AO PADRÃO ---
    printf("\033[0mTexto em cor padrao!\n");
}

