/*
 @author: lindand  
 @date: 2024-02-15
 @description:
*/

#include "stdio.h"
#include "string.h"

union Data {
    int i;
    float f;
    char str[20];
};

int main() {
    union Data data;
    printf("data内存占用:%d\n", sizeof(data));

    return 0;
}