//Função de exponenciação criada por myself
//------------------------

//Biblioteca que permite a entrada e saída de dados
#include <stdio.h>
//Biblioteca para permitir o uso de acentuação
#include <locale.h>

int Expo(int base, int expoente)
{
	int result=base, i;
	for (i=1;i<expoente;i++)
	{
		result=result*base;
	}
	return result;
}

int main ()
{
	setlocale(LC_ALL, "Portuguese");//habilita a acentuação para o português
	
	int expo;
	expo=Expo(2,3);
	printf("O resultado da sua operação é: %i",expo);
	
	return 0;
}
