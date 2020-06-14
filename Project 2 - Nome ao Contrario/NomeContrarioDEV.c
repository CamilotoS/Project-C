#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <conio.h>

int main(int argc, char const *argv[])
{
	int tamanho;
	char nome[1000];
	printf("Digite seu nome :");
	gets(nome);
	tamanho = strlen(nome);
	for (int i = tamanho-1; i >= 0; i--)
	{
		printf("%c",nome[i] );
	}

	

	return 0;
}
