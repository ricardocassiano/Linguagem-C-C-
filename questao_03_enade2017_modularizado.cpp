/*
QUEST�O DISCURSIVA 03 - ENADE 2017

Uma empresa de cosm�ticos comercializa cinco diferentes tipos de produtos e os armazena em uma
estante de 40 X 40 posi��es. Em cada posi��o da estante, pode ficar armazenada apenas uma caixa com
um desses produtos. Para facilitar sua identifica��o, os produtos foram codificados da forma a seguir:
1: xampu;
2: condicionador;
3: hidratante;
4: tintura;
5: demaquilante;
0: vazio.

Nessa situa��o e considerando o desenvolvimento de um sistema para gerenciar a organiza��o dos produtos
na estante, estabeleceu-se a declara��o de vari�veis a seguir. (A DECLARA��O EST� FEITA NO C�DIGO)

Com base nessa declara��o e considerando a codifica��o dos produtos exposta, fa�a o que se pede nos
itens a seguir, apresentando as solu��es em linguagem de programa��o.

a) Escreva um trecho de c�digo para ler os c�digos dos produtos e armazen�-los na matriz Estante.
b) Escreva um trecho de c�digo para contar e imprimir a quantidade de caixas de cada tipo de produto
na estante.
*/
//------------------------

//Biblioteca que permite a entrada e sa�da de dados
#include <stdio.h>
//Biblioteca para permitir o uso de acentua��o
#include <locale.h>

/*Valida��o da entrada de dados*/
int validaCodigo(int cod, int posicao)
{
			if (cod<0 || cod>5)
			{
				printf("C�digo de produto inv�lido\n");
				return posicao-1;
			}
			else
			{
				return posicao;
			}
			
}

/*Coloca��o dos produtos na estante*/
void ColocarNaEstante (int Matriz[][5]){
	int i,j;
	
	for (i=1;i<=5;i++)
	{
		for (j=1;j<=5;j++)
		{
			printf("Digite o c�digo do produto da posi��o %i e %i:\n", i,j);
			scanf("%i",&Matriz[i][j]);
			
			j=validaCodigo(Matriz[i][j], j);
			
		}
	}
}


/* Trecho para contar a quantidade de cada tipo de produto, caso a entrada de
	dados tenha sido validada */
void ContarProdutos (int *Contador, int Estante[][5])
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for (j=1;j<=5;j++)
		{
			Contador[Estante[i][j]]=Contador[Estante[i][j]]+1;
		}
	}
}

/* imprimir a quantidade de caixas de cada tipo de produto na Estante */
void ImprimirContador (char Produtos[][20], int *Contador)
{
	int i,j;
	for (i=1;i<=5;i++)
	{
		printf("Produto %s possui %i caixas na Estante. \n", Produtos[i],Contador[i]);
	}
	printf("H� %i caixas vazias\n",Contador[0]);
}

int main ()
{
	setlocale(LC_ALL, "Portuguese");//habilita a acentua��o para o portugu�s
	
	//Declara��o das vari�veis
	
	//Matriz Estante (armazenar� os c�digos dos produtos)
	//PARA FINS DE TESTE, A MATRIZ SER� 5x5
	int Estante[5][5];
	
	//Matriz Produtos (armazenar� os tipos dos produtos)
	/*Pela necessidade de armazenar strings e a linguagem C n�o possuir String como um tipo de dados
	nativo, declara-se uma matriz de strings, onde as linhas representam as strings e as colunas, os
	caracteres das strings*/
	char Produtos[6][20] = {"vazio", "xampu", "condicionador", "hidratante", "tintura", "demaquilante"};
	
	//Vetor contador (armazenar� a quantidade de produtos de cada categoria)
	//Como � um somat�rio, inicializa-se a vari�vel com zero para que n�o sejam armazenados "lixos" de mem�ria
	int Contador[6] = {0,0,0,0,0,0};
	
	ColocarNaEstante(Estante);//passagem de matriz como par�metro - apenas o nome da matriz, o C envia o ponteiro dela
	ContarProdutos(Contador, Estante);
	ImprimirContador(Produtos, Contador);

	
	return 0;
}
