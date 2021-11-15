#include <stdio.h>
#include <stdlib.h>
#include<locale.h>

/* 3. Implemente uma função para ler uma matriz de tamanho 10 × 3 com as notas de 10 alunos em três provas. Em
seguida, implemente outra função que escreva na tela o número de alunos cuja pior nota foi na prova 1, o número
de alunos cuja pior nota foi na prova 2 e o número de alunos cuja pior nota foi na prova 3. */

int main(){

setlocale(LC_ALL,"");

float a[10][3], maior[3];
    int i, j;

for (i=0; i<10; i++){
        
    printf ("Diga as 3 notas do %dº catarrento\n ", i+1);
        
    for (j=0; j<3; j++){
        
        scanf ("%f", &a[i][j]);
        
        }
    }

for (i=0; i<10; i++){

    printf ("Notas do %dº Aluno:   \n ", i+1);

    for (j=0; j<3; j++){

        printf ("%.2f  ", a[i][j]);
                maior[i] = a[i][j]; 
            }
            putchar ('\n');
        }

for (i=0; i<10; i++){

    for (j=0; j<3; j++){

        if ((j==0) && (maior[j] < a[i][j]))
            maior[j] = a[i][j];

        if ((j==1) && (maior[j]<a[i][j]))
            maior[j] = a[i][j];

        if ((j==2) && (maior[j]<a[i][j]))
            maior[j] = a[i][j];
    }
}

for (i=0; i<3; i++){

    printf ("A Maior nota da Unidade %d foi %.2f \n", i+1, maior[i]);
    }

system("pause");
return(0);
}