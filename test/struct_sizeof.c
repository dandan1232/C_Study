/*
 @author: lindand  
 @date: 2024-02-13
 @description:
*/

#include "stdio.h"
#include "string.h"

struct Person {
    char name[22];
    int age;
    float height;

};

int main() {
    struct Person person;
    printf("结构体 Person 大小为:%zu 字节\n", sizeof(person));
    printf("height 大小为:%zu 字节\n", sizeof(person.height));
    printf("name 大小为:%zu 字节\n", sizeof(person.name));
    printf("age大小为:%zu 字节\n", sizeof(person.age));
}
