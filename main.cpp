#include <stdio.h>
#include <stdlib.h>
#include "kangtuo.h"
#include <io.h>
int str_size;
//�˵��б�
const char* str[] = { "�˳�","�������","���¹�����","��������","ɨ�貢�޸�win10ϵͳ�ļ�[����Ա]",
                      "������������[ϵͳ�Դ�]","���ص��ݿ��������" };

//������»���
void update() {
    if (!access("update.exe",0)) {
        printf("yes");
    }
}

//����˵�
void list_data() {
    system("color A");
    system("title СѦ������ - СѦ����԰��Ʒ - V 1.0.0.3 ");
    printf("\n�����б�\n\n");
    str_size = (sizeof str) / (sizeof str[0]);
    for (int i = 0; i < str_size; i++) {

        if (i % 5 != 0 || i == 0)
        {
            printf("[%d] %s   ", i, str[i]);
        }
        else {
            printf("\n\n[%d] %s   ", i, str[i]);
        }
    }
}

//ִ�ж�Ӧ�Ĺ���
void list_run() {
    restart:
    list_data();
    int max;
    printf("\n\n�������Ӧ���ܵ���ţ�");
    scanf_s("%d", &max);
    if (str_size > max) {
        switch (max)
        {
            case 0:
                break;
            case 1:
                system("cls && start http://www.52xcl.cn");
                goto restart;
            case 2:
                system("cls && curl -o update.exe http://api.52xcl.cn:88/toolbox/update.exe && start update.exe");
                break;
            case 3:
                system("cls");
                printf("\n�������ǣ�\n\n������http://www.52xcl.cn/\n\nQQȺ��891198302\n\n΢�Ź��ںţ�СѦ����԰\n\n");
                system("pause");
                system("cls");
                goto restart;
            case 4:
                system("cls && sfc /scannow");
                goto restart;
            case 5:
                system("cls && cleanmgr");
                goto restart;
            case 6:
                kt_passwd();
                goto restart;
                break;

        }
    }
    else
    {
        system("cls");
        printf("\n������[%d]��[%d]�ڵ����кţ�\n", 0, str_size - 1);
        goto restart;
    }
}
//������
int main() {
    list_run();
    update();
    return 0;
}