//exercicio 1
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

//exercicio 7 e 8
#include <stdio.h>
#include <stdlib.h>
float calc_inss(float salario){
    if (salario <= 1412.00) return salario*0.075;
    else if (salario <= 2666.68) return salario*0.09;
    else if (salario <= 4000.00) return salario*0.12;
    else return salario*0.14;
}
float calc_irpf(float irpf, float salario){
    if (irpf <= 2259.20) return 0;
    else if(irpf <= 2826.65) return (irpf*0.075)-169.44;
    else if(irpf <= 3751.05) return (irpf*0.15)-381.44;
    else if(irpf <= 4664.68) return (irpf*0.225)-662.77;
    else return (irpf*0.275)-896.00;
}

int main()
{
    float salario, desconto, irpf;
    printf("digite o salario bruto:");
    scanf("%f", &salario);
    desconto = calc_inss(salario);
    irpf = calc_irpf(salario - desconto, salario);
    printf("%f || %f || %f", desconto, calc_inss(salario), calc_irpf(salario - desconto, salario));
    return 0;
}

//exercicio 9
#include <stdio.h>
#include <stdlib.h>
float calc_inss(float salario){
    if (salario <= 1412.00) return salario*0.075;
    else if (salario <= 2666.68) return salario*0.09;
    else if (salario <= 4000.00) return salario*0.12;
    else return salario*0.14;
}
float calc_irpf(float irpf, float salario){
    if (irpf <= 2259.20) return 0;
    else if(irpf <= 2826.65) return (irpf*0.075)-169.44;
    else if(irpf <= 3751.05) return (irpf*0.15)-381.44;
    else if(irpf <= 4664.68) return (irpf*0.225)-662.77;
    else return (irpf*0.275)-896.00;
}

int main()
{
    float salario, vhora, hmes, desconto, irpf;
    printf("digite o valor da hora e horas trabalhadas no mes desse trabalhador: ");
    scanf("%f %f", &vhora, &hmes);
    salario = vhora * hmes;
    desconto = calc_inss(salario);
    irpf = calc_irpf(salario - desconto, salario);
    printf("===============================================\nRECIBO DE PAGAMENTO DE SALÁRIO (CONTRA-CHEQUE)\n===============================================\nSalário Bruto : R$%f\n(-) Desconto INSS: R$%f\n(-) Desconto IRPF: R$%f\n-----------------------------------------------\nLÍQUIDO A RECEBER: R$%f\n===============================================\n", salario, desconto, irpf, salario - desconto - irpf);

    return 0;
}
