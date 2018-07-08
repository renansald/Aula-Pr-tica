/*
* CSI030-2018-01 - Programação de Computadores I
* Nome: Renan Saldanha Linhares
* Matricula: 18.1.5908
* Curso: Engenharia de Computação
* Exercico: aula 5.2, exercicio 1
*/

/* Bibilotecas*/
#include <stdio.h>
#include <locale.h>
#include <conio.h>
#include <limits.h>
int fatorial(int x);

int main(){
setlocale(LC_ALL, "portuguese");
int f;
printf("Informe o número: ");
scanf("%d", &f);
f = fatorial(f);
if(f < 0){
    printf ("Valor muito alto");
}
else {
    printf("O resultado é: %d", f);
}
getch();
return 0;
}

int fatorial (int x){
int aux, resultado, contr;
contr = INT_MAX;
resultado = x;
if( x == 0){
    return 1;
}
else {
    for (aux = 1; aux < x; aux++){
    resultado = resultado * aux;
if (resultado > contr){
    return -1;
    break;
}
}
return resultado;
}
}
