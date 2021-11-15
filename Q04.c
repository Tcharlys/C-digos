#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* 4. Faça uma função que receba um inteiro N como parâmetro. Calcule e retorne o resultado da seguinte série S:
S=2/4+5/5+10/6...+(n2+1)/(n+3). */

int main(){

    setlocale(LC_ALL,"");

    int n;
    float soma;
    int auxiliar =1;

    while(auxiliar){

        printf("Digite um número qualquer ou 0 para terminar");
        scanf("%d", &auxiliar);
        
        printf("Usuário digitou %d \n",auxiliar);
        
        if (auxiliar){
          printf("Vamos somar até %d \n",auxiliar);
          
          soma=0;
          
          for (n=1;n<=auxiliar;n++){
              soma += (n*n+1.0)/(n +3.0);
          };
            
            printf("O resultado da série é %f \n\n",soma);
        }
        else{
            printf("entrada terminada pelo usuário \n");
        }
    };
system("pause");
return(0);
}