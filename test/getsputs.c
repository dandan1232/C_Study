/*
 @author: lindand  
 @date: 2024-02-16
 @description:gets() & puts() 函数
char *gets(char *s) 函数从 stdin 读取一行到 s 所指向的缓冲区，直到一个终止符或 EOF。
int puts(const char *s) 函数把字符串 s 和一个尾随的换行符写入到 stdout。
*/

#include "stdio.h"

int main() {
    char str[100];
    printf("键入：");
    gets(str);
    printf("\n输出：");
    puts(str);
    return 0;
}