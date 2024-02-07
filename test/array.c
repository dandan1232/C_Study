/*
 @author: lindand  
 @date: 2024-02-06
 @description:C数组
*/

#include "stdio.h"
#define LENGTH(array1) (sizeof(array1)/sizeof(array1[0]))

int main(){
    int array[]={1,2,3,4,5};
    int length = sizeof(array)/sizeof(array[0]);
    int *ptr=&array[0];
    int *ptr2=array;
    printf("%p\n", *ptr);
    printf("%p\n", *ptr2);
    printf("数组长度:%d\n", length);
    printf("%d\n",sizeof(array[0]));

    int array1[]={1,2,3,4,5,6,7};
    int length1 = LENGTH(array1);
    printf("数组长度:%d\n", length1);


    int n[10]; //n是一个包含10个整数的数组
    int i,j;

    /*初始化数组元素*/
    for (i = 0; i < 10; i++) {
        n[i]=i+100;//设置元素i为i+100
    }
    /*输出*/
    for (j = 0; j < 10; j++) {
        printf("Element[%d]=%d\n", j, n[j]);
    }
    return 0;
}
