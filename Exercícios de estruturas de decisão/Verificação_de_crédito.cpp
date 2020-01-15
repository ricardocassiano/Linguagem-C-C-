/*Algoritmo 06_01
OBJETIVO: Para crédito imobiliário, uma instituição bancária estipulou que a prestação não poderá ultrapassar 30%
do salário bruto do funcionário. Crie um algoritmo que solicite o salário e indica se o crédito foi aprovado ou
reprovado.
*/
//------------------------

//Biblioteca que permite a entrada e saída de dados
#include <stdio.h>
//Biblioteca para permitir o uso de acentuação
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "Portuguese");//habilita a acentuação para o português
	
	//DECLARAÇÃO DAS VARIÁVEIS
	float salBruto, prestacao;
	const float PORCENT = 0.3;
	
	//Entrada de dados
	printf("Digite o valor do seu salário bruto: \n");
	scanf("%f", &salBruto);
	
	if(prestacao>(salBruto*PORCENT))
	{
		printf("O crédito imobiliário não foi aprovado.\n");
	}
	else
	{
		printf("O crédito imobiliário foi aprovado.\n");
	}
	return 0;
}
