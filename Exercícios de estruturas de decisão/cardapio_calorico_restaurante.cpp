/*Algoritmo 06_03
OBJETIVO: Um restaurante possui 3 op��es de pratos para a refei��o principal:
peixe com 230 calorias, frango com 250 e carne com 350 calorias;
al�m disso, tem as seguintes op��es de sobremesa:
abacaxi com 50 calorias, mousse com 350 calorias e sorvete com 170 calorias. 
Crie um algoritmo que solicite qual o prato principal e a sobremesa e informe ao cliente quantas calorias
ser�o ingeridas com a refei��o
*/
//------------------------

//Biblioteca que permite a entrada e sa�da de dados
#include <stdio.h>
//Biblioteca para permitir o uso de acentua��o
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "Portuguese");//habilita a acentua��o para o portugu�s
	
	//DECLARA��O DE VARI�VEIS
	int totalCalorias=0;//Vari�vel que acumular� as calorias
	int op1, op2;//Op��es de prato principal e sobremesa
	
	//ENTRADA DOS DADOS
	printf("Digite o n�mero do prato principal que deseja:\n[1] Peixe\n[2] Frango\n[3] Carne\n");
	scanf("%i",&op1);
	printf("Digite o n�mero da sobremesa que deseja:\n[1] Abacaxi\n[2] Mousse\n[3] Sorvete\n");
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
	
	//Impress�o dos dados
	printf("\nPara as op��es escolhidas, o total de caloridas a serem consumidas � de: %i\n", totalCalorias);
	
	return 0;
}
