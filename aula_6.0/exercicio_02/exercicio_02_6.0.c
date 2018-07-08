/*
* CSI030-2018-01 - Programação de Computadores I
* Nome: Renan Saldanha Linhares
* Matricula: 18.1.5908
* Curso: Engenharia de Computação
* Exercico: aula 6.0, exercicio 2
*/

/* Bibilotecas*/
#include <stdio.h>
#include <locale.h>

int ordenado(int v[], int n){
int i, aux, r;
for (i = 0; i < n; i++){
    for (aux = i + 1; aux < n; aux ++){
        if (i == 0){
        if (v[i] > v[aux]){
            r = 1;
        }
        else if (v[i] < v[aux]){
            r = -1;
        }
        else{
            r = 0;
        }
        }
        else{
         if ((v[i] > v[aux]) && (r == 1)){
            r = 1;
        }
        else if ((v[i] < v[aux]) && ( r == -1)){
            r = -1;
        }
        else{
            r = 0;
        }
        }
    }
}
return r;
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
i = ordenado(v, n);
printf ("%d", i);
return 0;
}
