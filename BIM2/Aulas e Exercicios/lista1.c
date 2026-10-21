#include <stdio.h>
/*3) Implemente um programa que leia um numero n
[com n positivo & n <= 64] e mostre na tela seu
valor em base binaria(bits). */

void bin(int n)
{
    if (n > 1) {
        bin(n / 2);
    }
    printf("%d", n % 2);
}

int main(void)
{
    int n; // Exemplo: 10 em binario e 1010
   printf("digite um numero para virar bin: ");
   scanf("%d", &n);
    bin(n);
    printf("\n");

    return 0;
}
