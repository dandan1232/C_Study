/*
 @author: lindand  
 @date: 2024-02-04
 @description:
*/

#include <stdio.h>

int main() {
    int a = 20;
    int b = 10;
    int c = 15;
    int d = 5;
    int e;

    e = (a + b) * c / d;      // ( 30 * 15 ) / 5
    printf("(a + b) * c / d 的值是 %d\n", e);

    e = ((a + b) * c) / d;    // (30 * 15 ) / 5
    printf("((a + b) * c) / d 的值是 %d\n", e);

    e = (a + b) * (c / d);   // (30) * (15/5)
    printf("(a + b) * (c / d) 的值是 %d\n", e);

    e = a + (b * c) / d;     //  20 + (150/5)
    printf("a + (b * c) / d 的值是 %d\n", e);


    int q = 4;
    short w;
    double r;
    int *ptr;

    /* sizeof 运算符实例 */
    printf("Line 1 - 变量 a 的大小 = %lu\n", sizeof(q));
    printf("Line 2 - 变量 b 的大小 = %lu\n", sizeof(w));
    printf("Line 3 - 变量 c 的大小 = %lu\n", sizeof(r));

    /* & 和 * 运算符实例 */
    ptr = &q;    /* 'ptr' 现在包含 'a' 的地址 */
    printf("q 的值是 %d\n", q);
    printf("*ptr 是 %d\n", *ptr);

    /* 三元运算符实例 */
    a = 10;
    b = (a == 1) ? 20 : 30;
    printf("b 的值是 %d\n", b);

    b = (a == 10) ? 20 : 30;
    printf("b 的值是 %d\n", b);

    return 0;
}