#include <stdio.h>
// Lista de exercicios //

/* Laço { for } repete um conjunto de instruções, de um valor inicial (inicialização), ate
determinada condição, realizando uma operação (incremento) a cada execução [ sempre ]! */

/* Laço { while } (enquanto), que testa se uma condição é verdadeira, caso seja executada um
bloco de comandos repetindo o processo enquanto a condição for avaliada como verdadera. */

/* Laço { do while }, semelhante ao laç while, porem antes de realizar a verificação ele
executa o conjunto de instruções para após a execução realizar a verificação da condição. */
int main()
{
    int i, j, k, n = 0, r;
    for(i = 0, j = 1; i < 10; i++, j--){
        printf("esse eh o laco for.\n");
    }
    printf("\n");
    while(i < 10){
        printf("%d, esse eh o laco while.\n", i);
        if(n%2 == 0) i++;
        n++;
    }
    printf("\n");
    do{
        printf("%d, esse eh o laco do.", i);
        if(n % 2 == 0) i++;
        n++;
    } while (i < 10);

    // Exercicio 1.
    /* Elabore um programa que permita a entrada de 3 valores, e conte do primeiro
     valor até o segundo valor, com o passo da contagem dado pelo terceiro valor. */
    // ex: 1,8,2 >> contar de 1 a 8, com passo 2 = 3,5,7.

    int inicio, limite, passo, valor;
    printf("\n\nDigite o primeiro numero, o limite e o passo: ");
    scanf("%d %d %d", &inicio, &limite, &passo);

    if (passo < 0) {
        passo = -passo;
    }
    if (passo == 0) {
        printf("O passo nao pode ser zero.\n");
    } else if (inicio < limite) {
        valor = inicio + passo;
        while (valor <= limite) {
            printf("%d\n", valor);
            valor += passo;
        }
    } else if (inicio > limite) {
        valor = inicio - passo;
        while (valor >= limite) {
            printf("%d\n", valor);
            valor -= passo;
        }
    }
    // Exercicio 2.
    /* Faça um programa que receba um numero n e realize a soma dos n primeiros termos
     da sequencia definida como: [ S = 1/2; 1/4; 1/8; 1/16... N]. */
    

    // Exercicio 3.
    /* Crie um programa que exiba na tela, o triangulo pascal. */



}
