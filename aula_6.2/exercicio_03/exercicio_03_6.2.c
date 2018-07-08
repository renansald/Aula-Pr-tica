/*
* CSI030-2018-01 - Programação de Computadores I
* Nome: Renan Saldanha Linhares
* Matricula: 18.1.5908
* Curso: Engenharia de Computação
* Exercico: aula 6.2, exercicio 1
*/

/* Bibilotecas*/
#include <stdio.h>
#include <locale.h>

void sol(char string[101]){
int tam, aux;
tam = 0;
while(string[tam] != '\0'){
    tam++;
}
for (aux = 0; aux < (tam); aux++){
    if (aux == 0){
    printf ("%c ", string[aux]);
}
else {
    printf ("- %c ", string[aux]);
}
}
}

int main (){
setlocale(LC_ALL, "portuguese");
char word[101];
printf ("Please, inside your string: ");
scanf ("%[^\n]s", word);
sol (word);
return 0;
}
