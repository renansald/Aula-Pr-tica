/*
* CSI030-2018-01 - Programação de Computadores I
* Nome: Renan Saldanha Linhares
* Matricula: 18.1.5908
* Curso: Engenharia de Computação
* Exercico: aula 4.1, exercico 2
*/

/* Bibilotecas*/
#include <stdio.h>
#include <locale.h>

int main(){
setlocale (LC_ALL, "portuguese");
int n, aux, a, b, c;
a = 1;
b = c = 0;
printf ("Insira a quntidade de termos da sequência que você deseja: ");
scanf ("%d", &n);
for (aux = 0; aux < n; aux++){
if (aux == 0){
    printf ("%d", a);
}
else if (b < a){
    b = a + 3;
    printf (", %d", b);
}
else if (c < a){
c = a + 3;
printf (", %d",c);
}
else if ((b > a) && (c > a)){
a = b - 2;
b = 0;
c = 0;
printf (", %d", a);
}
}
return 0;
}
