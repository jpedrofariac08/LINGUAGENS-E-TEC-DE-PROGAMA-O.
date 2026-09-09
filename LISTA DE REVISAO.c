#include <stdio.h>
int main()
{
    int num1, num2, num3, num4, num5, num6, num7, num8, num9, num10, num11, soma1, soma2, digito1, digito2;
    printf("digite o cpf com espacos entre cada numero:");
        scanf("%d %d %d %d %d %d %d %d %d %d %d", &num1, &num2, &num3, &num4, &num5, &num6, &num7, &num8, &num9, &num10, &num11 );
    printf("CPF recebido: %d%d%d%d%d%d%d%d%d%d%d\n", num1, num2, num3, num4, num5, num6, num7, num8, num9, num10, num11);

soma1 = (num1 * 10) + (num2 * 9) + (num3 * 8) + (num4 * 7) + (num5 * 6) + (num6 * 5) + (num7 * 4) + (num8 * 3) + (num9 * 2);
digito1 = (soma1 * 10) % 11;
if (digito1 == 10){
    digito1 = 0;
}

soma2 = (num1 * 11) + (num2 * 10) + (num3 * 9) + (num4 * 8) + (num5 * 7) + (num6 * 6) + (num7 * 5) + (num8 * 4) + (num9 * 3) + (num10 * 2);
digito2 = (soma2 * 10) % 11;
if (digito2 == 10){
    digito1 = 0;
}

if (digito1 == num10 && digito2 == num11)
{
    printf("CPF Valido!\n");
}
else
{
    printf("CPF Invalido\n");
}

return 0;
}
