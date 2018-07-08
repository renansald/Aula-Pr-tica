#include <stdio.h>
#include <stdlib.h>

void swap(int* a, int* b){
int aux;
aux = *a;
*a = *b;
*b = aux;
}

int main (){
int a, b;
a = 3;
b =4;
swap(&a, &b);
printf ("a = %d\nb = %d", a, b);
return 0;
}
