/*
 @author: lindand  
 @date: 2024-02-04
 @description:
*/


#include "stdio.h"

int count;
extern void write_extern();
int main(){
    count=5;
    write_extern();
}