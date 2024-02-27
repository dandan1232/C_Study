/*
 @author: lindand  
 @date: 2024-02-27
 @description:动态分配内存
 不重新分配额外的内存，strcat() 函数会生成一个错误，因为存储 description 时可用的内存不足
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {
    char name[100];
    char *description;
    strcpy(name, "Zara Ali");

    /*动态分配内存*/
//    description = (char *) malloc(200 * sizeof(char));
    description = (char *) calloc(30, sizeof(char));
    if (description == NULL) {
        fprintf(stderr, "Error - unable to allocate required memory\n");
    } else {
        strcpy(description, "She is a student of C Language");
    }
    /*假设您想要存储更大的描述信息*/
    description = (char *) realloc(description, 100 * sizeof(char));
    if (description == NULL) {
        fprintf(stderr, "Error - unable to allocate required memory\n");
    } else {
        strcat(description, "She is in Class 10th");
    }

    printf("Name = %s\n", name);
    printf("Description = %s\n", description);
    /*使用free()函数释放内存*/
    free(description);
}