/*
 @author: lindand  
 @date: 2024-01-16
 @description:
*/

#include <stdio.h>
#include <float.h>

int main() {
    printf("Storage size for int : %d \n", sizeof(int));
    printf("Storage size for short : %d \n", sizeof(short));
    printf("Storage size for u_short : %d \n", sizeof(u_short));
    printf("Storage size for long : %d \n", sizeof(long));
    printf("Storage size for u_long : %d \n", sizeof(u_long));



    //浮点类型
    printf("float的字节数：%d \n", sizeof(float));
    printf("float最小值:%d \n", FLT_MIN);
    printf("float最小值:%d \n", FLT_MAX);
    printf("Precision value: %d\n", FLT_DIG);

    return 0;


}
