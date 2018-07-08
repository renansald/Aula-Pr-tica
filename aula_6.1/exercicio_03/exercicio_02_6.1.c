/*
* CSI030-2018-01 - Programação de Computadores I
* Nome: Renan Saldanha Linhares
* Matricula: 18.1.5908
* Curso: Engenharia de Computação
* Exercico: aula 6.1, exercicio 3
*/

/* Bibilotecas*/
#include <stdio.h>
#include <locale.h>
#include <conio.h>

int main (int argc, char*argv[]){
setlocale(LC_ALL, "portuguese");
int v[10], aux;
for(aux = 0; aux < 10; aux++){
    printf("Informe o valor do vetor na posição [%d]: ", aux);
    scanf ("%d", &v[aux]);
}
for(aux = 0; aux < 10; aux++){
    if (aux%2 == 0){
    printf("%d\n", v[aux]);
}
}
getch();
return 0;
}
