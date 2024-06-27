#include <stdio.h>
#include <stdbool.h>

int main() {
    unsigned char val = 0x00;
    unsigned char mask = 0xFE;
    unsigned char bit;

    for (int i = 0; i < (sizeof(val) * 8); i++){
        int input;
        scanf("%d", &input); // Lê o valor do bit como um inteiro
        
        bit = (unsigned char)input;
        val = (val << 1) | bit;
    }
    printf("%x\n", val); // Imprime o valor final em hexadecimal
}

// int main() {
//     unsigned char val = 0x00; // Inicializa val com 0
//     unsigned char bit;
    
//     for (int i = 0; i < (sizeof(val) * 8); i++) {
//         int input;
//         scanf("%d", &input); // Lê o valor do bit como um inteiro
        
//         bit = (unsigned char)input; // Converte para unsigned char
//         val = (val << 1) | bit; // Desloca val à esquerda e insere o novo bit no LSB
        
//     }

//     printf("%x\n", val); // Imprime o valor final em hexadecimal

//     return 0;
// }

// int main() {
//     unsigned char A = 63;
//     unsigned char mask = 0x01;
//     mask = mask << 5;
//     bool res = (A & mask) == mask;
//     printf("%d", res);
// }

// // 6. Faça um programa usando fptr que calcule quantos bits em 1 tem uma variável unsigned char

// int bitsCount(void* val);
// int bitsCount(void* val) {
//     int res = 0;
//     unsigned char mask = 0x01;
//     unsigned char copy = *(unsigned char*)val;
//     for (int i = 0; i < sizeof(copy) * 8; i++) {
//         if ((copy & mask) == mask) res++;
//         copy = copy >> 1;
//     }
//     return res;
// }

// int contaBits(int (*fptr)(void* val), void* val);
// int contaBits(int (*fptr)(void* val), void* val) {
//     return fptr(val);
// }

// int main() {
//     unsigned char A = 63;
//     int bits = contaBits(bitsCount, (void*)(&A));
//     printf("%d", bits);
// }


// // 5. Faça um programa com ponteiros para função com passagem de parâmetros que faça a multiplicação de dois valores.
// void mult(void* valUm, void* valDois, void* result);
// void mult(void* valUm, void* valDois, void* result)
// {
//     *(int*) result = (*(int*) valUm) * (*(int*) valDois);
// }

// void FazOperacao(void (*fptr)(void* valUm, void* valDois, void* result), int* A, int* B, int* res);
// void FazOperacao(void (*fptr)(void* valUm, void* valDois, void* result), int* A, int* B, int* res)
// {
//     fptr((void*)A, (void*)B, (void*)res);
// }

// int main() {
//     int A = 10;
//     int B = 54;
//     int res = 0;
    
//     FazOperacao(mult, &A, &B, &res);
//     printf("%d", res);
// }