/*
 @author: lindand  
 @date: 2024-02-19
 @description:C预处理器
*/


//宏定义
#include <stdio.h>

#define message_for(a, b) \
 printf(#a " and " #b ":I love you!\n")

#define tokenpaster(n) \
printf("token"#n"=%d\n",token##n);

#if !defined(MESSAGE)
#define MESSAGE "You wish！"
#endif

#define MAX(x,y) ((x)>(y)?(x):(y))

int main(void) {
    printf("File:%s\n", __FILE__);
    printf("Date:%s\n", __DATE__);
    printf("Time:%s\n", __TIME__);
    printf("Line:%d\n", __LINE__);
    printf("ANSI:%d\n", __STDC__);

    message_for(阿蛋, 念安);

    int token34 = 40;
    tokenpaster(34);


    printf("Here is the message:%s\n", MESSAGE);

    printf("20和10谁大:%d\n", MAX(20, 10));

    return 0;

}