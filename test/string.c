/*
 @author: lindand  
 @date: 2024-02-10
 @description:
*/

#include "stdio.h"
#include <string.h>

int main() {
    char site[7] = {'H', 'E', 'L', 'L', 'O', '\0'};
    char site2[] = "world";
    printf("世界和平:%s %s", site, site2);


    char str1[14] = "ldd";
    char str2[14] = "nianan";
    char str3[14];
    int len;

    /* 复制 str1 到 str3 */
    strcpy(str3, str1);
    printf("strcpy( str3, str1) :  %s\n", str3);

    /* 连接 str1 和 str2 */
    strcat(str1, str2);
    printf("strcat( str1, str2):   %s\n", str1);

    /* 连接后，str1 的总长度 */
    len = strlen(str1);
    printf("strlen(str1) :  %d\n", len);


    return 0;
}