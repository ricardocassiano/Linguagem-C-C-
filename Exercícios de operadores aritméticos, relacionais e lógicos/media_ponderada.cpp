/*Algoritmo 04_02
OBJETIVO: Solicite a digitação de quatro números e exibir a média ponderada dos mesmos. Sendo que os respectivos pesos
são 1, 2, 3 e 4.
*/
//------------------------

//Biblioteca que permite a entrada e saída de dados
#include <stdio.h>
//Biblioteca para permitir o uso de acentuação
#include <locale.h>

//Função que calcula a média poderada
float MediaPond (float *vetorValores, int *vetorPesos, int tamVetor)
{
	int i;
	/*printf("Após a leitura, antes do cálculo, dentro da função.\n --------------------");
	for (i=0;i<4;i++)
	{
		printf("Posição %i, valor %f\n", i, vetorValores[i]);
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

//Função que soma todos os valores de um vetor
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
	setlocale(LC_ALL, "Portuguese");//habilita a acentuação para o português
	
	//Declaração das variáveis
	float numeros[4];//vetor para receber os quatro números
	int pesos[4]={1, 2, 3, 4}; //Vetor com os pesos já definidos conforme solicitado
	float media=0;
	int i;//índice e controlador do loop
	
	//Entrada de dados
	for(i=0;i<4;i++)
	{
		printf("Digite o valor da posição %i para o cálculo da média ponderada:\n", i);
		scanf("%f", &numeros[i]);
	}
	
	/*printf("Após a leitura, antes do cálculo.\n --------------------");
	for (i=0;i<4;i++)
	{
		printf("Posição %i, valor %f\n", i, numeros[i]);
	}*/
	//Cálculo da média ponderada
	media=MediaPond(numeros, pesos, 4);
	
	/*printf("Depois do cálculo, antes da impressão.\n --------------------");
	for (i=0;i<4;i++)
	{
		printf("Posição %i, valor %f\n", i, numeros[i]);
	}*/
	//Impressão dos dados
	printf("A média ponderada dos valores digitados é: %.1f\n", media);
	
	return 0;
}
