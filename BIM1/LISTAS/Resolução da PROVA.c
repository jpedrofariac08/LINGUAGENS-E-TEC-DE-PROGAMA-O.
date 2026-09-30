//exercicio 1
#include <stdio.h>
int main()
{
    int i_mochila, itens, resto;
    printf("Digite o tamanho da mochila:");
    scanf("%d", &i_mochila);
    printf("Digite a quantidade total de itens a serem transportados:");
    scanf("%d", &itens);
    resto = itens % i_mochila;
    printf("A quantidade de mochilas necessarias eh %d, sobraram %d itens", itens / i_mochila, resto);
}
