#include <stdlib.h>
#include <stdio.h>
#include <math.h>


void cabecalho()
	{
		printf("#####################################\n");
		printf("#                                   #\n");
		printf("#  Progama para calcular regra de 3 #\n");
		printf("#                                   #\n");
		printf("#####################################\n");

		return(cabecalho);
	}
int main()
{

	int valor1,valor2,x,resultado;
	cabecalho();

	printf("Digite o 1 valor :\n");
	scanf("%d",&valor1);
	printf("Digite o 2 valor :\n");
	scanf("%d",&valor2);

	valor1 = valor1 * 1;
	valor2 = valor2 * 100;
	resultado = valor2/valor1;

	printf("O Resultado e :%d \n",resultado);




	return 0;
}

