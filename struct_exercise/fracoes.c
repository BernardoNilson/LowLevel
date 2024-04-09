#include <stdio.h>

typedef struct {
  int numerador;
  int denominador;
} Fracao;

Fracao mult (Fracao* a, Fracao* b);
Fracao soma (Fracao*a, Fracao* b);
void simplifica (Fracao*a);

void exibeFracao(Fracao* fra, int num)
{
    printf("Fração %d: num: %d, den: %d\n", num, fra->numerador, fra->denominador);
}

int main() {
    Fracao fra1, fra2;
    fra1.numerador = 2;
    fra1.denominador = 4;

    fra2.numerador = 4;
    fra2.denominador = 5;

    exibeFracao(&fra1, 1);
    exibeFracao(&fra2, 2);

    Fracao fraMult = mult(&fra1, &fra2);
    Fracao fraSoma = soma(&fra1, &fra2);

    exibeFracao(&fraMult, 0);
    exibeFracao(&fraSoma, 0);

    simplifica(&fraMult);
    exibeFracao(&fraMult, 0);

    return 1;
}

Fracao mult (Fracao* a, Fracao* b)
{
    Fracao resultado;
    resultado.numerador = a->numerador * b->numerador;
    resultado.denominador = a->denominador * b->denominador;
    return resultado;
}

Fracao soma (Fracao*a, Fracao* b)
{
    Fracao resultado;
    resultado.numerador = (a->numerador * b->denominador) + (a->denominador * b->numerador);
    resultado.denominador = a->denominador * b->denominador;
    return resultado;
}

void simplifica (Fracao* a)
{
    int maior = a->numerador;

    if (maior < a->denominador) 
    {
        maior = a->denominador;
    }

    // PODE SER MAIS EFICIENTE SE FIZERMOS COM UM ALGORITMO DE MDC
    for (maior; maior > 0 ; maior--)
    {
        if ((a->numerador % maior == 0) && (a->denominador % maior == 0))
        {
            a->numerador /= maior;
            a->denominador /= maior;
        }
    }
}