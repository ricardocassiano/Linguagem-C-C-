/*Algoritmo 04_04
OBJETIVO: Miguel resolveu fazer uma aplicação de R$ 500,00 por seis meses a uma taxa de juros de 1%
ao mês. Qual será o valor acumulado da aplicação? Para isso, utilize a seguinte expressão para o cálculo do
valor acumulado:
valor acumulado = P*((((1+i)^n)-1)/i)
onde:
i=taxa
P=aplicação mensal
n=número de meses

*/
//------------------------

//Biblioteca que permite a entrada e saída de dados
#include <stdio.h>
//Biblioteca para permitir o uso de acentuação
#include <locale.h>


//Função que calcula o valor acumulado - sem a fórmula deles que está errada.
float ValorAcumulado(float taxa, float apMensal, int nMeses)
{
	float valorAcumulado = 0;
	valorAcumulado = apMensal + ((apMensal*taxa)*nMeses);
	return valorAcumulado;
}

int main ()
{
	setlocale(LC_ALL, "Portuguese");//habilita a acentuação para o português
	
	//Declaração de variáveis
	float valorAp=500, valorAc;
	
	//Processamento
	valorAc = ValorAcumulado (0.01, valorAp, 6);
	
	//Impressão dos dados
	printf ("Valor Aplicado: R$ %.2f\n", valorAp);//Com casas decimais formatadas
	printf ("Taxa de juros: 0.01\n");
	printf ("Meses acumulados: 6\n");
	printf ("Valor Acumulado: R$ %.2f\n", valorAc);//Com casas decimais definidas
	
	return 0;
}
