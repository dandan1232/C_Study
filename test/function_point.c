/*
 @author: lindand  
 @date: 2024-02-10
 @description:typedef int (*fun_ptr)(int,int); // 声明一个指向同样参数、返回值的函数指针类型

*/

#include "stdio.h"

int max(int x, int y) {
    return x > y ? x : y;
}

int main(void) {
//    P是函数指针
    int (* p)(int, int) =& max; //&可以省略
    int a, b, c, d;
    printf("请输入三个数字：\n");
    scanf("%d %d %d", &a, &b, &c);

//    与直接调用函数等价，d=max(max(a,b),c)
    d = p(p(a, b), c);
    printf("最大的数字是:%d\n", d);
    return 0;


}
