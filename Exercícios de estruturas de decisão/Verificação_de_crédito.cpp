/*Algoritmo 06_01
OBJETIVO: Para cr�dito imobili�rio, uma institui��o banc�ria estipulou que a presta��o n�o poder� ultrapassar 30%
do sal�rio bruto do funcion�rio. Crie um algoritmo que solicite o sal�rio e indica se o cr�dito foi aprovado ou
reprovado.
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
	float salBruto, prestacao;
	const float PORCENT = 0.3;
	
	//Entrada de dados
	printf("Digite o valor do seu sal�rio bruto: \n");
	scanf("%f", &salBruto);
	
	if(prestacao>(salBruto*PORCENT))
	{
		printf("O cr�dito imobili�rio n�o foi aprovado.\n");
	}
	else
	{
		printf("O cr�dito imobili�rio foi aprovado.\n");
	}
	return 0;
}
