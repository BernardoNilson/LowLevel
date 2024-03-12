#include <stdio.h>

int main()
{
    int valor = 100;
    int cem = 2, cinquenta = 4, dez = 3, cinco = 2, um = 7;
    print("Quantidade de Notas:");


    return 0;
}


// Escreva uma função para um caixa de banco, que recebe um valor inteiro R
// e determina o número de notas de 100, 50, 10, 5 e 1 reais necessário para pagar a quantia R.
// Faça de forma que o número de notas usado seja o menor possível,
// retornando as quantidades de notas por referência.
void calculaTroco (int valor, int *cem, int *cinquenta, int *dez, int *cinco, int *um) {
    *cem = valor / 100;
    valor = valor % 100;

    *cinquenta = valor / 50;
    valor = valor % 50;

    *dez = valor / 10;
    valor = valor % 10;

    *cinco = valor / 5;
    valor = valor % 5;

    *um = valor;
}


// Escreva uma função que receba um tempo em total de segundos desde a meia-noite,
// retornando por referência o tempo em horas, minutos e segundos correspondentes.

// Escreva uma função que receba um vetor de inteiros, mais a quantidade de valores presentes nele,
// e retorne um número inteiro correspondente à quantidade de valores que aparecem mais de uma vez. Exemplo: se o vetor for [1, 2, 3, 4, 5, 3, 6, 7, 2, 8], o retorno será 2 (2 números se repetem, 2 e 3).
