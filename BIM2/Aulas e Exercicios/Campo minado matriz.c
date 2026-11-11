//Campo minado e matriz

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define bandeira 9
#define bomba 0
int main(){
    srand(time(NULL));
    int campo [9] [9];
    int casaX, casaY, i, j;
    //Limpar a nossa matriz e insere 9 em todas as posições
    for(i=0; i<9; i++){
        for(j=0; j<9; j++){
            campo [i] [j] = 9;
        }
    }
    //preenche com bombas nosso jogo
    for(i=0; i<9; i++){
        for(j=0; j<9; j++){
            if(rand()%10 == 0)
                campo[i] [j] = 0;
        }
    }
    printf("<<CAMPO MINADO>>\n-------------------\n");
    for(i=0; i<9; i++){
        for(j=0; j<9; j++){
            if (campo[i] [j] == 0)printf("|9");
            else printf("|%d", campo[i] [j]);
        }
        printf("\n");
    }
    printf("-------------------\n");
    return 0;
}
