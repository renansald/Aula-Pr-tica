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
int vogal (char texto[]){
int aux, v = 0;
for (aux = 0; texto[aux] != '\0'; aux++){
    if (texto[aux] == 'a' || texto [aux] == 'A'){
        v++;
        texto[aux] = 'b';}}
return v;}



int main() {
setlocale(LC_ALL, "portuguese");
int a;
char word[100];
printf("Informe a palavra: ");
scanf ("%[^\n]s", word);
a = vogal(word);
printf ("a sua frase tinha %d a´s e sua frase agora é %s", a, word);
return 0;
}
