#include <stdio.h>

/*faça um programa que receba uma palavra e verifique se ela é um palindromo.*/
int main(void)
{
    char palavra[30];
    int tamanho = 0;
    int i;
    int palindromo = 1;

    printf("Digite uma palavra: ");
    scanf("%29s", palavra);

    while (palavra[tamanho] != '\0') {
        tamanho++;
    }

    for (i = 0; i < tamanho / 2; i++) {
        if (palavra[i] != palavra[tamanho - 1 - i]) {
            palindromo = 0;
        }
    }

    if (palindromo) {
        printf("A palavra e um palindromo.\n");
    } else {
        printf("A palavra nao e um palindromo.\n");
    }

    return 0;
}
