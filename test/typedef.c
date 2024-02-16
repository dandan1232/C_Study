/*
 @author: lindand  
 @date: 2024-02-16
 @description:
*/

#include "stdio.h"
#include "string.h"

#define TRUE 1
#define FALSE 0

typedef struct Books
{
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
} Book;

int main() {
    Book book;

    strcpy(book.title, "C");
    strcpy(book.author, "Runoob");
    strcpy(book.subject, "编程语言");
    book.book_id = 12345;

    printf("书标题：%s\n", book.title);
    printf("书作者：%s\n", book.author);
    printf("书类目：%s\n", book.subject);
    printf("书ID：%d\n", book.book_id);

    printf("TRUE的值：%d\n", TRUE);
    printf("FALSE的值：%d\n", FALSE);

    return 0;
}