#include <stdio.h>
#include <locale.h>
int main(int argc, char const *argv[]) {
setlocale(LC_ALL, "portuguese");
  int fatorial;
long long int aux = 1;
  printf("Digite o número: ");
  scanf("%d", &fatorial);
  while (fatorial > 0){
aux= fatorial * aux;
fatorial = fatorial - 1;
    }
  printf ("%lld", aux);
  system("pause>null");
  return 0;
}
