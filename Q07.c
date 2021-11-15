#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <locale.h>

/* 7. Escreva uma função que receba uma string e retorne se ela é um palíndromo (1) ou não (0). Um palíndromo é
uma palavra que tem a propriedade de poder ser lida tanto da direita para a esquerda como da esquerda para a
direita. Exemplos: ovo, arara, rever, asa, osso etc */

int main(){
    
    setlocale(LC_ALL,"");

    char Entrada[100];
    char Entrada_Espelhada[100];
    char metade1[50];
    char metade2[50];
    int tam=0;
    int tamcalc=0;
    int metade=0;

    printf("Digite uma frase ou palavra para saber se ela é um palíndromo:\n");
    scanf("%99[^\n]", Entrada);

    for(tam=0; Entrada[tam]!='\0'; tam++);
    tamcalc=tam; 
    metade=tam/2;

    for(int x=0; x<tam; x++){
        tamcalc--;
        Entrada_Espelhada[x]= Entrada[tamcalc];
    }
    Entrada_Espelhada[tam]='\0';

    for(int x=0; x<metade; x++){
        metade1[x]= Entrada[x];
    }
    metade1[metade]='\0';

    for(int x=0; x<metade; x++){
        metade2[x]=Entrada_Espelhada[x];
    }
    metade2[metade]='\0';

    if(strcmp(metade1,metade2)==0){
        printf("É palíndromo");
    }
    else
        printf("Não é palíndromo");

    printf("\nEntrada:%s \nEntrada Espelhada:%s  \nPrimeira Metade:%s \nSegunda Metade:%s \nTamanho da String:%i \nMetade da String:%i",Entrada, Entrada_Espelhada, metade1, metade2, tam, metade);

system("pause");
return(0);
}