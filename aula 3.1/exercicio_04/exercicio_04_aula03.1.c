/*
* CSI030-2018-01 - Programação de Computadores I
* Nome: Renan Saldanha Linhares
* Matricula: 18.1.5908
* Curso: Engenharia de Computação
* Exercico: aula 3.1, exercico 04
*/

/* Bibilotecas*/
#include <stdio.h>
#include <math.h>
#include <locale.h>

/* app para fazer triangulos com 4 medidas*/
int main (){
setlocale(LC_ALL, "portuguese");
int a, b, c, d, p1, p2, p3, p4, aux;
printf("Digite o valores: ");
scanf("%d %d %d %d", &a, &b, &c, &d);
aux = (a + b + c) / 2;
p1 = aux * (aux - a) * (aux - b) * (aux - c);

aux = (a + b + d) / 2;
p2 = aux * (aux - a) * (aux - b) * (aux - d);

aux = (a + c + d) / 2;
p3 = aux * (aux - a) * (aux - c) * (aux - d);

aux = (c + b + d) / 2;
p4 = aux * (aux - c) * (aux - b) * (aux - d);

if ((a < 1) || (a > 100)){
    printf("Seu valor %d está fora do intervalo que vai de 1 a 100", a);
}else if ((b < 1) || (b > 100)){
printf("Seu valor %d está fora do intervalo que vai de 1 a 100", b);
}else if ((c < 1) || (c > 100)){
printf("Seu valor %d está fora do intervalo que vai de 1 a 100", c);
}else if ((d < 1) || (d > 100)){
printf("Seu valor %d está fora do intervalo que vai de 1 a 100", d);
}
else if ((p1 > 0) || (p2 > 0) || (p3 > 0) || (p4 > 0)){
    printf("S");
}
else{
    printf("N");
}

system("pause>>null");
return 0;
}
