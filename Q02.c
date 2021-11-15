#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define LEN 5

/* 2. Faça um programa que leia uma matriz de tamanho 5 × 5. Calcule a soma dos elementos dessa matriz que
pertencem à diagonal principal ou secundária. Calcule também a soma dos elementos que não pertencem a
nenhuma das duas diagonais. Imprima na tela a diferença entre os dois valores. */

int main() {

    setlocale(LC_ALL,"");

	int matriz[LEN][LEN];
	int i, j, somaDiagonais = 0, somaResto = 0;
	
	printf('\n');

	for (i=0; i<LEN; i++) {
		for (j=0; j<LEN; j++) {
			printf("Valor [linha %d][coluna %d]: ", (i+1), (j+1));
			scanf("%d", &matriz[i][j]);
			
			if ((i==j) || (i+j == LEN-1)) somaDiagonais += matriz[i][j];
			else somaResto += matriz[i][j];
		}
		printf('\n');
	}
	
	printf("Soma das diagonais: %d.\n", somaDiagonais);	
	printf("Soma do resto: %d.\n\n", somaResto);	
	printf("Diferença: %d.\n\n", (somaDiagonais-somaResto));
	
system("pause");
return (0);
}