/*
* CSI030-2018-01 - Programação de Computadores I
* Nome: Renan Saldanha Linhares
* Matricula: 18.1.5908
* Curso: Engenharia de Computação
* Exercico: aula 6.0, exercicio 4
*/

#include <stdio.h>
#include <locale.h>

int verifica(int v[], int n, int produto){
int i, aux, x;
for (i = 0; i < n; i++){
 for (aux = (i + 1); aux < n; aux++){
        if ((v[i] * v[aux]) == produto){
        return 1;
        }
    }
}
return 0;
}

int main (){
setlocale (LC_ALL, "portuguese");
int n, i, p;
printf ("Informe a quantidade de números a ser digitada: ");
scanf ("%d", &n);
printf ("Informe o produto: ");
scanf ("%d", &p);
int v[n];
for (i = 0; i < n; i++){
    printf("Digite o %dº número: ", i+1);
    scanf ("%d", &v[i]);
    }
i = verifica(v, n, p);
printf ("%d", i);
return 0;
}
