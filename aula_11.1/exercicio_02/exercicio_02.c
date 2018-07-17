#include <stdio.h>
#include <stdlib.h>

struct numeros{
double real, inreal;
};

int main(){
  struct numeros p, s;
  printf ("Informe o numero real da primeira equacao: ");
  scanf("%lf", &p.real);
  printf ("Informe o numero inreal da primeira equacao: ");
  scanf("%lf", &p.inreal);
  printf ("Informe o numero real da segunda equacao: ");
  scanf("%lf", &s.real);
  printf ("Informe o numero inreal da segunda equacao: ");
  scanf("%lf", &s.inreal);
  s.real = p.real + s.real;
  s.inreal = s.inreal + p.inreal;
  printf ("A equação resultante e %.2lf + %.2lfi", s.real, s.inreal);
  return 0;
  }
