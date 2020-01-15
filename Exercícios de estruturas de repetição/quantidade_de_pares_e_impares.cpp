/*Algoritmo 07_02
OBJETIVO: Entrar com 100 n�mros e informar ao final quantos s�o pares e quantos s�o �mpares
*/
//------------------------

//Biblioteca que permite a entrada e sa�da de dados
#include <stdio.h>
//Biblioteca para permitir o uso de acentua��o
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "Portuguese");//habilita a acentua��o para o portugu�s
	
	//DECLARA��O DAS VARI�VEIS
	int num;//vari�vel que receber� os n�meros digitados
	int par=0, impar=0;//vari�veis que receber�o as quantidades
	int i;
	
	//Entrada de dados+Processamento
	for(i=0;i<100;i++)
	{
		printf("\nDigite um valor:\n");
		scanf("%i",&num);
		if(num%2==0)
			par++;
		else
			impar++;
	}
	
	//Impress�o dos dados
	printf("Dos 100 n�meros digitados, %i s�o pares e %i s�o �mpares.\n", par, impar);
	
	return 0;
}
