/*
 @author: lindand  
 @date: 2024-02-15
 @description:位域的使用
 位域变量名.位域名
位域变量名->位域名

 定义了位域结构 bs，三个位域为 a、b、c。说明了 bs 类型的变量 bit 和指向 bs 类型的指针变量 pbit。这表示位域也是可以使用指针的。

*/

#include "stdio.h"

int main() {
    struct bs {
        unsigned a: 1;
        unsigned b: 3;
        unsigned c: 4;
    } bit, *pbit;
    bit.a = 1;    /* 给位域赋值（应注意赋值不能超过该位域的允许范围） */
    bit.b = 7;    /* 给位域赋值（应注意赋值不能超过该位域的允许范围） */
    bit.c = 15;    /* 给位域赋值（应注意赋值不能超过该位域的允许范围） */
    printf("%d,%d,%d\n", bit.a, bit.b, bit.c);    /* 以整型量格式输出三个域的内容 */
    pbit = &bit;    /* 把位域变量 bit 的地址送给指针变量 pbit */
    pbit->a = 0;    /* 用指针方式给位域 a 重新赋值，赋为 0 */
    pbit->b &= 3;    /* 使用了复合的位运算符 "&="，相当于：pbit->b=pbit->b&3，位域 b 中原有值为 7，与 3 作按位与运算的结果为 3（111&011=011，十进制值为 3） */
    pbit->c |= 1;    /* 使用了复合位运算符"|="，相当于：pbit->c=pbit->c|1，其结果为 15 */
    printf("%d,%d,%d\n", pbit->a, pbit->b, pbit->c);    /* 用指针方式输出了这三个域的值 */
}