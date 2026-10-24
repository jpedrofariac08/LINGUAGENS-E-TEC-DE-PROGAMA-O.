
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
    printf("\n");
}

/*2) Ler um valor double e imprimir em notacao cientifica.*/
void cientifica() {
    double valor;

    printf("Digite um valor positivo: ");
    scanf("%lf", &valor);

    printf("Notacao cientifica: %.1e\n", valor);
}

/*3) Ler um numero positivo e mostrar seu valor em binario.*/
void bin(int n) {
    if (n > 1) {
        bin(n / 2);
    }
    printf("%d", n % 2);
}

/*4) Ler 8 numeros inteiros e mostrar o menor.*/
void menorAB(int a, int b, int *menor) {
    if (a < b) {
        *menor = a;
    } else {
        *menor = b;
    }
}

void exercicio4() {
    int menor, numero, contador;

    printf("Digite um numero: ");
    scanf("%d", &menor);

    for (contador = 1; contador < 8; contador++) {
        printf("Digite um numero: ");
        scanf("%d", &numero);

        menorAB(menor, numero, &menor);
    }

    printf("%d eh o menor\n", menor);
}

int main(void) {
    int opcao, n;

    printf("Escolha o exercicio que deseja executar:\n");
    printf("1 - Ler e ordenar 100 numeros\n");
    printf("2 - Notacao cientifica\n");
    printf("3 - Converter decimal para binario\n");
    printf("4 - Encontrar o menor de 8 numeros\n");
    printf("Opcao: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            cemnum();
            break;

        case 2:
            cientifica();
            break;

        case 3:
            printf("Digite um numero para virar bin: ");
            scanf("%d", &n);

            if (n >= 0 && n <= 64) {
                bin(n);
                printf("\n");
            } else {
                printf("Digite um numero entre 0 e 64.\n");
            }
            break;

        case 4:
            exercicio4();
            break;

        default:
            printf("Opcao invalida!\n");
            break;
    }

    return 0;
}
