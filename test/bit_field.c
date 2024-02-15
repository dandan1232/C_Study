/*
 @author: lindand  
 @date: 2024-02-15
 @description:C位域
*/


#include <stdio.h>
#include <string.h>

/* 定义简单的结构 */
struct
{
    unsigned int widthValidated;
    unsigned int heightValidated;
} status1;

/* 定义位域结构 */
struct
{
    unsigned int widthValidated : 1;
    unsigned int heightValidated : 1;
    unsigned int heightValidated1 : 1;
    unsigned int heightValidated2 : 1;
    unsigned int heightValidated3 : 1;
    unsigned int heightValidated4 : 1;
    unsigned int heightValidated5 : 1;
    unsigned int heightValidated6 : 30;
} status2;

int main( )
{
    printf( "Memory size occupied by status1 : %d\n", sizeof(status1));
    printf( "Memory size occupied by status2 : %d\n", sizeof(status2));

    return 0;
}