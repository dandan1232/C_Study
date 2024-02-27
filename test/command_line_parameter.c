/*
 @author: lindand  
 @date: 2024-02-27
 @description:命令行参数
 应当指出的是，argv[0] 存储程序的名称，
 argv[1] 是一个指向第一个命令行参数的指针，
 *argv[n] 是最后一个参数。如果没有提供任何参数，argc 将为 1，
 * 否则，如果传递了一个参数，argc 将被设置为 2。
*/

#include <stdio.h>

int main(int argc, char *argv[])
{
    //没有这句话的话argc值是默认是1
    printf("Program name %s\n", argv[0]);

    if(argc==2)
    {
        printf("The argument supplied is %s\n", argv[1]);
    } else if (argc > 2) {
        printf("Too many arguments supplied.\n");
    } else{
        printf("One argument expected.\n");
    }
}