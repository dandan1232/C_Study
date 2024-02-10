/*
 @author: lindand  
 @date: 2024-02-10
 @description:
*/


#include "stdio.h"

int main() {
//    实际变量的声明
    int var_runoob = 10;
//    指针变量的声明
    int *p;
//    在指针变量中存储var的地址
    p = &var_runoob;


    printf("var_runoob变量的地址：%p\n", p);

//    在指针变量中存储的地址
    printf("p变量存储的地址:%p\n", p);

//    使用指针访问值
    printf("*p 变量的值：%d\n", *p);


    int *ptr=NULL;
    printf("ptr的地址是:%p\n", ptr);


    return 0;
}