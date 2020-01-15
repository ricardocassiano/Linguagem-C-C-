/*Algoritmo 04_04
OBJETIVO: Miguel resolveu fazer uma aplica��o de R$ 500,00 por seis meses a uma taxa de juros de 1%
ao m�s. Qual ser� o valor acumulado da aplica��o? Para isso, utilize a seguinte express�o para o c�lculo do
valor acumulado:
valor acumulado = P*((((1+i)^n)-1)/i)
onde:
i=taxa
P=aplica��o mensal
n=n�mero de meses

*/
//------------------------

//Biblioteca que permite a entrada e sa�da de dados
#include <stdio.h>
//Biblioteca para permitir o uso de acentua��o
#include <locale.h>


//Fun��o que calcula o valor acumulado - sem a f�rmula deles que est� errada.
float ValorAcumulado(float taxa, float apMensal, int nMeses)
{
	float valorAcumulado = 0;
	valorAcumulado = apMensal + ((apMensal*taxa)*nMeses);
	return valorAcumulado;
}

int main ()
{
	setlocale(LC_ALL, "Portuguese");//habilita a acentua��o para o portugu�s
	
	//Declara��o de vari�veis
	float valorAp=500, valorAc;
	
	//Processamento
	valorAc = ValorAcumulado (0.01, valorAp, 6);
	
	//Impress�o dos dados
	printf ("Valor Aplicado: R$ %.2f\n", valorAp);//Com casas decimais formatadas
	printf ("Taxa de juros: 0.01\n");
	printf ("Meses acumulados: 6\n");
	printf ("Valor Acumulado: R$ %.2f\n", valorAc);//Com casas decimais definidas
	
	return 0;
}
