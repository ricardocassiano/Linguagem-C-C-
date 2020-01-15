/*Algoritmo 06_03
OBJETIVO: Um restaurante possui 3 opções de pratos para a refeição principal:
peixe com 230 calorias, frango com 250 e carne com 350 calorias;
além disso, tem as seguintes opções de sobremesa:
abacaxi com 50 calorias, mousse com 350 calorias e sorvete com 170 calorias. 
Crie um algoritmo que solicite qual o prato principal e a sobremesa e informe ao cliente quantas calorias
serão ingeridas com a refeição
*/
//------------------------

//Biblioteca que permite a entrada e saída de dados
#include <stdio.h>
//Biblioteca para permitir o uso de acentuação
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "Portuguese");//habilita a acentuação para o português
	
	//DECLARAÇÃO DE VARIÁVEIS
	int totalCalorias=0;//Variável que acumulará as calorias
	int op1, op2;//Opções de prato principal e sobremesa
	
	//ENTRADA DOS DADOS
	printf("Digite o número do prato principal que deseja:\n[1] Peixe\n[2] Frango\n[3] Carne\n");
	scanf("%i",&op1);
	printf("Digite o número da sobremesa que deseja:\n[1] Abacaxi\n[2] Mousse\n[3] Sorvete\n");
	scanf("%i",&op2);
	
	//Processamento
	switch (op1)
	{
		case 1:
			totalCalorias+=230;
			break;
		case 2:
			totalCalorias+=250;
			break;
		case 3:
			totalCalorias+=350;
			break;
	}
	
	switch (op2)
	{
		case 1:
			totalCalorias+=50;
			break;
		case 2:
			totalCalorias+=350;
			break;
		case 3:
			totalCalorias+=170;
			break;
	}
	
	//Impressão dos dados
	printf("\nPara as opções escolhidas, o total de caloridas a serem consumidas é de: %i\n", totalCalorias);
	
	return 0;
}
