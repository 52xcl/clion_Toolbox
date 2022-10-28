#include <stdio.h>
#include <stdlib.h>
#include "kangtuo.h"
#include <io.h>
int str_size;
//菜单列表
const char* str[] = { "退出","进入官网","更新工具箱","关于我们","扫描并修复win10系统文件[管理员]",
                      "磁盘垃圾清理[系统自带]","康拓电梯卡密码计算" };

//清楚更新缓存
void update() {
    if (!access("update.exe",0)) {
        printf("yes");
    }
}

//输出菜单
void list_data() {
    system("color A");
    system("title 小薛工具箱 - 小薛娱乐园出品 - V 1.0.0.3 ");
    printf("\n功能列表：\n\n");
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

//执行对应的功能
void list_run() {
    restart:
    list_data();
    int max;
    printf("\n\n请输入对应功能的序号：");
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
                printf("\n关于我们：\n\n官网：http://www.52xcl.cn/\n\nQQ群：891198302\n\n微信公众号：小薛娱乐园\n\n");
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
        printf("\n请输入[%d]到[%d]内的序列号！\n", 0, str_size - 1);
        goto restart;
    }
}
//主程序
int main() {
    list_run();
    update();
    return 0;
}