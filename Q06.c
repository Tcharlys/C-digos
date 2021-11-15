#include <stdio.h>
#include<stdlib.h>
#include <math.h>
#include <locale.h>
#define MAXSIZE 10

/* 6. Escreva uma função que calcule o desvio-padrão d de um vetor V contendo n números em que m é a média
desse vetor */

double Media(double s[], int n){
    
    double sum = 0.0;
    int i = 0;

    for( i = 0; i < n; i++ )
        sum += s[i];

    return sum / n;
}

double Variancia(double s[], int n){
    
    double sum = 0.0;
    double dev = 0.0;
    double med = Media(s, n);
    int i = 0;

    for( i = 0; i < n; i++ ){
        dev = s[i] - med;
        sum += (dev * dev);
    }

    return sum / n;
}

double Desvio_Padrao(double s[], int n){
    
    double v = Variancia( s, n );
    
    return sqrt(v);
}

int main(){
    
    setlocale(LC_ALL,"");

    double vetor[ MAXSIZE ];
    int  i;

    for(i = 0; i < MAXSIZE; i++){
        
        printf("Digite um numero:\n");
        scanf( "%lf", &vetor[i] );
    }

    printf("Media = %g\n", Media(vetor, MAXSIZE ));
    printf("Variancia = %g\n", Variancia(vetor, MAXSIZE ));
    printf("Desvio Padrao = %g\n", Desvio_Padrao(vetor, MAXSIZE ));

    system("pause");
    return (0);
}