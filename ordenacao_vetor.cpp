/*ALGORITMO: ORDENAÇÃO DE VETOR
OBJETIVO: Alocar um vetor de inteiros dinamicamente, recebendo os dados do vetor pelo usuário.
Ao final da leitura, ordenar o vetor.
Utilizar as estruturas de repetição
*/
//------------------------

//Biblioteca que permite a entrada e saída de dados
#include <stdio.h>
//Biblioteca para permitir o uso de acentuação
#include <locale.h>
//Biblioteca que contém as funções de alocação dinâmica
#include <stdlib.h>
//Bibioteca que contém funções de caracter
#include <conio.h>

//Função que imprime os valores de um vetor qualquer de inteiros
void Imprimir (int *vetor, int tamVetor)
{
	int i;
	//exibe a quantidade de posições do vetor passado.
	printf("O vetor tem %i posições.\n", tamVetor);
	
	//percorre o vetor e faz a impressão de seus valores
	for (i=0;i<tamVetor;i++)
	{
		printf("O valor contido na posição %i é %i.\n",i,vetor[i]);
	}
}

//Função que ordena o vetor
//O vetor será ordenado de forma crescente, jogando os maiores valores para a última posição possível sempre e os menores
//para o início
//O algoritmo verifica cada posição do vetor com todas as demais.
void Ordenar (int *vetor, int tamVetor)
{
	//Declaração das variáveis de controle e da auxiliar
	int i,j, aux;
	
	//Esta estrutura de repeticão percorrerá cada elemento do vetor
	//Como o vetor inicia na posição 0, i inicia na posição 0 e vai até o tamanho do vetor
	for (i=0;i<tamVetor;i++)
	{
		//Esta outra estrutura de repetição será para comparar cada posição que está sendo percorrida
		//do vetor com a próxima
		for (j=i+1;j<tamVetor;j++)
		{
			//Se a posição que estou verificando for maior do que alguma outra do vetor
			//passe esse valor para esta posição
			if (vetor[i]>vetor[j])
			{
				//Aqui a troca é feita
				aux=vetor[i];
				vetor[i]=vetor[j];
				vetor[j]=aux;
			}
		}
	}
}

int main ()
{
	setlocale(LC_ALL, "Portuguese");//habilita a acentuação para o português
	
	//Declaração de variáveis
	int i,j; //Controladores
	int aux; //variável auxiliar
	int *valores = 0;//ponteiro do vetor de valores recebendo valor zero
	valores  = (int*) malloc( sizeof(int*) * 1 ); //ponteiro alocando 1 espaço para o vetor de valores
	char x; //variável de escape
	
	i=1; //inicialização da variável de controle/índice do vetor
	
	//printf("Deseja inserir um novo número no vetor?\n[s para sim e n para não]\n");
	//scanf("%c", &x);
	
	do
	{
		//realoca o vetor dinamicamente para a quantidade de posições
		//do controlador i
		valores = (int*) realloc(valores, i * sizeof(int*)); 
		printf("\nDigite o número que será inserido na posição %i do vetor.\n", i-1);
		scanf("%i", &valores[i-1]);
		i++;
		printf("Deseja inserir um novo número no vetor?\n[s para sim e n para não]\n");
		x = getche();
		//[LEGADO]scanf("%c", &x);
		//printf("Armazenou %c",x);
	} while (x == 's');
	
	//armazena o tamanho do vetor após a execução do laço
	int tamVetor = i-1;
	
	//teste de tamanho fora da função
	//printf("O vetor criado foi de %i posições.\n",i-1);
	
	//Chamada da função para imprimir valores
	printf("--------- Vetor da forma que foi criado -------------------\n");
	Imprimir(valores, tamVetor);
	Ordenar(valores, tamVetor);
	printf("--------- Vetor ordenado -------------------\n");
	Imprimir(valores, tamVetor);
	
	return 0;
}
