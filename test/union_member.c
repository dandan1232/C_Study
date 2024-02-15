/*
 @author: lindand  
 @date: 2024-02-15
 @description:访问共用体成员
*/


#include <stdio.h>
#include <string.h>

union Data {
    int i;
    float f;
    char str[20];
};

int main() {
    union Data data;
    /* 我们可以看到共用体的 i 和 f 成员的值有损坏，因为最后赋给变量的值占用了内存位置，这也是 str 成员能够完好输出的原因
     data.i = 10;
     data.f = 220.5;
     strcpy(data.str, "C Programming");

     printf("data.i : %d\n", data.i);
     printf("data.f : %f\n", data.f);
     printf("data.str : %s\n", data.str);*/

//    所有的成员都能完好输出，因为同一时间只用到一个成员
    data.i = 10;
    printf("data.i : %d\n", data.i);

    data.f = 220.5;
    printf("data.f : %f\n", data.f);

    strcpy(data.str, "C Programming");
    printf("data.str : %s\n", data.str);

    return 0;
}