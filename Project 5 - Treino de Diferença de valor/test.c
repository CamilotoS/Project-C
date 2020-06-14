#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
	for (; ;)
	{
	
		int valor1,valor2,result,resposta;
		valor1 = rand() % 3000;
		valor2 = rand() % 2000;

		result = valor1-valor2;

		printf("Qual a diferenca entre %d e %d ?",valor1,valor2 );
		scanf("%d",&resposta);

		if (resposta = result)
		{
			printf("Corno\n");
		}
		if (resposta != result)
		{
			printf("Corno2\n");
		}



		
	}
	return 0;
}
