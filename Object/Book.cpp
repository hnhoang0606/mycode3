#include "Book.h"

Book:: Book()
{
    
}
Book :: Book(int id, int bookId, string bookName)
{
    Id = id ;
    BookId = bookId;
    BookName = bookName;
}

int Book::GetId()
{
    return Id;
}
int Book::GetBookId()
{
    return BookId;
}
string Book::GetBookName()
{
    return BookName;
}
void Book::SetID(int id)
{
    Id = id;
}
void Book::SetBookId(int bookid)
{
    BookId = bookid;
}
void Book::SetBookName(string  s)
{
    BookName = s;
}
string Book::Tostring()
{
    string s;
    s = "{ Id: " + to_string(Id) + ", ";
    s += "BookId: " + to_string(BookId) + ", ";
    s +=  "BookName: " + BookName;
    return s;
}