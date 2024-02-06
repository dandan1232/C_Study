/*
 @author: lindand
 @date: 2024-02-06
 @description:
*/

#include <stdio.h>

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d\n", arr[i]);//数组名arr被当作指针使用
    }
}

int main()
{
    int myArray[5] = {10, 20, 30, 40, 50};
    printArray(myArray, 5);
    return 0;
}
