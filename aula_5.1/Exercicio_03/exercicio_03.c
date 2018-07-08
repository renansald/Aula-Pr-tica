/*
* CSI030-2018-01 - Programação de Computadores I
* Nome: Renan Saldanha Linhares
* Matricula: 18.1.5908
* Curso: Engenharia de Computação
* Exercico: aula 5.1, exercicio 3
*/

/* Bibilotecas*/
#include <stdio.h>
#include <locale.h>
#include <math.h>

void baskara(float a, float b, float c){
float d;
d = pow(b, 2) - (4 * a * c);
if (d < 0){
   return printf ("Não exite raíz");
}
else if(d == 0){
c = (-b) / (2 * a);
return printf( "x' e x\" equivale a: %f", c);
}
else{
 c = ((- b) + sqrt(d)) / (2 * a);
 d = ((- b) - sqrt(d)) / (2 * a);
  }
  return printf ("%f, %f", c, d);
}



int main(){
float a, b, c;
setlocale(LC_ALL, "portuguese");
printf("Informe o valor de a, b, c");
scanf("%f", &a);
scanf("%f", &b);
scanf("%f", &c);
baskara (a,b,c);
return 0;
}
