#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
#include <regex>
#include <string.h>

int kt_passwd(){
    system("title СѦ������ - [���ص��ݿ���Կ����] - СѦ����԰��Ʒ");
    start:
    system("cls");
    bool ifs;
    int bin,bin2,bin3;
    char str[8];
    char str2[7],str3[7];
    printf("�������λ������[0�˳�]��");
    scanf("%s",str);
    std::regex s("[a-fA-F0-9]{8}");
    std::regex s2("[a-fA-F0-9]{2}");
    ifs = std::regex_match(str,s);
    bin = strtol(str,0,16);
    if(bin==0){
        system("cls");
        return 0;
    }else if(ifs){
        strncpy(str2,str+2,2);
        bin2 = strtol(str2,0,16);
        strncpy(str3,str+4,2);
        bin3 = strtol(str3,0,16);
        printf("key:\n%X%X%X\n",bin^0x12345678,bin2^0x90,bin3^0xAA);
        system("pause");
        goto start;
    } else{
        system("cls");
     goto start;
    }
}
