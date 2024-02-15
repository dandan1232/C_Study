/*
 @author: lindand  
 @date: 2024-02-15
 @description:位域的定义和位域变量的说明
*/

#include "stdio.h"

struct paeked_struct {
    unsigned int f1: 1; //1位的位域
    unsigned int f2: 1; //1位的位域
    unsigned int f3: 1; //1位的位域
    unsigned int f4: 1; //1位的位域
    unsigned int type: 4; //4位的位域
    unsigned int my_int: 29; //29位的位域
    unsigned int age: 2;

};
struct Bs{
    unsigned a:4;
    unsigned  :4;    /* 空域 */
    unsigned b:4;    /* 从下一单元开始存放 */
    unsigned c:4;
}bs;

struct k{
    int a:1;
    int  :2;    /* 该 2 位不能使用 */
    int b:3;
    int c:2;
}k;

int main() {
    struct paeked_struct pack;

    printf("Sizeof( pack ) : %lu\n", sizeof(pack));
    printf("Sizeof( bs ) : %lu\n", sizeof(bs));
    printf("Sizeof( k ) : %lu\n", sizeof(k));

    pack.f1 = 1;
    pack.f2 = 0;
    pack.f3 = 1;
    pack.f4 = 1;
    pack.type = 8;
    pack.my_int = 25;

    printf("f1:%u\n", pack.f1);
    printf("f2:%u\n", pack.f2);
    printf("f3:%u\n", pack.f3);
    printf("f4:%u\n", pack.f4);
    printf("type:%u\n", pack.type);
    printf("my_int:%u\n", pack.my_int);


    pack.age = 4;
    printf("Sizeof( pack ) : %d\n", sizeof(pack));
    printf("pack.age : %d\n", pack.age);

    pack.age = 7;
    printf("pack.age : %d\n", pack.age);

    pack.age = 8; // 二进制表示为 1000 有四位，超出
    printf("pack.age : %d\n", pack.age);





    return 0;

}