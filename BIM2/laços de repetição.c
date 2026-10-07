#include <stdio.h>
// para[for] (inicial, condição, incremento).
// variavel[x] para dar diversas posições a uma variavel.
int main()
{
    int num[10];
    int i;
    printf("Digite os 10 numeros: ");
    for (i = 0; i < 10; i++) {
        scanf("%d", &num[i]);
    }
    printf("Numeros digitados: ");
    for (i = 0; i < 10; i++) {
        printf("%d ", num[i]);
    }
    printf("\n");

    return 0;
}
