/*Algoritmo 04_03
OBJETIVO: Solicite a digitação do saldo atual da caderneta de poupança, exiba o resultado do reajuste de 1%
sobre o valor digitado e informe ao usuário
*/
//------------------------

//Biblioteca que permite a entrada e saída de dados
#include <stdio.h>
//Biblioteca para permitir o uso de acentuação
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "Portuguese");//habilita a acentuação para o português
	
	//Declaração de variáveis
	float saldoInicial, saldoFinal;
	
	//Entrada dos dados
	printf("Digite o saldo atual da sua caderneta de poupança:\n");
	scanf("%f", &saldoInicial);
	
	//Processamento dos dados
	saldoFinal=saldoInicial+(saldoInicial*0.01); //Reajuste de 1%
	
	//Impressão dos dados
	printf("O seu saldo reajustado é de %.2f. (Reajuste de 1 por cento)\n", saldoFinal);
	
	return 0;
}
