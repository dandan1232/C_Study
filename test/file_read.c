/*
 @author: lindand  
 @date: 2024-02-19
 @description:
 读取单个字符的最简单的函数:int fgetc( FILE * fp );
*/


#include "stdio.h"

int main() {
    FILE *fp = NULL;
    char buff[255];

    fp = fopen("/tmp/test.txt", "r");
    //fscanf() 方法只读取了 This，因为它在后边遇到了一个空格
    fscanf(fp, "%s", buff);
    printf("1:%s\n", buff);

    //调用 fgets() 读取剩余的部分，直到行尾
    fgets(buff, 255, (FILE *) fp);
    printf("2：%s\n", buff);

    //调用 fgets() 完整地读取第二行。
    fgets(buff, 255, (FILE *) fp);
    printf("3:%s\n", buff);
    fclose(fp);

}