#include <stdio.h>
#include <stdlib.h>
void exercicio_1(){
int a, b, c, d, aux1, aux2, aux3, aux4;
    printf("digite o valor de A:");
    scanf("%d", &a);
    printf("digite o valor de B:");
    scanf("%d", &b);
    printf("digite o valor de C:");
    scanf("%d", &c);
    printf("digite o valor de D:");
    scanf("%d", &d);
    aux1 = a;
    aux2 = b;
    aux3 = c;
    aux4 = d;

    a = c;
    b = aux1;
    c = d;
    d = aux2;

    printf("a sequencia da permutacao corresponde a: %d %d %d %d", a, b, c, d);
}
float v_pa(float v_patrimonial, float q_acoes){
    return (v_patrimonial / q_acoes);
}
float p_vp(float v_acao, float vpa){
    return (v_acao / vpa);
}
void exercicio_2(){
    float v_patrimonial, q_acoes, v_acao, pvp, vpa;
    printf("digite o valor patrimonial da empresa:");
    scanf("%f", &v_patrimonial);
    printf("digite a quantidade de acoes disponiveis:");
    scanf("%f", &q_acoes);
    printf("digite o valor de cada acao:");
    scanf("%f", &v_acao);
    vpa = v_pa(v_patrimonial, q_acoes);
    pvp = p_vp(v_acao, vpa);
    printf("-------------CLASSIFICACAO DO PVP-------------\n");
    if (pvp < 0){
        printf("-condicao pessima.\n");
    }
    else if (pvp >= 0 && pvp < 0.8){
        printf("-condicao otima.\n");
    }
    else if (pvp >= 0.8 && pvp <= 1.2){
        printf("-condicao indiferente.\n");
    }
    else if (pvp > 1.2 && pvp <= 2.0){
        printf("-condicao boa.\n");
    }
    else if (pvp > 2.0){
        printf("-condicao ruim.\n");
    }
    printf("-VPA: %f\n-PVP: %f\n----------------------------------------------", vpa, pvp);
}

int main(){
    int op;
    printf("qual exercicio sera realizado:");
    scanf("%d", &op);
    switch(op){
        case 1:
        exercicio_1();
        break;
        case 2:
        exercicio_2();
        break;
    }
}
