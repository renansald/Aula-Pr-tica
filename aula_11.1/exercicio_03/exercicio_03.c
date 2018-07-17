#include <stdio.h>
#include <stdlib.h>

struct Alunos{
char nome[51];
double notas[3];
};

void preenche(struct Alunos *p, int n){
for(int a = 0; a < n; a++){
    printf ("Informe o nome do %d aluno: ", a+1);
    scanf (" %[^\n]s", &aluno[a].nome);
    for (int b = 0; b < 3; b++){
        printf ("Informe a nota %d do %d aluno: ", b+1, a+1);
        scanf ("%d", &aluno[a].notas[b]);
    }
}
}


void imprime(struct Alunos *p, int n){
double soma = 0.0;
for(int a = 0; a < n; a++){

    for (int b = 0; b < 3; b++){
        soma = soma + aluno[a].notas[b];
    }
if (soma >= 6){
    printf ("\nO aluno %s foi aprovado", aluno[a].nome);
}
else{
    printf ("\nO aluno %s foi reprovado", aluno[a].nome);
}
soma = 0.0;
}
}


int main (){
int n;
struct Alunos *p;
printf("Informe o numero de alunos: ");
scanf("%d", &n);
p =(int*) malloc (n*(sizeof(int)));
preenche (p, n);
imprime(p, n);
return 0;
}
