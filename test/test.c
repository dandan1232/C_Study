/*
 @author: lindand  
 @date: 2024-02-15
 @description:
*/

#include <stdio.h>

struct example1 {
    int a: 2;
    int b: 4;
    int c: 27;
};

int main() {
    struct example1 ex1;
    printf("Size of example1: %lu bytes\n", sizeof(ex1));

    ex1.a = 200;
    ex1.b = 20;
    ex1.c = 10;
    printf("Size of example1: %lu bytes\n", sizeof(ex1));


    return 0;
}