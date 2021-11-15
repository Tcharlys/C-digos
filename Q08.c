#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAMANHO_TEXTO 4
#define QTD_LETRAS 26

/* 8. O código de César é uma das técnicas de criptografia mais simples e conhecidas. É um tipo de substituição no
qual cada letra do texto é substituída por outra, que se apresenta n posições após ela no alfabeto. Por exemplo, com
uma troca de três posições, a letra A seria substituída por D, B se tornaria E e assim por diante. Implemente uma
função que faça uso desse código de César para três posições para isso utilize o código ASCII. Entre com uma
string e imprima a string codificada. Exemplo:
String: a ligeira raposa marrom saltou sobre o cachorro cansado
Nova string: d oljhlud udsrvd pduurp vdowrx vreuh r fdfkruur fdqvdgr */

int main(){

    int i=0;
    char Texto[TAMANHO_TEXTO];

    for (i=0; i<TAMANHO_TEXTO; i++){
        scanf("%c", &Texto[i]);
    }

    for (i=0; i<TAMANHO_TEXTO; i++){
        Texto[i] = 'A' + (Texto[i] - 'A' + 3) % QTD_LETRAS;
    }

    for (i=0; i<TAMANHO_TEXTO; i++){
        printf("%c", Texto[i]);
    }

    system("pause");
    return (0);
}