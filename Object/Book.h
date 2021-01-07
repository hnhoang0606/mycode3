#ifndef _OBJECT_BOOK_H
#define _OBJECT_BOOK_H

#include <iostream>
#include <string>
using namespace std;

class Book
{
    private:
        int Id;
        int BookId;
        string BookName;
    public:
        Book();
        Book(int id,int bookId, string bookName);
        int GetId();
        int GetBookId();
        string GetBookName();
        void SetID(int id);
        void SetBookId(int id);
        void SetBookName(string s);
        string Tostring();

};

#endif