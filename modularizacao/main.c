#include <stdio.h>
#include "bibfunc.h"

int main()
{
    int v;
    printf("Digite um valor: ");
    scanf("%d", &v);
    printf("Fatorial: %f\n", fatorial(v));
    printf("Somatório: %f\n", somatorio(v));
}