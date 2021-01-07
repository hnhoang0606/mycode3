#ifndef _OBJECT_MEMBER_H_
#define _OBJECT_MEMBER_H_
#include <iostream>
#include <string >
using namespace std;

class Member
{
    int Id;
    int MemberID;
    string MemberName;

    public:
        Member();
        Member(int id, int memberID,string memberName);
        int GetID();
        int GetMemberID();
        string GetMemberName();
        void SetID(int id);
        void SetMemberID(int memberID);
        void SetMemberName(string name);
        string Tostring();
};
#endif