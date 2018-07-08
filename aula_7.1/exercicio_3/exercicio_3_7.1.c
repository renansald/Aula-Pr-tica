/*
* CSI030-2018-01 - Programação de Computadores I
* Nome: Renan Saldanha Linhares
* Matricula: 18.1.5908
* Curso: Engenharia de Computação
* Exercico: aula 7.1, exercicio 3
*/

/* Bibilotecas*/
#include <stdio.h>
#include <locale.h>

void tabuada(int n){
int aux, aux1;
for (aux = 1; aux <= n; aux ++){
    for (aux1 = 1; aux1 <= n; aux1++){
        printf ("%d * %d = %d\n", aux, aux1, aux*aux1);
    }
}
}

int main (){
int n = 10;
    tabuada(n);
return 0;
}
