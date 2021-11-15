#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL,"");

    int i;
    float Soma;
    int aux=1 ;
    Soma=0;
            
        while(aux){
            printf("Digite um número qualquer ou 0 para terminar");
            scanf("%d", &aux);
            printf("Usuário digitou %d \n",aux);
                Soma=0;

                    if (aux){
                       for (i=1; i<=aux; i++){
                           Soma += (1.0/i);
                        };

                       printf("O resultado da série é %f \n\n",Soma);
                    }
                 else{
                      printf("entrada terminada pelo usuário \n");
                  }
    };

system("pause");
return(0);
}