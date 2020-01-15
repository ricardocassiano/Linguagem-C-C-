/*Algoritmo 07_01
OBJETIVO: Entrevistar 20 pessoas e especificar seu estado civil, endo C para casados, S para solteiros ou V para viúvos.
Ao final do algoritmo, calcular a distribuição entre eles.
*/
//------------------------

//Biblioteca que permite a entrada e saída de dados
#include <stdio.h>
//Biblioteca para permitir o uso de acentuação
#include <locale.h>
//Bibioteca que contém funções de caracter
#include <conio.h>
//Biblioteca que contém funções de caracter
#include <ctype.h>

//Função que calcula porcentagem
float calculaPorcent(float parte, float total)
{
	float porcentagem=0;
	porcentagem = parte/total*100;
	return porcentagem;
}

//Função que verifica a distribuição dos estados civis de um vetor
void verificaDistribuicao (char *vetorDeEC, int tamVetor)
{
	int i;//índice e controlador do loop
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
	
	//Impressão dos dados
	printf("\n----------------------------------\n");
	printf("\nDos 20 entrevistados,\n");
	printf("%.2f %% são solteiros. [%i] pessoas.\n", calculaPorcent(solteiros, 20),solteiros);
	printf("%.2f %% são casados. [%i] pessoas.\n", calculaPorcent(casados, 20), casados);
	printf("%.2f %% são viúvos. [%i] pessoas.\n", calculaPorcent(viuvos, 20),viuvos);
	
}



int main ()
{
	setlocale(LC_ALL, "Portuguese");//habilita a acentuação para o português
	
	//DECLARAÇÃO DAS VARIÁVEIS
	char nome[1][10];//Variável para receber os nomes dos entrevistados
	char ec[20];//Vetor com os estados civis das pessoas
	int i;
	
	for (i=0; i<20;i++)
	{
		printf("\n\nExecução %i\n",i);
		printf("Seu nome: \n");
		scanf("%s",&nome[0]);
		//printf("nome digitado: %s\n",nome[1]);
		printf("Seu estado civil: \n[S] para solteiro | [C] para casado e [V] para viúvo.\n");
		//scanf("%c",&ec[i]);
		ec[i]= toupper(getche());
		
		//Validação do dado digitado
		while (ec[i]!='S' && ec[i]!='C' && ec[i]!='V' )
		{
			printf("Seu estado civil: \n[S] para solteiro | [C] para casado e [V] para viúvo.\n");
			ec[i]= toupper(getche());
		}
	}
	
	verificaDistribuicao(ec, 20);
	
	return 0;
}
