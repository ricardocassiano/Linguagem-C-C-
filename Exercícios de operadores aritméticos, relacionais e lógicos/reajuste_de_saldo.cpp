/*Algoritmo 04_03
OBJETIVO: Solicite a digita��o do saldo atual da caderneta de poupan�a, exiba o resultado do reajuste de 1%
sobre o valor digitado e informe ao usu�rio
*/
//------------------------

//Biblioteca que permite a entrada e sa�da de dados
#include <stdio.h>
//Biblioteca para permitir o uso de acentua��o
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "Portuguese");//habilita a acentua��o para o portugu�s
	
	//Declara��o de vari�veis
	float saldoInicial, saldoFinal;
	
	//Entrada dos dados
	printf("Digite o saldo atual da sua caderneta de poupan�a:\n");
	scanf("%f", &saldoInicial);
	
	//Processamento dos dados
	saldoFinal=saldoInicial+(saldoInicial*0.01); //Reajuste de 1%
	
	//Impress�o dos dados
	printf("O seu saldo reajustado � de %.2f. (Reajuste de 1 por cento)\n", saldoFinal);
	
	return 0;
}
