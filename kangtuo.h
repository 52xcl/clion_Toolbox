#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int kt_passwd(){
    restart:
    system("cls");
    unsigned int card,card_a,card_b;
    unsigned char y=0,j=0;
    printf("������8λ����[����0�˳�]:");
    scanf("%8x",&card);
    if(card==0x0){
        system("cls");
        return 0;
    } else if(card>0xFFFFFFF){
    printf("�������3λ�͵�4λ����:");
    scanf("%2x",&card_a);
    printf("�������5λ�͵�6λ����:");
    scanf("%2x",&card_b);
        printf("�����ǣ�\n%X%X%X\n", card ^ 0x12345678, card_a ^ 0x90, card_b ^ 0xAA);
        system("pause");
        goto restart;
    } else {
        goto restart;
    }
}
