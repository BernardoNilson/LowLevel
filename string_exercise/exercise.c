// Escreva uma função chamada minha_strstr, que tenta localizar
// a primeira ocorrência de uma substring dentro de outra string,
// retornando o ponteiro para essa posição. Caso não encontrar, 
// retorna NULL:

#include <stdio.h>

char* minha_strstr(char* string, char* substring)
{
    char* ptrSubstring = substring;

    char* pointer = NULL;
    while (*string != '\0')
    {
        if(*string == *ptrSubstring)
        {
            pointer = ptrSubstring;
            while (*ptrSubstring != '\0')
            {
                printf("Letra da string: %c\n", *string);
                printf("Letra da substring: %c\n", *ptrSubstring);
                if(*string != *ptrSubstring)
                {
                    pointer = NULL;
                }

                string++;
                ptrSubstring++;
            }
        }
        string++;
        ptrSubstring = substring;
    }
    return pointer;
}

int main()
{
    char string[7] = "String";
    char substring[3] = "in";

    printf("Ínicio da String: %p\n", string);
    printf("Ínicio da substring: %p\n", substring);

    char* pointer = minha_strstr(&string, &substring);
    printf("Ponteiro para substring: %p\n", pointer);

    return 0;
}
