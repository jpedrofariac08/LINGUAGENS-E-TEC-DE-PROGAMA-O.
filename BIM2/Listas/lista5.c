#include <stdio.h>

/*1) Ler 100 numeros inteiros, imprimir na ordem inversa
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

/*2) Ler um valor double e imprimir em notacao cientifica.*/
void cientifica() {
    double valor;

    printf("Digite um valor positivo: ");
    scanf("%lf", &valor);

    printf("Notacao cientifica: %.1e\n", valor);
}

/*3) Ler um numero positivo e mostrar seu valor em binario.*/
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
    cemnum();
    
    cientifica();

    printf("Digite um numero para virar bin: ");
    scanf("%d", &n);

    bin(n);

    return 0;
}
