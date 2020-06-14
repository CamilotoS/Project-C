#include <stdlib.h>
#include <string.h>
#define max 10

void menu(void)
{	
		int num_prog;
		num_prog = rand();
		num_prog = num_prog;
		printf("+========================+\n");
		printf("+          Progama       +\n");	
		printf("+========================+\n\n\n");
		printf("Progama de Numero :%d \n",&num_prog);

		
		return(menu);

}

int main(int argc, char const *argv[])
{
	menu();
	int opc ;
	int aluno[6],bimestre[5],i,y;

	opc = 0;
	
	do
	{	
		if ( opc == 0)
		{
			printf("1 - Cadastrar nota\n");
			printf("2 - Cadastras materia\n");
			printf("3 - Visualizar Notas cadastradas e sua posição\n");
			printf("4 - Visualizar Materias cadastradas e sua posição\n");
			printf("5 - Visualizar tudo !\n");
			printf("6 - Para sair .\n");
			printf("Escolha a opcao desejada :\n");
			scanf("%d",&opc);
		}


		if ( opc == 1)
		{
			for (int i = 1; i <= 5; i++)
				{
					for (int y = 1; y <= 5; i++ )
					{
						printf("Aluno : %d \n",aluno[i]);
						printf("Digite a nota do %d Bimestre : \n",y );
						scanf("%d",bimestre[y]);
					}
				}

		}


		if ( opc == 2)
		{
			/* code */
		}


		if ( opc == 3)
		{
			/* code */
		}


		if ( opc == 4)
		{
			/* code */
		}


		if ( opc == 5)
		{
			/* code */
		}


		if ( opc == 6)
		{
			system("cls");
			printf("Obrigado por usar nosso progama !!!");
			return 0;
		}


		if (opc > 6)
		{
			printf("Opcao nao encontrada , por favor digite uma opcao valida !!\n");
			system("pause");
			system("cls");
			opc = 0;
		}

	}
	while (opc != 985474124);
	

	return 0;
}
