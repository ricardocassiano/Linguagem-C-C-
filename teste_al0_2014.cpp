//Teste de AL0 corrigido
//Autor: Ricardo Cassiano
//Data de criação do código: 10/09/2014
//Data de reprodução/correção do código: 04/12/2019
//Tarefa: Criar um programa para verificar se um aluno será monitor da disciplina de AL0, sabendo que
//somente alunos com média maior que 8.5 e alguma das duas notas maiores que 9 poderão ser monitor
//O programa deve ser modularizado
//------------------------

//Biblioteca que permite a entrada e saída de dados
#include <stdio.h>
//Biblioteca para permitir o uso de acentuação
#include <locale.h>
//Biblioteca para alocação de memória, controle de processos, conversões e outras.
#include <stdlib.h>

float MediaPond (float n1, float n2, int peso1, int peso2)
{
	float mediaP;
	
	mediaP = ((n1*peso1) + (n2*peso2))/ 2;
	
	return mediaP;
}

//Função para retornar a média do aluno
float mediaF(int codigo, float nota1, float nota2)
{
	//Define o criterio de avaliação a partir do codigo do aluno
	//Armazena o resto da divisão por 2 (zero ou um)
	int criterio = codigo%2;
	float media;
	
	//Se o criterio for igual a zero, os pesos serão 2 e 8
	if (criterio == 0)	
	{
		media=MediaPond(nota1, nota2, 2, 8);
	}
	else //senão, os pesos serão 3 e 5
	{
		media=MediaPond(nota1, nota2, 3, 5);
	}
	return media;
}

//Procedimento sem retorno
//Procedimento somente para informar se o aluno será monitor
void verificaMonitores (float media, float nota1, float nota2)
{
	if (media>=8.5 && (nota1>=9 || nota2>=9))
	{
		printf("Parabéns! Venha ser nosso monitor!\n");
	}
}

int main ()
{
	setlocale(LC_ALL, "Portuguese");//habilita a acentuação para o português
	
	//variáveis
	int cod;
	float n1, n2, med;
	
	//Entrada de dados
	printf("Digite o código da disciplina: \n");
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
