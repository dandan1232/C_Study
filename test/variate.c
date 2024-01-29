/*
 @author: lindand  
 @date: 2024-01-29
 @description:
*/


#include <stdio.h>

//函数外定义变量x和y
int x;
int y;
int variate() {
    //函数内声明变量x和y为外部变量
    extern int x;
    extern int y;
    //给外部变量（全局变量）x和y赋值
    x=1;
    y=2;
    return x + y;
}

int main()
{
    int a;
    int result;
    //调用函数 variate
    result=variate();

    printf("result 为：%d\n", result);
    printf("%d",a);
    return 0;
}
