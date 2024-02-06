/*
 @author: lindand  
 @date: 2024-02-06
 @description:
*/

#include "stdio.h"

int main() {
    enum DAY {
        MON = 1, TUE, WED, THU, FRI, SAT, SUN
    };
    enum DAY day;

    int a = 2;
    day = (enum DAY) a; //类型转换
//day = a 经错标零
    printf("day:%d\n", day);
    return 0;
}