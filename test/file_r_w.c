/*
 @author: lindand  
 @date: 2024-02-17
 @description:读取文件
*/

#include "stdio.h"

int main(){
    FILE *fp = NULL;
    fp = fopen("/tmp/test.txt", "w+");
    fprintf(fp, "This is testing for fprintf...\n");
    fputs("This is testing for fputs...\n", fp);
    fclose(fp);
}