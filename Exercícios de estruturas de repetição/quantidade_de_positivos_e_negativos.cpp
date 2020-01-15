/*Algoritmo 07_03
OBJETIVO: Entrar com 20 n�meros e exibir a soma dos positivos e dos negativos.
*/
//------------------------

//Biblioteca que permite a entrada e sa�da de dados
#include <stdio.h>
//Biblioteca para permitir o uso de acentua��o
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "Portuguese");//habilita a acentua��o para o portugu�s
	//Declara��o das vari�veis
	int i, num, somaPos=0, somaNeg=0; //n�mero, somat�rio dos positivos e somat�rio dos negativos
	
	//Entrada dos dados + processamento
	for(i=0; i<20; i++)
	{
		printf("\nDigite um n�mero.\n");
		scanf("%i", &num);
		if (num>0)
			somaPos+=num;
		else
			somaNeg+=num;
	}
	
	//Impress�o do resultado
	printf("Soma dos n�meros positivos: %i\nSoma dos n�meros negativos: %i\n", somaPos, somaNeg);
	
	return 0;
}
