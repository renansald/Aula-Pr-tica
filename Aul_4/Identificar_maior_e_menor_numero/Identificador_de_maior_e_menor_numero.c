#include <stdio.h>
#include <locale.h>
int main (){
  setlocale(LC_ALL, "portuguese");
float x, y, z;
printf("Digite o valor do primeiro numero: ");
scanf("%f", &x);
printf("Digite o valor do segundo numero: ");
scanf("%f", &y);
printf("Digite o valor do terceiro numero: ");
scanf("%f", &z);
if((x > y) && (y > z)){
  printf ("Seu maior número é %.2f e seu menor número é %.2f", x, z);
}
else if ((z > y) && (y > x)){
  printf("Seu maior número é %.2f e seu menor número é %.2f", z, x);
}
else if ((y > x) && (x > z)){
  printf("Seu maior número é %.2f e seu menor número é %.2f", y, z);
}
else if ((z > x) && (x > y)){
  printf("Seu maior número é %.2f e seu menor número é %.2f", z, y);
}
else if ((x > z) && (z > y)){
  printf("Seu maior número é %.2f e seu menor número é %.2f", x, y);
}
else{
  printf("Seu maior número é %.2f e seu menor número é %.2f", y, x);
}
system("pause>null");
return 0;
}
