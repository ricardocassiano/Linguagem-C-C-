/*Algoritmo 07_03
OBJETIVO: Entrar com 20 números e exibir a soma dos positivos e dos negativos.
*/
//------------------------

//Biblioteca que permite a entrada e saída de dados
#include <stdio.h>
//Biblioteca para permitir o uso de acentuação
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "Portuguese");//habilita a acentuação para o português
	//Declaração das variáveis
	int i, num, somaPos=0, somaNeg=0; //número, somatório dos positivos e somatório dos negativos
	
	//Entrada dos dados + processamento
	for(i=0; i<20; i++)
	{
		printf("\nDigite um número.\n");
		scanf("%i", &num);
		if (num>0)
			somaPos+=num;
		else
			somaNeg+=num;
	}
	
	//Impressão do resultado
	printf("Soma dos números positivos: %i\nSoma dos números negativos: %i\n", somaPos, somaNeg);
	
	return 0;
}
