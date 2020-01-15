/*
QUESTÃO DISCURSIVA 03 - ENADE 2017

Uma empresa de cosméticos comercializa cinco diferentes tipos de produtos e os armazena em uma
estante de 40 X 40 posições. Em cada posição da estante, pode ficar armazenada apenas uma caixa com
um desses produtos. Para facilitar sua identificação, os produtos foram codificados da forma a seguir:
1: xampu;
2: condicionador;
3: hidratante;
4: tintura;
5: demaquilante;
0: vazio.

Nessa situação e considerando o desenvolvimento de um sistema para gerenciar a organização dos produtos
na estante, estabeleceu-se a declaração de variáveis a seguir. (A DECLARAÇÃO ESTÁ FEITA NO CÓDIGO)

Com base nessa declaração e considerando a codificação dos produtos exposta, faça o que se pede nos
itens a seguir, apresentando as soluções em linguagem de programação.

a) Escreva um trecho de código para ler os códigos dos produtos e armazená-los na matriz Estante.
b) Escreva um trecho de código para contar e imprimir a quantidade de caixas de cada tipo de produto
na estante.
*/
//------------------------

//Biblioteca que permite a entrada e saída de dados
#include <stdio.h>
//Biblioteca para permitir o uso de acentuação
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "Portuguese");//habilita a acentuação para o português
	
	//Declaração das variáveis
	
	//Matriz Estante (armazenará os códigos dos produtos)
	//PARA FINS DE TESTE, A MATRIZ SERÁ 5x5
	int Estante[5][5];
	
	//Matriz Produtos (armazenará os tipos dos produtos)
	/*Pela necessidade de armazenar strings e a linguagem C não possuir String como um tipo de dados
	nativo, declara-se uma matriz de strings, onde as linhas representam as strings e as colunas, os
	caracteres das strings*/
	char Produtos[6][20] = {"vazio", "xampu", "condicionador", "hidratante", "tintura", "demaquilante"};
	
	//Vetor contador (armazenará a quantidade de produtos de cada categoria)
	//Como é um somatório, inicializa-se a variável com zero para que não sejam armazenados "lixos" de memória
	int Contador[6] = {0,0,0,0,0,0};
	
	//contadores
	int i,j;
	
	
	/*Colocação dos produtos na estante*/
	for (i=1;i<=5;i++)
	{
		for (j=1;j<=5;j++)
		{
			printf("Digite o código do produto da posição %i e %i:\n", i,j);
			scanf("%i",&Estante[i][j]);
			
			/*Validação da entrada de dados*/
			if (Estante[i][j]<0 || Estante[i][j]>5)
			{
				printf("Código de produto inválido\n");
				j=j-1;
			}
		}
	}
	
	
	/* Trecho para contar a quantidade de cada tipo de produto, caso a entrada de
	dados tenha sido validada */
	for(i=1;i<=5;i++)
	{
		for (j=1;j<=5;j++)
		{
			Contador[Estante[i][j]]=Contador[Estante[i][j]]+1;
		}
	}
	
	
	/* imprimir a quantidade de caixas de cada tipo de produto na Estante */
	for (i=1;i<=5;i++)
	{
		printf("Produto %s possui %i caixas na Estante. \n", Produtos[i],Contador[i]);
	}
	printf("Há %i caixas vazias\n",Contador[0]);
	
	return 0;
}
