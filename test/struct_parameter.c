/*
 @author: lindand  
 @date: 2024-02-13
 @description:结构作为函数参数
*/

#include "stdio.h"
#include "string.h"

struct Books {
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
};

//函数声明
void printBook(struct Books books);

int main() {
    struct Books Book1;  //声明Book1，类型为Books
    struct Books Book2;  //声明Book2，类型为Books

    /* Book1详述*/
    stpcpy(Book1.title, "C Programming");
    stpcpy(Book1.author, "Nuha Ali");
    strcpy(Book1.subject, "C Programming Tutorial");
    Book1.book_id = 6495407;

    /* Book2详述 */
    strcpy(Book2.title, "Telecom Billing");
    strcpy(Book2.author, "Zara Ali");
    strcpy(Book2.subject, "Telecom Billing Tutorial");
    Book2.book_id = 6495700;

    /*输出Book1信息*/
    printBook(Book1);

    /* 输出 Book2 信息*/
    printBook(Book2);

    return 0;
}

void printBook(struct Books book) {
    printf("Book title : %s\n", book.title);
    printf("Book author : %s\n", book.author);
    printf("Book subject : %s\n", book.subject);
    printf("Book book_id : %d\n", book.book_id);
}