#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
#include <regex>
#include <string>

int kt_passwd(){
    start:
    system("cls");
    std::string strs,strs2,strs3;
    bool ifs,ifs2,ifs3;
    int bin,bin2,bin3;
    char str[8],str2[2],str3[2];
    printf("请输入八位数卡号[0退出]：");
    scanf("%s",str);
    std::regex s("[a-fA-F0-9]{8}");
    std::regex s2("[a-fA-F0-9]{2}");
    ifs = std::regex_match(str,s);
    bin = strtol(str,0,16);
    if(bin==0){
        system("cls");
        return 0;
    }else if(ifs){
        st2:
        printf("请输入第3位和第4位卡号：");
        scanf("%s",str2);
        strs2=str2;
        bin2 = strtol(str2,0,16);
        ifs2= std::regex_match(str2,s2);
        if (ifs2){
            st3:
            printf("请输入第5位和第6位卡号：");
            scanf("%s",str3);
            strs3=str3;
            bin3 = strtol(str3,0,16);
            ifs3=std::regex_match(str3,s2);
            if(ifs3){
                printf("key：\n%X%X%X",bin^0x12345678,bin2^0x90,bin3^0xAA);
                system("pause");
                goto start;
            } else{
                goto st3;
            }
        } else{
            goto st2;
        }
    } else{
        system("cls");
     goto start;
    }
}
