//Algoritmo para saber o tamanho de um vetor que foi passado como referência para a função
//------------------------

//Biblioteca que permite a entrada e saída de dados
#include <stdio.h>
//Biblioteca para permitir o uso de acentuação
#include <locale.h>

//Função que retorna o tamanho do vetor
int vec_len(int *vec)
{
	printf("Tamanho em bytes do vetor dentro da funçao: %i\n",sizeof(vec));
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
	setlocale(LC_ALL, "Portuguese");//habilita a acentuação para o português
	
	int vetorExemplo[] = {0,2,3,2,2,7,8,8};
	int tam1=sizeof(vetorExemplo)/sizeof(int);//Deu certo
	//Esquema: sempre descubra o tamanho antes de passar o vetor por referência
	// e crie uma função que receba o tamanho do vetor
	//Fica difícil descobrir o tamanho de um vetor por referência, porque a função
	//sempre recebe somente o endereço da primeira posição do vetor, independente do seu tamanho,
	//ela não recebe o tamanho total do vetor.
	//Isso só é possível descobrir do lado de fora da função
	printf("Tamanho em bytes do vetor antes de ser passado para a funçao: %i\n",sizeof(vetorExemplo));
	//int tamVetor = vec_len(vetorExemplo);
	
	printf("O vetor possui %i posições.\n", tam1);
	
	
	return 0;
}
