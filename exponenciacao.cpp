//Fun��o de exponencia��o criada por myself
//------------------------

//Biblioteca que permite a entrada e sa�da de dados
#include <stdio.h>
//Biblioteca para permitir o uso de acentua��o
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
	setlocale(LC_ALL, "Portuguese");//habilita a acentua��o para o portugu�s
	
	int expo;
	expo=Expo(2,3);
	printf("O resultado da sua opera��o �: %i",expo);
	
	return 0;
}
