/*
 @author: lindand  
 @date: 2024-02-06
 @description:C枚举
*/


#include "stdio.h"
//枚举变量的定义

/*1、先定义枚举类型，再定义枚举变量*/


enum DAY {
    MON = 1, TUE, WED, THU, FRI = 3, SAT, SUN
};
//enum DAY day;




/*2、定义枚举类型的同时定义枚举变量*/

enum DAY2 {
    MON2 = 1, TUE2, WED2, THU2, FRI2 , SAT2, SUN2
} day2;


/*3、省略枚举名称，直接定义枚举变量*/
enum {
    MON3 = 1, TUE3, WED3, THU3, FRI3, SAT3, SUN3
} day3;

int main() {
    enum DAY day;
    day = FRI;
    printf("%d\n", day);

    for (day2 = MON2; day2 <= SUN2; day2++) {
        printf("枚举元素：%d\n",day2);
    }
    return 0;
}