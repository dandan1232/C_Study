/*
 @author: lindand  
 @date: 2024-02-06
 @description:
*/

#include "stdio.h"

//函数声明

int max(int num1, int num2);

int main(){
    int a=100;
    int b=200;
    int ret;

    ret = max(a, b);
    printf("max:%d",ret);
    return 0;
}

//函数返回两个数中较大的那个数

int max(int num1,int num2){
    int result;

    if (num1 > num2) {
        result=num1;

    } else
        result=num2;
    return result;
}