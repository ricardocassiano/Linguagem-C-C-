//Faça um algoritmo para mostrar a área de um retângulo cujas dimensões são obtidas com o usuário
//------------------------

//Biblioteca que permite a entrada e saída de dados
#include <stdio.h>
//Biblioteca para permitir o uso de acentuação
#include <locale.h>


int base; //variável para armazenar a base do retangulo
int altura; //variável inteira para armazenar a altura do retangulo
int area; //variável inteira para armazenar a área a ser calculada do retângulo

int main ()
{
	setlocale(LC_ALL, "Portuguese");//habilita a acentuação para o português
	
	
	printf("Digite a base do retângulo: \n");
	scanf("%i", &base);
	printf("Digite a altura do retângulo: \n");
	scanf("%i", &altura);
	
	area=base*altura;
	
	printf("A área do retângulo é: %i\n", area);
	
	return 0;
}
