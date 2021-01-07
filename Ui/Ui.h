#ifndef _UI_UI_H_
#define _UI_UI_H_
#include "../Object/Member.h"
#include "../Object/Book.h"
#include "../Dataaccess/MemberData.h"
#include "../Dataaccess/BookData.h"
#include <iostream>
#include <string >
#include <vector>
#include <fstream>
using namespace std;

class Ui
{
    public:
        void CreateMember();
        void DisplayMember();
        Member EnterMemberInfor();
        Book EnterBookInfor();
        void EditMember();
        void DeleteMember();
        void DisplayBook();
        void CreateBook();
        void EditBook();
        void DeleteBook();
};
#endif