/*
 @author: lindand  
 @date: 2024-02-16
 @description:scanf() 和 printf() 函数
*/

#include "stdio.h"

int main() {
    char str[100];
    int i;

    printf("键入：");
    scanf("%s %d", str, &i);

    printf("\n键入了：%s %d", str, i);
    printf("\n");
    return 0;
}