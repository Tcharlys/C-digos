#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* 5. Faça uma função que calcule e retorne o número neperiano e = 2.71828183, usando a aproximação da série a
seguir:
A função deve ter como parâmetro o número de termos que serão somados, N. Note que quanto maior esse
número, mais próxima do valor e estará a resposta. */

double fatorial(int num){
    int i;
    double fact = 1.0;

    for (i = num; i > 1; i--)
        fact = fact * i;

    return fact;
}

int main (){

    setlocale(LC_ALL,"");

    int n, i;
    double e = 0.0;

    printf("Digite o número de termos a serem calculados: \n");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
        e = e + 1.0/fatorial(i);

    printf("\n\nNúmero neperiano: %.15f", e);

    system("pause");
    return (0);
}