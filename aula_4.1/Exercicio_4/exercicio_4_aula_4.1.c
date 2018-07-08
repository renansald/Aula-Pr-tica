/*
* CSI030-2018-01 - Programação de Computadores I
* Nome: Renan Saldanha Linhares
* Matricula: 18.1.5908
* Curso: Engenharia de Computação
* Exercico: aula 4.1, exercico 3
*/

/* Bibilotecas*/
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
setlocale (LC_ALL, "portuguese");
float s, b;
int aux, a, c;
aux = a = b = 0;
c = 2;
s =1;
do {
    if (aux == 1){
        a = 33;
        b = 1.0/a;
        s = s - b;
    }
    else if (((aux%2) == 0) && (aux > 0)){
        a = a + (c * 10);
        b = 1.0/a;
        s = s + b;
        c = c + 2;
    }
    else if ((aux%2) != 0){
        a = a + (c * 10);
        b = 1.0/a;
        s = s - b;
        c = c + 2;
    }
    aux++;
}while(aux < 51);
s = s * 32;
b = 1.0/3;
b = pow(s,b);
printf("média é %f", b);
return 0;
}
