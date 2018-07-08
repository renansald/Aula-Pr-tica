/*
* CSI030-2018-01 - Programação de Computadores I
* Nome: Renan Saldanha Linhares
* Matricula: 18.1.5908
* Curso: Engenharia de Computação
* Exercico: aula 6.1, exercicio 1 2
*/

/* Bibilotecas*/
#include <stdio.h>
#include <locale.h>
#include <conio.h>

int main (int argc, char*argv[]){
setlocale(LC_ALL, "portuguese");
int v[10], aux;
float n;
n = 0;
for(aux = 0; aux < 10; aux++){
    printf("Informe o valor do vetor na posição [%d]: ", aux);
    scanf ("%d", &v[aux]);
    n = n + v[aux];
}
n = n / 10.0;
printf ("A média é %f", n);
getch();
return 0;
}
