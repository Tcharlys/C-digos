#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Elabore uma função que receba três notas de um aluno como parâmetro e uma letra.
Se a letra for ‘A’, a função deve calcular a média aritmética das notas do aluno; se a letra for ‘P’, deverá calcular a média ponderada, com pesos 5, 3 e 2.
Retorne a média calculada para o programa principal. */

float media(float n1, float n2, float n3, char op){
    if (op == 'A') {
		return (n1 + n2 + n3) / 3;
    } else if (op == 'P') {
        return (n1*5 + n2*3 + n3*2) / 10;
    }
}

int main(){
	
	setlocale(LC_ALL,"");
	
    float nota1, nota2, nota3, calculo;
    char opcao;

    printf("Digite a opção [A ou P]: \n A) Média Aritmética\n P) Média Ponderada\n");
    scanf("%c", &opcao);
    printf("Digite as notas: \n");
    scanf("%f %f %f", &nota1, &nota2, &nota3);

    calculo = media(nota1, nota2, nota3, opcao);

    printf("Media= %f", calculo);

    return (0);
}