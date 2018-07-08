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

int main (){
setlocale(LC_ALL, "english");
int numb, aux, tam;
char word[100];
numb = tam = 0;
printf ("Please, inside your word: ");
scanf ("%[^\n]s", word);
while (word[tam] != '\0'){
    tam++;
}
for (aux = 0; aux < tam; aux++){
    if ((word[aux] == 'a') || (word[aux] == 'e') || (word[aux] == 'i') || (word[aux] == '0') || (word[aux] == 'u')){
        numb = numb + 1;
    }
}
printf ("Your string %s has %d vowel(s)", word, numb);
return 0;
}
