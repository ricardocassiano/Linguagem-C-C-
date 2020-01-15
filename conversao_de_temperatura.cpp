//Fa�a um algoritmo que transforme uma temperatura na escala Celsius (C) para a correspondente em Fahrenheit
//F�rmula de convers�o: F=9/5 * C + 32
//------------------------

//Biblioteca que permite a entrada e sa�da de dados
#include <stdio.h>
//Biblioteca para permitir o uso de acentua��o
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "Portuguese");//habilita a acentua��o para o portugu�s
	
	float celsius;
	float fah;
	
	printf("Digite a temperatura em C�: \n");
	scanf("%f", &celsius);
	
	fah = 9/5 * celsius + 32;
	
	printf("A temperatura em Fahrenheit � exatamente: %f\n", fah);
	
	return 0;
}
