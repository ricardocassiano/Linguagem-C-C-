/*Algoritmo 06_02
OBJETIVO: Um clube de uma cidade do interior resolveu promover eliminatórioas para o mundial de natação. Para isso,
é necessário que o nadador informe sua idade e o sistema informe a categoria a que ele pertence, de acordo com a
seguinte tabela:
Infantil 1 - de 5 a 7 anos
Infantil 2 - de 8 a 10 anos
Juvenil - de 11 a 17 anos
Adulto - maiores de 18 anos
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
	char categorias [4][11]={"Infantil 1", "Infantil 2", "Juvenil", "Adulto"};
	int idade;
	
	//Entrada dos dados
	printf("Digite sua idade: \n");
	scanf("%i", &idade);
	
	//Processamento + Impressão dos dados
	if (idade<5)
		printf("Você é muito novo para participar da competição.\n");
	else if (idade>=5 and idade<=7)
		printf("Sua categoria na competição é %s\n", categorias[0]);
	else if (idade<=10)
		printf("Sua categoria na competição é %s\n", categorias[1]);
	else if (idade<=17)
		printf("Sua categoria na competição é %s\n", categorias[2]);
	else
		printf("Sua categoria na competição é %s\n", categorias[3]);
	
	return 0;
}
