/*Algoritmo 07_01
OBJETIVO: Entrevistar 20 pessoas e especificar seu estado civil, endo C para casados, S para solteiros ou V para vi�vos.
Ao final do algoritmo, calcular a distribui��o entre eles.
*/
//------------------------

//Biblioteca que permite a entrada e sa�da de dados
#include <stdio.h>
//Biblioteca para permitir o uso de acentua��o
#include <locale.h>
//Bibioteca que cont�m fun��es de caracter
#include <conio.h>
//Biblioteca que cont�m fun��es de caracter
#include <ctype.h>

//Fun��o que calcula porcentagem
float calculaPorcent(float parte, float total)
{
	float porcentagem=0;
	porcentagem = parte/total*100;
	return porcentagem;
}

//Fun��o que verifica a distribui��o dos estados civis de um vetor
void verificaDistribuicao (char *vetorDeEC, int tamVetor)
{
	int i;//�ndice e controlador do loop
	int solteiros=0, casados=0, viuvos=0;//acumuladores
	
	//Verifica a quantidade
	for(i=0;i<tamVetor;i++)
	{
		switch (vetorDeEC[i])
		{
			case 'C':
				casados++;
				break;
			case 'S':
				solteiros++;
				break;
			case 'V':
				viuvos++;
				break;
		}
	}
	
	//Impress�o dos dados
	printf("\n----------------------------------\n");
	printf("\nDos 20 entrevistados,\n");
	printf("%.2f %% s�o solteiros. [%i] pessoas.\n", calculaPorcent(solteiros, 20),solteiros);
	printf("%.2f %% s�o casados. [%i] pessoas.\n", calculaPorcent(casados, 20), casados);
	printf("%.2f %% s�o vi�vos. [%i] pessoas.\n", calculaPorcent(viuvos, 20),viuvos);
	
}



int main ()
{
	setlocale(LC_ALL, "Portuguese");//habilita a acentua��o para o portugu�s
	
	//DECLARA��O DAS VARI�VEIS
	char nome[1][10];//Vari�vel para receber os nomes dos entrevistados
	char ec[20];//Vetor com os estados civis das pessoas
	int i;
	
	for (i=0; i<20;i++)
	{
		printf("\n\nExecu��o %i\n",i);
		printf("Seu nome: \n");
		scanf("%s",&nome[0]);
		//printf("nome digitado: %s\n",nome[1]);
		printf("Seu estado civil: \n[S] para solteiro | [C] para casado e [V] para vi�vo.\n");
		//scanf("%c",&ec[i]);
		ec[i]= toupper(getche());
		
		//Valida��o do dado digitado
		while (ec[i]!='S' && ec[i]!='C' && ec[i]!='V' )
		{
			printf("Seu estado civil: \n[S] para solteiro | [C] para casado e [V] para vi�vo.\n");
			ec[i]= toupper(getche());
		}
	}
	
	verificaDistribuicao(ec, 20);
	
	return 0;
}
