#include <stdio.h>

int main (){
int a, *b = NULL;
double c, *d = NULL;
printf ("Insira um valor inteiro: ");
scanf ("%d", &a);
printf ("Insira um valor decimal: ");
scanf ("%lf", &c);
b = &a;
d = &c;
a = 3 * (*b);
c = 3 * (*d);
printf ("o inteiro = %d\nO float = %lf", *b, *d);
return 0;
}
