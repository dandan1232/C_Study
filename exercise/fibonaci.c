/*
 @author: lindand  
 @date: 2024-02-19
 @description:递归函数——斐波那锲数列
*/

#include <stdio.h>

int fibonaci(int i) {
    if (i == 0) {
        return 0;
    }
    if (i == 1) {
        return 1;
    }
    return fibonaci(i - 1) + fibonaci(i - 2);
}

int main() {
    int i;
    for (i = 0; i < 10; i++) {
        printf("%d\t", fibonaci(i));
    }
    return 0;
}