/*Algoritmo 04_01
OBJETIVO: Ler um número inteiro e exibir seu sucessor e antecessor
*/
//------------------------

//Biblioteca que permite a entrada e saída de dados
#include <stdio.h>
//Biblioteca para permitir o uso de acentuação
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "Portuguese");//habilita a acentuação para o português
	
	//Declaração de variáveis
	int num;
	
	//entrada de dados
	printf("Digite um número inteiro qualquer.\n");
	scanf("%i",&num);
	
	//Impressão de dados com o processamento embutido
	printf("O número antecessor ao número %i é %i, e o seu sucessor é %i.\n", num, num-1, num+1);
	
	return 0;
}
