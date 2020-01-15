//Faça um algoritmo que transforme uma temperatura na escala Celsius (C) para a correspondente em Fahrenheit
//Fórmula de conversão: F=9/5 * C + 32
//------------------------

//Biblioteca que permite a entrada e saída de dados
#include <stdio.h>
//Biblioteca para permitir o uso de acentuação
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "Portuguese");//habilita a acentuação para o português
	
	float celsius;
	float fah;
	
	printf("Digite a temperatura em C°: \n");
	scanf("%f", &celsius);
	
	fah = 9/5 * celsius + 32;
	
	printf("A temperatura em Fahrenheit é exatamente: %f\n", fah);
	
	return 0;
}
