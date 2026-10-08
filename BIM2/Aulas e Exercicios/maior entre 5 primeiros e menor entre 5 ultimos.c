#include <stdio.h>
// para[for] (inicial, condição, incremento).
// variavel[x] para dar diversas posições a uma variavel.

/* Faça um programa que leia 10 numeros, mostre o maior entre os 5 primeiros e o menor entre os restantes */
int compare(int a, int b){
    if(a < b) return b;
    else return a;
}
int main()
{
    int num[10];
    int i, maior, menor;
    printf("Digite os 10 numeros: ");
    for (i = 0; i < 10; i++) {
        scanf("%d", &num[i]);
    }
    
    printf("Numeros digitados: ");
    for (i = 0; i < 10; i++) {
        printf("%d ", num[i]);
    }

    for(i = 1, maior = num[0]; i < 5; i++){
        if(num[i] < num[i+1]) maior = num[i];
    }
    printf("\nNumero maior entre os 5 primeiros: %d\n", maior);

    for(i = 6, menor = num[5]; i < 10; i++){
        if(menor > num[i]) menor = num[i];
    }
    printf("Menor entre os 5 restantes: %d\n", menor);

    return 0;
}
