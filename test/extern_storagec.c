/*
 @author: lindand  
 @date: 2024-02-04
 @description:
*/


#include "stdio.h"

extern int count;

void write_extern(void){
    printf("count is %d\n", count);
}