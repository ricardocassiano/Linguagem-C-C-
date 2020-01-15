/*Algoritmo 08_01
OBJETIVO: Solicitar a digitação de nome e salário de 10 pessoas.
Calcular um reajuste de 5% sobre esse salário e exibir os nomes e novos salários de cada um.
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
	char nomes[10][15];//Vetor de nomes com 14 caracteres máximos
	float salarios[10];
	int i;
	
	//Poderia ter feito tudo dentro de um único for e não haveria a necessidade de tantas posições nos vetores.
	//Só estou fazendo em dois vetores e dois for por conta do que foi pedido no algoritmo e pela proposta ser a utilização de vetores e matrizes
	
	//Entrada dos dados
	for (i=0;i<10;i++)
	{
		printf("\nDigite seu nome:\n");
		scanf("%s",&nomes[i]);
		printf("Digite seu salário:\n");
		scanf("%f", &salarios[i]);
	}
	
	//Processamento dos dados + exibição
	for(i=0;i<10;i++)
	{
		printf("\n%s, seu salário reajustado é de R$ %.2f", nomes[i], salarios[i]+(salarios[i]*0.05));
	}
	
	return 0;
}
