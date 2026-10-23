#include <stdio.h>
/*1) Ler 100 números inteiros, imprimir na ordem inversa
 em que foram lidos e ordenar do maior para o menor.*/
void cemnum() {
    int numeros[100];
    int contador, auxiliar, rodada;

    for (contador = 0; contador < 100; contador++) {
        printf("Digite um numero: ");
        scanf("%d", &numeros[contador]);
    }

    for (rodada = 0; rodada < 99; rodada++) {
        for (contador = 0; contador < 99 - rodada; contador++) {
            if (numeros[contador] < numeros[contador + 1]) {
                auxiliar = numeros[contador];
                numeros[contador] = numeros[contador + 1];
                numeros[contador + 1] = auxiliar;
            }
        }
    }

    for (contador = 99; contador >= 0; contador--) {
        printf("%d ", numeros[contador]);
    }
}
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
   cemnum();
   printf("\n");
   bin(n);

    return 0;
}
