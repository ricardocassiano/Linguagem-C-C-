/*
OBJETIVO: Criar uma fun��o que busque um elemento x dentro de uma lista qualquer.
*/
//------------------------

//Biblioteca que permite a entrada e sa�da de dados
#include <stdio.h>
//Biblioteca para permitir o uso de acentua��o
#include <locale.h>

//Fun��o de busca (considerar-se-� uma lista de inteiros)
int busca (int *vetor, int tamVetor, int elemento)
{
	int i;
	for(i=0; i<=tamVetor; i++)
	{
		if (vetor[i]==elemento)
			return i;
	}
	return 0;//zero caso o elemento n�o seja encontrado == false
}
int main ()
{
	setlocale(LC_ALL, "Portuguese");//habilita a acentua��o para o portugu�s
	
	
	return 0;
}
