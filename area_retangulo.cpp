//Fa�a um algoritmo para mostrar a �rea de um ret�ngulo cujas dimens�es s�o obtidas com o usu�rio
//------------------------

//Biblioteca que permite a entrada e sa�da de dados
#include <stdio.h>
//Biblioteca para permitir o uso de acentua��o
#include <locale.h>


int base; //vari�vel para armazenar a base do retangulo
int altura; //vari�vel inteira para armazenar a altura do retangulo
int area; //vari�vel inteira para armazenar a �rea a ser calculada do ret�ngulo

int main ()
{
	setlocale(LC_ALL, "Portuguese");//habilita a acentua��o para o portugu�s
	
	
	printf("Digite a base do ret�ngulo: \n");
	scanf("%i", &base);
	printf("Digite a altura do ret�ngulo: \n");
	scanf("%i", &altura);
	
	area=base*altura;
	
	printf("A �rea do ret�ngulo �: %i\n", area);
	
	return 0;
}
