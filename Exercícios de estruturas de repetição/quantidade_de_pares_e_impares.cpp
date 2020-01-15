/*Algoritmo 07_02
OBJETIVO: Entrar com 100 númros e informar ao final quantos são pares e quantos são ímpares
*/
//------------------------

//Biblioteca que permite a entrada e saída de dados
#include <stdio.h>
//Biblioteca para permitir o uso de acentuação
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "Portuguese");//habilita a acentuação para o português
	
	//DECLARAÇÃO DAS VARIÁVEIS
	int num;//variável que receberá os números digitados
	int par=0, impar=0;//variáveis que receberão as quantidades
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
	
	//Impressão dos dados
	printf("Dos 100 números digitados, %i são pares e %i são ímpares.\n", par, impar);
	
	return 0;
}
