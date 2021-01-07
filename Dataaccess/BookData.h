#ifndef _DATAACCESS_BOOKDATA_H
#define _DATAACCESS_BOOKDATA_H

#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include "../Object/Book.h"
using namespace std;

class BookData
{
    private:
        vector<Book> _data;
        int MaxId;
    public:
        BookData();
        BookData(string filename);
        int GetSize();
        int GetMaxID();
        Book Get(int i);
        int PushBack(Book book);
        int Export(string filename);
        void Create(Book book);
        void Edit(Book &book, int id);
        void Delete(int &id);
};
#endif