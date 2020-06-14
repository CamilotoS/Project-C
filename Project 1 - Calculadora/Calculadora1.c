#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#define max 11
void imprime_cabecalho(void)
	{

		printf("*****************************************\n");
		printf("*                                       *\n");												
		printf("**** -- >> Progama para Loucos << -- ****\n");
		printf("*                                       *\n");
		printf("*                  Versao Pre-alfa      *\n");
		printf("*****************************************\n");
		return;
	}

int multiplic_doisnum(int N1 , int N2)
	{
		int resultado;
		resultado = N1 * N2;
		return(resultado);
	}

int tabuadaDeDez(int N1)
	{
		int resultado,i;
		for (i = 0; i < max; ++i)
		{
			resultado = N1 * i;
			printf("%d X %d = %d\n",N1,i,resultado);
			resultado = 0;
		}
	return(resultado);
	}


int tabuadafull(int N1)
	{
		int i,resultado,valor1,valor2;

		do
			{
				do
				{
					do
					{
						resultado = N1 * valor1;
						printf("%d X %d = %d",N1,valor1,resultado);

					}while (valor1 < 10);
				N1++;
				valor1 = 0;
				} while (N1 < 10);

			} 
		while (N1 != 11);
			return (N1);
	}






int main()
{

	int menu,v1,v2,i,valor1,N1;
	int resultado = 0 ;
	do
	{
		v1 = 0;
		v2 = 0;
		N1 = 0;
		resultado = 0;
		imprime_cabecalho();
		printf("Escolha uma opcao :\n\n");
		printf("1 - Apresentar uma tabuada. \n");
		printf("2 - Apresentar apenas uma multiplicacao \n");
		printf("3 - Apresentar todas as tabuadas de 0 a 9.\n");
		printf("4 - Apresentar uma divisao  de numeros inteiros.\n");
		printf("5 - Sair\n");
		scanf("%d",&menu);
		system("cls");

		switch(menu)
		{
			case 1 :
			printf("Digite o Numero da tabuada a ser exibida: \n");
			scanf("%d",&v1);
			system("cls");
			resultado = tabuadaDeDez(v1);
			system("pause");
			
			printf("Se deseja voltar ao menu digite 0 ou 5 para sair :\n");
			scanf("%d",&menu);
			system("cls");


			break;
			case 2 :
				printf("Digite o numero primeiro numero a ser multiplicado:\n");
				scanf("%d",&v1);
				printf("Digite o numero segundo numero numero a ser multiplicado:\n");
				scanf("%d",&v2);
				resultado = multiplic_doisnum(v1,v2);
				printf("Resultado de %d x %d = %d\n",v1,v2,resultado);
				system("pause");
				system("cls");
				printf("Se deseja voltar ao menu digite 0 ou 5 para sair :\n");
				scanf("%d",&menu);
				system("cls");
			break;
			case 3 : 
			for (int v1 = 0; v1 < 10; i++)
			{
				tabuadaDeDez(v1);
				v1 = v1 +1 ;
				printf("______________ %d ________\n",v1 );

			}
			break;
			case 4 :
				printf("Digite o primeiro divisor :");
				scanf("%d",&v1);
				printf("DIgite o Segundo dividendo :");
				scanf("%d",&v2);
				resultado = v1 / v2;
				printf("O resultado e : %d \n ",resultado);
				printf("Se deseja voltar ao menu digite 0 ou 5 para sair :\n");
				scanf("%d",&menu);
				system("cls");
			break;
		}


 	} while (menu != 5);
	
	return 0;
}

