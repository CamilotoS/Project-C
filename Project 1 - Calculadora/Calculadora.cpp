#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

void imprime_cabecalho(void)
	{

		printf("*****************************************\n");
		printf("                                        *\n");												
		printf("**** -- >> Progama para Loucos << -- ****\n");
		printf("                                        *\n");
		printf("*****************************************\n");
		return 0;
	}


int main()
{
	int menu;
	printf("Escolha a opcao desejada :\n");
	printf("1 - Apresentar uma tabuada. \n", );
	printf("2 - Apresentar apenas uma multiplicacao.\n", );
	printf("3 - Apresentar todas as tabuadas de 0 a 9.\n");
	printf("4 - Apresentar a tabuada desejada.\n");
	scanf("%d",&menu);
	return 0;
}
