#include <stdio.h>

// Para cada um dos exercícios abaixo, escreva a função solicitada e
// um trecho no programa principal para testá-la. Dentro das funções,
// não use o operador de índice [] do vetor, navegue pelos vetores 
// usando apenas aritmética de ponteiros.

// 1. Escreva uma função que receba um vetor de inteiros, o tamanho
// do vetor e um valor a ser procurado. A função deve procurar o valor
// no vetor, caso encontre deve retornar a posição (índice) no vetor. 
// Caso não encontre, deve retornar -1.
int procuraValorNoVetor(int* vet, int size, int value)
{
    for(int i = 0; i < size; i++)
    {
        if (*vet == value) return i;
        vet++;
    }

    return -1;
}
// 2. Escreva uma função que receba dois vetores de inteiros de mesmo 
// tamanho, e o tamanho de um deles. A função deverá copiar os elementos
// do primeiro vetor para o segundo.
void copiaValoresDoVetorParaVetor(int* vetA, int* vetB, int size)
{
    for(int i = 0; i < size; i++)
    {
        *vetB = *vetA;
        printf("VetB[%d] = %d\n", i, *vetB);
        vetA++;
        vetB++;
    }
}

// 3. Escreva uma função que receba um vetor de inteiros e o tamanho 
// do vetor. A função deverá inverter a ordem dos elementos do vetor.

// 4. Escreva uma função que receba um vetor de inteiros e o tamanho do
// vetor. A função deverá ordenar os elementos (implemente, por exemplo, bubble sort).
void inverterOrdem(int* vet, int size)
{
    int* vetFim = vet + size -1;
    for(int i = 0; i < size; i++)
    {
        int tmp = *vet;
        *vet = *vetFim;
        *vetFim = tmp;

        vet++;
        vetFim--;
    }
    for(int i = 0; i < size; i++)
    {
        printf("Vet[%d] = %d\n", i, *vet);
    }
}

int main()
{
    // Exercício 1
    printf("Exercício 1:\n");
    int vet[5] = { 0, 1, 2, 3, 4 };
    int value = 1;
    int index = procuraValorNoVetor(vet, 5, value);
    printf("O index do valor %d é %d\n", value, index);

    // Exercício 2
    printf("Exercício 2:\n");
    int vetA[5] = { 0, 1, 2, 3, 4 };
    int vetB[5];
    copiaValoresDoVetorParaVetor(vetA, vetB, 5); // Já tem print interno

    // Exercício 3
    printf("Exercício 3:\n");
    inverterOrdem(vet, 5);

    return 1;
}