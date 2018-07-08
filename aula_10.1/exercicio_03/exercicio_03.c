#include <stdio.h>
#include <stdlib.h>

void swap2x(int* a, int* b){
int aux;
aux = (*a) * 2;
*a = 2 * (*b);
*b = aux;
}

int main (){
int a, b;
a = 3;
b =4;
swap2x(&a, &b);
printf ("a = %d\nb = %d", a, b);
return 0;
}
