#include "BookData.h"

BookData :: BookData()
{
    _data.resize(0);
    MaxId = 0;
}

BookData ::BookData(string filename)
{
    _data.resize(0);
    MaxId = 0;
    ifstream fileIn(filename);
    int Number = 0 ;
    fileIn >> Number;

    int Id;
    int BookId;
    string BookName;

    for( int i=0; i < Number; i++)
    {
        fileIn >> Id;
        fileIn >> BookId;
        fileIn >> BookName;

        Book book(Id,BookId,BookName);
        _data.push_back(book);
        MaxId = Id;
    }
    fileIn.close();
}

int BookData :: GetSize()
{
    return _data.size();
}

int BookData :: GetMaxID()
{
    return MaxId;
}

Book BookData :: Get(int i)
{
    return _data[i];
}
int BookData :: PushBack(Book book)
{
    MaxId ++;
    book.SetID(MaxId);
    _data.push_back(book);
    return MaxId;

}
int BookData :: Export(string filename)
{
    ofstream fileOut(filename);
    fileOut << _data.size() <<endl;

    for(Book book : _data)
    {
        fileOut << book.GetId() <<endl;
        fileOut << book.GetBookId() <<endl;
        fileOut << book.GetBookName() <<endl;
    }
    fileOut.close();
    return 1;
}

void BookData ::Create(Book book)
{
    BookData bookData("Book.txt");
    bookData.PushBack(book);
    bookData.Export("Book.txt");
}

void BookData :: Edit(Book &book, int id)
{
    BookData bookData("Book.txt");
    int Id;
    Id = bookData._data[id].GetId();
    book.SetID(Id);
    bookData._data[id] = book;
    bookData.Export("Book.txt");
}

void BookData ::Delete(int &id)
{
    BookData bookData("Book.txt");
    bookData._data.erase(bookData._data.begin()+ id -1);
    int maxId = _data.size();
    for(int i = id -1 ; i < maxId; i++)
    {
        bookData._data[i].SetID(i+1);
    }
    bookData.Export("Book.txt");
}
