#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#define max 100


struct no // estrutura da Arvore
{
    char dado;
    int esquerda;
    int direita;
    int pai;
};

struct no arvore[max]; // Definindo o No para nome arvore[max]
int indice = 0; // Indice para o Vetor e guarda a primeira posicao livre da arvore

/* Estrutura 001 */
int arvore_procura(char dado) //procura/Localiza o nó
{
   if (indice != 0) // Verificar se o NO esta na raiz ou nao
   {
       for (int i = 0; i < indice; i++) // Buscar aonde esta o indice
       {
           if (arvore[i].dado == dado) // Verifica aonde esta o indice e retorna ele mesmo parando o programa
           {
               return (i);
           }
           
       }
       
   } else { // O no esta na raiz e nao precisa ser achado.
       return 0;
   }
    
};

/* Estrutura 002 */

void arvore_insere(int pai,char dado,int lado){
    switch (lado)
    {
    case E:
        arvore[pai].esquerda = indice;  // Indica que sera adicionado um valor no lado Esquerdo da raiz pai
        arvore[indice].dado = dado;
        arvore[indice].pai = pai;
        arvore[indice].esquerda = -1;
        arvore[indice].direita = -1;
        indice++;
        break;
    case D: 
        arvore[pai].direita = indice; // Indica que sera adicionado um valor no lado Direito da raiz pai
        arvore[indice].dado = dado;
        arvore[indice].pai = pai;
        arvore[indice].esquerda = -1;
        arvore[indice].direita = -1;
        indice++;
        break;

    default:
        break;
    }

}


int main(int argc, char const *argv[])
{
    
    return 0;
}

