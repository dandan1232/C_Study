/*
 @author: lindand  
 @date: 2024-02-13
 @description:结构体变量的初始化
*/

#include "stdio.h"

struct Books {
    char title[50];
    char author[50];
    char subject[100];
    u_long book_id;
} book = {"霸道总裁爱上我", "念安", "人文科学",220028};


int main() {
    printf("book_id:%d\ntitle:《%s》\nauthor:%s\nsubject:%s", book.book_id,book.title, book.author, book.subject);
}