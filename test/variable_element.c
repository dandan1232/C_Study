/*
 @author: lindand  
 @date: 2024-02-20
 @description:C可变参数
*/

#include <stdio.h>
#include <stdarg.h>

double average(int num, ...) {
    va_list valist;
    double sum = 0.0;
    int i;

    /* 为num个参数初始化valist*/
    va_start(valist, num);

    /* 访问所有赋给valist的参数*/
    for (i = 0; i < num; i++) {
        sum += va_arg(valist, int);
    }
    /*清理为valist保留的内存*/
    va_end(valist);

    return sum / num;



}

int main() {
    printf("Average of 2,3,4,5=%f\n", average(4, 2, 3, 4, 5));
    printf("Average of 5,10,15=%f\n", average(3, 5, 10, 15));
}