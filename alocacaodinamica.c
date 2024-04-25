/*Escreva um programa que lê as dimensões de uma matriz (linhas x colunas)
de char e aloca memória para ela. Depois o programa deve fazer o seguinte:
*/

#include <stdio.h>
#include <time.h>
#include <malloc.h>
#include <math.h>
#include <stdlib.h>

typedef struct 
{
    int linha;
    int coluna;
} Semente;

int calcMaisProx(int linha, int coluna, Semente sementes[], int len)
{
    int posicaoMaisProx = 0;
    //int proxMaisProx = abs(linha - sementes[0].linha) + abs(coluna - sementes[0].coluna);
    double proxMaisProx =  sqrt(
                            pow((linha - sementes[0].linha), 2) +
                            pow((coluna - sementes[0].coluna), 2)
                        );
    for(int i = 1; i < len; i++)
    {
        //int prox = abs(linha - sementes[i].linha) + abs(coluna - sementes[i].coluna);
        double prox = sqrt(
                        pow((linha - sementes[i].linha), 2) +
                        pow((coluna - sementes[i].coluna), 2)
                    );
        if (prox < proxMaisProx)
        {
            proxMaisProx = prox;
            posicaoMaisProx = i;
        }
    }
    return posicaoMaisProx;
}

int main(){

    int l, c;
    printf("Digite as linhas\n");
    scanf("%d", &l);
    
    printf("Digite as colunas\n");
    scanf("%d", &c);

    char (*mat)[c] = calloc(l, sizeof *mat);
    Semente sementes[5];
    
    srand(time(0));
    for(int i = 0; i < 5; i++){
        printf("%d ", i);
        int linha = rand() % l;
        int coluna = rand() % c;
        mat[linha][coluna] = '.';

        sementes[i].coluna = coluna;
        sementes[i].linha = linha;
    }

    // printf("\n");
    // for(int i = 0; i < l; i++)
    // {
    //     printf("Linha: ");
    //     for(int j = 0; j < c; j++)
    //     {
    //         printf("%c ", mat[i][j]);
    //     }
    //     printf("\n");
    // }


    for(int i = 0; i < l; i++)
    {
        for(int j = 0; j < c; j++)
        {
            if(mat[i][j] != '.'){
                int posicao = calcMaisProx(i, j, sementes, 5);
                mat[i][j] = (posicao + '0');
            }   
        }
    }

    printf("\n");
    for(int i = 0; i < l; i++)
    {
        printf("Linha: ");
        for(int j = 0; j < c; j++)
        {
            printf("%c ", mat[i][j]);
        }
        printf("\n");
    }

    free(mat);
}
