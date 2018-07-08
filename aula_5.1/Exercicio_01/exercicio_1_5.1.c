/*
* CSI030-2018-01 - Programação de Computadores I
* Nome: Renan Saldanha Linhares
* Matricula: 18.1.5908
* Curso: Engenharia de Computação
* Exercico: aula 5.1, exercicio 1
*/

/* Bibilotecas*/
#include <stdio.h>
#include <locale.h>


double pot(double x, int y){
int aux;
double resultado;
resultado = x;
for (aux = 1; aux < y; aux++){
    resultado = resultado * x;
}
return resultado;
}


int main(){
setlocale (LC_ALL, "portuguese");
double b;
int e;
printf ("Digite a base: ");
scanf ("%lf", &b);
printf ("Digite o expoente: ");
scanf ("%d", &e);
b = pot(b,e);
printf("%lf", b);

return 0;
}
