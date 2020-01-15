/*Algoritmo 04_01
OBJETIVO: Ler um n�mero inteiro e exibir seu sucessor e antecessor
*/
//------------------------

//Biblioteca que permite a entrada e sa�da de dados
#include <stdio.h>
//Biblioteca para permitir o uso de acentua��o
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "Portuguese");//habilita a acentua��o para o portugu�s
	
	//Declara��o de vari�veis
	int num;
	
	//entrada de dados
	printf("Digite um n�mero inteiro qualquer.\n");
	scanf("%i",&num);
	
	//Impress�o de dados com o processamento embutido
	printf("O n�mero antecessor ao n�mero %i � %i, e o seu sucessor � %i.\n", num, num-1, num+1);
	
	return 0;
}
