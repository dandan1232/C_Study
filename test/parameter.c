/*
 @author: lindand  
 @date: 2024-02-06
 @description:
全局变量与局部变量在内存中的区别：
全局变量保存在内存的全局存储区中，占用静态的存储单元；
局部变量保存在栈中，只有在所在函数被调用时才动态地为变量分配存储单元。
*/


#include "stdio.h"

//全局变量声明
int a = 20;

int main() {
    /*在主函数中的局部变量声明*/
    int a = 10;
    int b = 20;
    int c = 0;
    int sum(int, int);

    printf("value of a in main() = %d\n", a);
    c = sum(a, b);
    printf("value of c in main() = %d\n", c);

    return 0;
}

/*田加两个整数的函数*/
int sum(int a, int b) {
    printf("value of a in sum() = %d\n", a);
    printf("value of b in sum() = %d\n", b);

    return a + b;
}