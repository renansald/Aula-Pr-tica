#include <stdio.h>
#include <stdlib.h>

void procMinMax (int nums[10], int *min, int *max, int *soma, int *media){
*min = *max = *soma = nums[0];
for (int a = 1; a < 10; a++){
    *soma = *soma + nums[a];
    if (nums[a] < *min){
        *min = nums[a];
    }
    else if (nums[a] > *max){
        *max = nums[a];
    }
}
*media = (*soma / 10);
}

void lerVetor (int v[10]){
for(int a = 0; a < 10; a++){
    scanf ("%d", &v[a]);
}
}

int main (){
int maximo, minimo, v[10], soma, media;
printf ("Informe o vetor: ");
lerVetor (v);
procMinMax(v, &minimo, &maximo, &soma, &media);
printf ("minimo = %d\nmaximo = %d\nmedia = %d\nsoma = %d", minimo, maximo, media, soma);
return 0;
}
