/*
 @author: lindand  
 @date: 2024-02-06
 @description:枚举在 switch 中的使用
*/


#include "stdio.h"

int main() {
    enum color {
        red = 1, green, blue
    };
    enum color favorite_color;
    /*选颜色*/
    printf("请选择你喜欢的颜色吧1.red; 2.green; 3.blue :");
    scanf("%u", &favorite_color);

    switch (favorite_color) {
        case red:
//            printf("%d\n",red); //1
            printf("红色");
            break;
        case green:
            printf("绿色");
            break;
        case blue:
            printf("蓝色");
            break;
        default:
            printf("没有选这三个");

    }
    return 0;
}