/*Algoritmo 04_02
OBJETIVO: Solicite a digita��o de quatro n�meros e exibir a m�dia ponderada dos mesmos. Sendo que os respectivos pesos
s�o 1, 2, 3 e 4.
*/
//------------------------

//Biblioteca que permite a entrada e sa�da de dados
#include <stdio.h>
//Biblioteca para permitir o uso de acentua��o
#include <locale.h>

//Fun��o que calcula a m�dia poderada
float MediaPond (float *vetorValores, int *vetorPesos, int tamVetor)
{
	int i;
	/*printf("Ap�s a leitura, antes do c�lculo, dentro da fun��o.\n --------------------");
	for (i=0;i<4;i++)
	{
		printf("Posi��o %i, valor %f\n", i, vetorValores[i]);
	}*/
	
	float total=0;
	float media=0;
	for (i=0;i<tamVetor;i++)
	{
		total+=(vetorValores[i]*vetorPesos[i]);
	}
	media=total/tamVetor;
	return media;
}

//Fun��o que soma todos os valores de um vetor
/*float Soma (float *vetorValores, int tamVetor)
{
	int i;
	float total=0;
	for (i=0;i<tamVetor;i++)
	{
		total+=vetorValores[i];
	}
	return total;
}*/
int main ()
{
	setlocale(LC_ALL, "Portuguese");//habilita a acentua��o para o portugu�s
	
	//Declara��o das vari�veis
	float numeros[4];//vetor para receber os quatro n�meros
	int pesos[4]={1, 2, 3, 4}; //Vetor com os pesos j� definidos conforme solicitado
	float media=0;
	int i;//�ndice e controlador do loop
	
	//Entrada de dados
	for(i=0;i<4;i++)
	{
		printf("Digite o valor da posi��o %i para o c�lculo da m�dia ponderada:\n", i);
		scanf("%f", &numeros[i]);
	}
	
	/*printf("Ap�s a leitura, antes do c�lculo.\n --------------------");
	for (i=0;i<4;i++)
	{
		printf("Posi��o %i, valor %f\n", i, numeros[i]);
	}*/
	//C�lculo da m�dia ponderada
	media=MediaPond(numeros, pesos, 4);
	
	/*printf("Depois do c�lculo, antes da impress�o.\n --------------------");
	for (i=0;i<4;i++)
	{
		printf("Posi��o %i, valor %f\n", i, numeros[i]);
	}*/
	//Impress�o dos dados
	printf("A m�dia ponderada dos valores digitados �: %.1f\n", media);
	
	return 0;
}
