/*
 @author: lindand  
 @date: 2024-02-19
 @description:
*/

#include <stdio.h>

int main() {
    int sum = 17, count = 5;
    int i = 17;
    char c = 'c'; //ascii的值为99
    int get;
    float get2;
    get = i + c;
    get2 = i + c;
    double mean;

    mean = (double) sum / count;
    printf("Value of mean:%f\n", mean);
    printf("Value of get:%d\n", get);
    printf("Value of get:%f\n", get2);
}
