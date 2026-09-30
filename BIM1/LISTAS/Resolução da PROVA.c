//exercicio 0
#include <stdio.h>
int main()
{
int num1, num2, num3, num4;
   printf("Insira 4 numeros inteiros: \n");
   scanf("%d %d %d %d", &num1, &num2, &num3, &num4);
   if(num1 % 2 != 0){
    printf("%d eh um numero impar\n", num1);
   }
   if(num2 % 2 != 0){
    printf("%d eh um numero impar\n", num2);
   }
   if(num3 % 2 != 0){
    printf("%d eh um numero impar\n", num3);
   }
   if(num4 % 2 != 0){
    printf("%d eh um numero impar\n", num4);
   }
   if(num1 % 5 == 0){
    printf("%d eh multiplo de 5\n", num1);
   }
   if(num2 % 5 == 0){
    printf("%d eh multiplo de 5\n", num2);
   }
   if(num3 % 5 == 0){
    printf("%d eh multiplo de 5\n", num3);
   }
   if(num4 % 5 == 0){
    printf("%d eh multiplo de 5\n", num4);
   }
}
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
