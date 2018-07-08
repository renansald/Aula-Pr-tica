/*
* CSI030-2018-01 - Programação de Computadores I
* Nome: Renan Saldanha Linhares
* Matricula: 18.1.5908
* Curso: Engenharia de Computação
* Exercico: aula 6.0, exercicio 1
*/

/* Bibilotecas*/
#include <stdio.h>
#include <locale.h>


int maiorvalor(int v[], int n){
int i, maior;
maior = v[0];
for (i = 1; i < n; i++){
    if(v[i] > maior){
        maior = v[i];
    }
}
return maior;
}

int main (){
setlocale (LC_ALL, "portuguese");
int n, i;
printf ("Informe a quantidade de números a ser digitada: ");
scanf ("%d", &n);
int v[n];
for (i = 0; i < n; i++){
    printf("Digite o %dº número: ", i+1);
    scanf ("%d", &v[i]);
    }
i = maiorvalor(v, n);
printf ("O maior número digitdo é: %d", i);
return 0;
}
