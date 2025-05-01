#include <stdio.h>

int main() {

    printf("JOGO DE XADRES:\n");

    printf("\nTORRE:\n");
    int movimentoTorre = 5;
    for(int i = 1; i <= movimentoTorre;) {
        printf("DIREITA\n");
        i++;
    }

    int i = 1;
    int movimentoBispo = 6;
    printf("\nBISPO:\n");
    while(i <= movimentoBispo) {
        printf("CIMA, DIREITA\n");
        i++;
    }


    int j = 1;
    int movimentoRainha = 8;
    printf("\nRAINHA:\n");
    do {
        printf("ESQUERDA\n");
        j++;
    }while (j <= movimentoRainha);
    
    

    


return 0;


}