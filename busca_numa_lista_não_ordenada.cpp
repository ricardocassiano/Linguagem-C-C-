/*
OBJETIVO: Criar uma função que busque um elemento x dentro de uma lista qualquer.
*/
//------------------------

//Biblioteca que permite a entrada e saída de dados
#include <stdio.h>
//Biblioteca para permitir o uso de acentuação
#include <locale.h>

//Função de busca (considerar-se-á uma lista de inteiros)
int busca (int *vetor, int tamVetor, int elemento)
{
	int i;
	for(i=0; i<=tamVetor; i++)
	{
		if (vetor[i]==elemento)
			return i;
	}
	return 0;//zero caso o elemento não seja encontrado == false
}
int main ()
{
	setlocale(LC_ALL, "Portuguese");//habilita a acentuação para o português
	
	
	return 0;
}
