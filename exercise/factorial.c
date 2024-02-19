/*
 @author: lindand  
 @date: 2024-02-19
 @description:
 递归函数计算的数的阶乘
*/


#include <stdio.h>

double
(unsigned int i) {
    if (i <= 1) {
        return 1;
    }
    return i * factorial(i - 1);
}

int main() {
    int i = 16;
    printf("%d的阶乘为%f\n", i, factorial(i));
    return 0;
}