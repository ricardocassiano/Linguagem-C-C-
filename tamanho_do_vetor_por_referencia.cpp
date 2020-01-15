//Algoritmo para saber o tamanho de um vetor que foi passado como refer�ncia para a fun��o
//------------------------

//Biblioteca que permite a entrada e sa�da de dados
#include <stdio.h>
//Biblioteca para permitir o uso de acentua��o
#include <locale.h>

//Fun��o que retorna o tamanho do vetor
int vec_len(int *vec)
{
	printf("Tamanho em bytes do vetor dentro da fun�ao: %i\n",sizeof(vec));
	printf("Ponteiro do vetor: %i", vec);
    /*int c = -1;
    while(*(vec++))
        c++;
    return c;*/
    int tamVetor = sizeof(vec) / sizeof(int);
    return tamVetor;
}

int main ()
{
	setlocale(LC_ALL, "Portuguese");//habilita a acentua��o para o portugu�s
	
	int vetorExemplo[] = {0,2,3,2,2,7,8,8};
	int tam1=sizeof(vetorExemplo)/sizeof(int);//Deu certo
	//Esquema: sempre descubra o tamanho antes de passar o vetor por refer�ncia
	// e crie uma fun��o que receba o tamanho do vetor
	//Fica dif�cil descobrir o tamanho de um vetor por refer�ncia, porque a fun��o
	//sempre recebe somente o endere�o da primeira posi��o do vetor, independente do seu tamanho,
	//ela n�o recebe o tamanho total do vetor.
	//Isso s� � poss�vel descobrir do lado de fora da fun��o
	printf("Tamanho em bytes do vetor antes de ser passado para a fun�ao: %i\n",sizeof(vetorExemplo));
	//int tamVetor = vec_len(vetorExemplo);
	
	printf("O vetor possui %i posi��es.\n", tam1);
	
	
	return 0;
}
