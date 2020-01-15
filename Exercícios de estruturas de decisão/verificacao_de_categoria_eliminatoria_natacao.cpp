/*Algoritmo 06_02
OBJETIVO: Um clube de uma cidade do interior resolveu promover eliminat�rioas para o mundial de nata��o. Para isso,
� necess�rio que o nadador informe sua idade e o sistema informe a categoria a que ele pertence, de acordo com a
seguinte tabela:
Infantil 1 - de 5 a 7 anos
Infantil 2 - de 8 a 10 anos
Juvenil - de 11 a 17 anos
Adulto - maiores de 18 anos
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
	char categorias [4][11]={"Infantil 1", "Infantil 2", "Juvenil", "Adulto"};
	int idade;
	
	//Entrada dos dados
	printf("Digite sua idade: \n");
	scanf("%i", &idade);
	
	//Processamento + Impress�o dos dados
	if (idade<5)
		printf("Voc� � muito novo para participar da competi��o.\n");
	else if (idade>=5 and idade<=7)
		printf("Sua categoria na competi��o � %s\n", categorias[0]);
	else if (idade<=10)
		printf("Sua categoria na competi��o � %s\n", categorias[1]);
	else if (idade<=17)
		printf("Sua categoria na competi��o � %s\n", categorias[2]);
	else
		printf("Sua categoria na competi��o � %s\n", categorias[3]);
	
	return 0;
}
