/*
* CSI030-2018-01 - Programa��o de Computadores I
* Nome: Renan Saldanha Linhares
* Matricula: 18.1.5908
* Curso: Engenharia de Computa��o
* Exercico: aula 6.0, exercicio 3
*/

#include <stdio.h>
#include <locale.h>

double media (int v[], int n){
int aux, i;
double r;
aux = 0;
for(i = 0; i < n; i++){
    aux = aux + v[i];
}
r = (aux * 1.0 / n);
return r;
}

int main (){
setlocale (LC_ALL, "portuguese");
int n, i;
double r;
printf ("Informe a quantidade de n�meros a ser digitada: ");
scanf ("%d", &n);
int v[n];
for (i = 0; i < n; i++){
    printf("Digite o %d� n�mero: ", i+1);
    scanf ("%d", &v[i]);
    }
r = media(v, n);
printf ("A m�dia �: %lf", r);
return 0;
}

