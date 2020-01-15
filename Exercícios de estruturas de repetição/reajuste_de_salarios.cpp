/*Algoritmo 08_01
OBJETIVO: Solicitar a digita��o de nome e sal�rio de 10 pessoas.
Calcular um reajuste de 5% sobre esse sal�rio e exibir os nomes e novos sal�rios de cada um.
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
	char nomes[10][15];//Vetor de nomes com 14 caracteres m�ximos
	float salarios[10];
	int i;
	
	//Poderia ter feito tudo dentro de um �nico for e n�o haveria a necessidade de tantas posi��es nos vetores.
	//S� estou fazendo em dois vetores e dois for por conta do que foi pedido no algoritmo e pela proposta ser a utiliza��o de vetores e matrizes
	
	//Entrada dos dados
	for (i=0;i<10;i++)
	{
		printf("\nDigite seu nome:\n");
		scanf("%s",&nomes[i]);
		printf("Digite seu sal�rio:\n");
		scanf("%f", &salarios[i]);
	}
	
	//Processamento dos dados + exibi��o
	for(i=0;i<10;i++)
	{
		printf("\n%s, seu sal�rio reajustado � de R$ %.2f", nomes[i], salarios[i]+(salarios[i]*0.05));
	}
	
	return 0;
}
