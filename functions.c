#include <stdio.h>
#include <stdbool.h>

// Escreva uma função para um caixa de banco, que recebe um valor inteiro R
// e determina o número de notas de 100, 50, 10, 5 e 1 reais necessário para pagar a quantia R.
// Faça de forma que o número de notas usado seja o menor possível,
// retornando as quantidades de notas por referência.
void calculaNotas (int valor, int *cem, int *cinquenta, int *dez, int *cinco, int *um) {
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
void converteTempo (int tempo, int *horas, int *minutos, int *segundos) {
    *horas = tempo / 3600;
    tempo %= 3600;

    *minutos = tempo / 60;

    *segundos = tempo % 60;
}

// Escreva uma função que receba um vetor de inteiros, mais a quantidade de valores presentes nele,
// e retorne um número inteiro correspondente à quantidade de valores que aparecem mais de uma vez.
// Exemplo: se o vetor for [1, 2, 3, 4, 5, 3, 6, 7, 2, 8],
// o retorno será 2 (2 números se repetem, 2 e 3).
int calculaQuantidadeNumRepete (int vet[], int size) {
    int count = 0;

    for (int i = 0; i < size - 1; i++) {
        int repete = 0;
        for (int j = i + 1; j < size - 1; j++) {
            if (vet[i] == vet[j]) {
                repete++;
            }
        }
        if (repete == 1) count++;
    }
    return count;
}

// Programa Principal
int main()
{
    int valor = 246;
    int cem = 0, cinquenta = 0, dez = 0, cinco = 0, um = 0;
    calculaNotas(valor, &cem, &cinquenta, &dez, &cinco, &um);
    printf("Quantidade de Notas para R$%d: (100) = %d, (50) = %d, (10) = %d, (5) = %d e (1) = %d\n", valor, cem, cinquenta,dez, cinco, um);
    
    int tempo = 3664;
    int horas = 0, minutos = 0, segundos = 0;
    converteTempo(tempo, &horas, &minutos, &segundos);
    printf("Quantidade de Tempo para %d s: (horas) = %d, (minutos) = %d, (segundos) = %d\n", tempo, horas, minutos, segundos);
    
    int vet[10] = {1, 2, 3, 4, 5, 3, 1, 3, 2, 8};
    printf("Quantidade de Números Repetidos: %d\n", calculaQuantidadeNumRepete(vet, 10));
    return 0;
}