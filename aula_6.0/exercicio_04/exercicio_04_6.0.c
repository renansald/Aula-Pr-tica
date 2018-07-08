/*
* CSI030-2018-01 - Programação de Computadores I
* Nome: Renan Saldanha Linhares
* Matricula: 18.1.5908
* Curso: Engenharia de Computação
* Exercico: aula 6.0, exercicio 4
*/

#include <stdio.h>
#include <locale.h>

int palindrome(int v[], int n){
int i, aux, x;
x = 1;
for (i = 0; i < n; i++){
    if ((v[i] == v[n-x])){
        aux = 1;
    }
    else{
        aux = 0;
    }
x = x + 1;
}
return aux;
}


int main (){
setlocale (LC_ALL, "portuguese");
int n, i, r;
printf ("Informe a quantidade de números a ser digitada: ");
scanf ("%d", &n);
int v[n];
for (i = 0; i < n; i++){
    printf("Digite o %dº número: ", i+1);
    scanf ("%d", &v[i]);
    }
r = palindrome(v, n);
printf ("%d", r);
return 0;
}

