/*ALGORITMO: ORDENA��O DE VETOR
OBJETIVO: Alocar um vetor de inteiros dinamicamente, recebendo os dados do vetor pelo usu�rio.
Ao final da leitura, ordenar o vetor.
Utilizar as estruturas de repeti��o
*/
//------------------------

//Biblioteca que permite a entrada e sa�da de dados
#include <stdio.h>
//Biblioteca para permitir o uso de acentua��o
#include <locale.h>
//Biblioteca que cont�m as fun��es de aloca��o din�mica
#include <stdlib.h>
//Bibioteca que cont�m fun��es de caracter
#include <conio.h>

//Fun��o que imprime os valores de um vetor qualquer de inteiros
void Imprimir (int *vetor, int tamVetor)
{
	int i;
	//exibe a quantidade de posi��es do vetor passado.
	printf("O vetor tem %i posi��es.\n", tamVetor);
	
	//percorre o vetor e faz a impress�o de seus valores
	for (i=0;i<tamVetor;i++)
	{
		printf("O valor contido na posi��o %i � %i.\n",i,vetor[i]);
	}
}

//Fun��o que ordena o vetor
//O vetor ser� ordenado de forma crescente, jogando os maiores valores para a �ltima posi��o poss�vel sempre e os menores
//para o in�cio
//O algoritmo verifica cada posi��o do vetor com todas as demais.
void Ordenar (int *vetor, int tamVetor)
{
	//Declara��o das vari�veis de controle e da auxiliar
	int i,j, aux;
	
	//Esta estrutura de repetic�o percorrer� cada elemento do vetor
	//Como o vetor inicia na posi��o 0, i inicia na posi��o 0 e vai at� o tamanho do vetor
	for (i=0;i<tamVetor;i++)
	{
		//Esta outra estrutura de repeti��o ser� para comparar cada posi��o que est� sendo percorrida
		//do vetor com a pr�xima
		for (j=i+1;j<tamVetor;j++)
		{
			//Se a posi��o que estou verificando for maior do que alguma outra do vetor
			//passe esse valor para esta posi��o
			if (vetor[i]>vetor[j])
			{
				//Aqui a troca � feita
				aux=vetor[i];
				vetor[i]=vetor[j];
				vetor[j]=aux;
			}
		}
	}
}

int main ()
{
	setlocale(LC_ALL, "Portuguese");//habilita a acentua��o para o portugu�s
	
	//Declara��o de vari�veis
	int i,j; //Controladores
	int aux; //vari�vel auxiliar
	int *valores = 0;//ponteiro do vetor de valores recebendo valor zero
	valores  = (int*) malloc( sizeof(int*) * 1 ); //ponteiro alocando 1 espa�o para o vetor de valores
	char x; //vari�vel de escape
	
	i=1; //inicializa��o da vari�vel de controle/�ndice do vetor
	
	//printf("Deseja inserir um novo n�mero no vetor?\n[s para sim e n para n�o]\n");
	//scanf("%c", &x);
	
	do
	{
		//realoca o vetor dinamicamente para a quantidade de posi��es
		//do controlador i
		valores = (int*) realloc(valores, i * sizeof(int*)); 
		printf("\nDigite o n�mero que ser� inserido na posi��o %i do vetor.\n", i-1);
		scanf("%i", &valores[i-1]);
		i++;
		printf("Deseja inserir um novo n�mero no vetor?\n[s para sim e n para n�o]\n");
		x = getche();
		//[LEGADO]scanf("%c", &x);
		//printf("Armazenou %c",x);
	} while (x == 's');
	
	//armazena o tamanho do vetor ap�s a execu��o do la�o
	int tamVetor = i-1;
	
	//teste de tamanho fora da fun��o
	//printf("O vetor criado foi de %i posi��es.\n",i-1);
	
	//Chamada da fun��o para imprimir valores
	printf("--------- Vetor da forma que foi criado -------------------\n");
	Imprimir(valores, tamVetor);
	Ordenar(valores, tamVetor);
	printf("--------- Vetor ordenado -------------------\n");
	Imprimir(valores, tamVetor);
	
	return 0;
}
