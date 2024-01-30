/*
 @author: lindand  
 @date: 2024-01-30
 @description:
*/


//字符常量
#include <stdio.h>
#define HEIGHT 10
#define WEIGHT 3
#define NEWLINE '\n'
const int LONG=4;
const int GAO=5;


int main(){
    printf("Hello\tWorld\n");
    printf("LDD\n");

    //字符串常量
    char myChar='a';
    int myAscillValue=(int)myChar;
    printf("%d\n",myAscillValue);

    char myString[] = "Hello, world!"; //系统对字符串常量自动加一个 '\0'
    printf("%s\n",myString);


    int area;

    area=WEIGHT*HEIGHT;
    printf("值:%d", area);
    printf("%c",NEWLINE);

    int mianji;
    mianji=GAO*LONG;
    printf("const关键字的算值:%d", mianji);
    printf("%c", NEWLINE);


    return 0;
}

