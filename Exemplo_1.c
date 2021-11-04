#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*  Escreva uma função que receba duas variáveis inteiras e "zere" o valor das variáveis. */

void fun (int *a, int *b){
	
	*a = 0;
	*b = 0;
	
	printf("Dentro da função: %i %i\n\n", *a, *b);
	
	return;
}
int main(){
	
	setlocale(LC_ALL,"");
	
	int n, n1;
	
	printf("Informe 2 números\n");
	scanf("%i%i", &n, &n1);
	
	fun(&n, &n1);
	
	printf("Dentro da função MAIN: %i %i\n\n", n, n1);
	
	system("pause");
	return(0);
}