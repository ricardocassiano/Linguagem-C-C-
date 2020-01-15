//Teste de AL0 corrigido
//Autor: Ricardo Cassiano
//Data de cria��o do c�digo: 10/09/2014
//Data de reprodu��o/corre��o do c�digo: 04/12/2019
//Tarefa: Criar um programa para verificar se um aluno ser� monitor da disciplina de AL0, sabendo que
//somente alunos com m�dia maior que 8.5 e alguma das duas notas maiores que 9 poder�o ser monitor
//O programa deve ser modularizado
//------------------------

//Biblioteca que permite a entrada e sa�da de dados
#include <stdio.h>
//Biblioteca para permitir o uso de acentua��o
#include <locale.h>
//Biblioteca para aloca��o de mem�ria, controle de processos, convers�es e outras.
#include <stdlib.h>

float MediaPond (float n1, float n2, int peso1, int peso2)
{
	float mediaP;
	
	mediaP = ((n1*peso1) + (n2*peso2))/ 2;
	
	return mediaP;
}

//Fun��o para retornar a m�dia do aluno
float mediaF(int codigo, float nota1, float nota2)
{
	//Define o criterio de avalia��o a partir do codigo do aluno
	//Armazena o resto da divis�o por 2 (zero ou um)
	int criterio = codigo%2;
	float media;
	
	//Se o criterio for igual a zero, os pesos ser�o 2 e 8
	if (criterio == 0)	
	{
		media=MediaPond(nota1, nota2, 2, 8);
	}
	else //sen�o, os pesos ser�o 3 e 5
	{
		media=MediaPond(nota1, nota2, 3, 5);
	}
	return media;
}

//Procedimento sem retorno
//Procedimento somente para informar se o aluno ser� monitor
void verificaMonitores (float media, float nota1, float nota2)
{
	if (media>=8.5 && (nota1>=9 || nota2>=9))
	{
		printf("Parab�ns! Venha ser nosso monitor!\n");
	}
}

int main ()
{
	setlocale(LC_ALL, "Portuguese");//habilita a acentua��o para o portugu�s
	
	//vari�veis
	int cod;
	float n1, n2, med;
	
	//Entrada de dados
	printf("Digite o c�digo da disciplina: \n");
	scanf("%i", &cod);
	printf("Digite a primeira nota: \n");
	scanf("%f", &n1);
	printf("Digite a segunda nota: \n");
	scanf("%f", &n2);
	
	med=mediaF(cod,n1, n2);
	verificaMonitores (med, n1, n2);
	
	return 0;
	system("pause");
}
