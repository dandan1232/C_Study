/*
 @author: lindand  
 @date: 2024-02-05
 @description:
*/


#include "stdio.h"

int main() {
    int num;
    printf("输入一个数字:");
    scanf("%d", &num);
    (num % 2 == 0) ? printf("偶数") : printf("奇数");
}