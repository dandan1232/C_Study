/*
 @author: lindand  
 @date: 2024-02-19
 @description:C错误处理
 perror() 函数显示您传给它的字符串，后跟一个冒号、一个空格和当前 errno 值的文本表示形式。
 strerror() 函数，返回一个指针，指针指向当前 errno 值的文本表示形式。
 应该使用 stderr 文件流来输出所有的错误

*/

#include <stdio.h>
#include <errno.h>
#include <string.h>
#include <stdlib.h>

extern int errno;

int main() {
    FILE *pf;
    int errnum;
    pf = fopen("unexist.txt", "rb");
    if (pf == NULL) {
        errnum = errno;
        fprintf(stderr, "错误号:%d\n", errno);
        perror("通过perror输出错误");
        fprintf(stderr, "打开文件错误:%s\n", strerror(errnum));
    } else {
        fclose(pf);
    }


    int dividend = 20;
//    int divisor = 0;
    int divisor = 10;
    int quotient;
    if (divisor == 0) {
        fprintf(stderr, "除数为0退出运行..\n");
        exit(EXIT_FAILURE);
    }
    quotient = dividend / divisor;
    fprintf(stderr, "quotient变量的值为：%d\n", quotient);
    exit(EXIT_SUCCESS);

    return 0;
}