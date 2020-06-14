/*
Criado por Ives Camiloto | 14/06/2020
De uso publico , License MIT. 
GitHub : CamilotoS


*/
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>



void menu(){
	printf("Welcome !");
	printf("Esse programa serve para você testar suas habilidades na subtração de valores.");
}

int Different(int value1 , int value2){
	int valor1,valor2,result,resposta;
	valor1 = rand() % value1; // Value MAX VAR valor1
	valor2 = rand() % value2; // Value MAX VAR valor2

	result = valor1-valor2;

	printf("Qual a diferenca entre %d e %d ?",valor1,valor2 );
	scanf("%d",&resposta);

	if (resposta = result)
		{
			printf("Oh Ehhh , You're right!\n");
		}
		if (resposta != result)
		{
			printf("sorry, but you were wrong\n");
		}
}

int main(int argc, char const *argv[])
{
	// Declaração de Variaveis 
	int value1,value2;

	// Code
	setlocale(LC_ALL,"Portuguese");
	menu();
	printf("\nEscolha um valor maximo que queria fazer a Subtração do 1 valor :");
	scanf("%d",&value1);
	printf("\nEscolha um valor maximo que queria fazer a Subtração do 2 valor :");
	scanf("%d",&value2);
	Different(value1,value2);

	return 0;
}
