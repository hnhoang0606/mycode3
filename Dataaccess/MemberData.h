#ifndef _DATAACCESS_MEMBERDATA_H_
#define _DATAACCESS_MEMBERDATA_H_
#include "../Object/Member.h"
#include <iostream>
#include <string >
#include <vector>
#include <fstream>
using namespace std;

class MemberData
{
    vector<Member> _data;
    int MaxId;

    public:
        MemberData();
        MemberData(string filename);
        void SetMaxID(int i);
        int GetSize();
        Member Get(int i);
        int GetMaxId();
        int PushBack(Member member);
        int Export(string filename);
        void Create(Member member);
        void Edit(Member &member, int i);
        int Delete(int &i);
};
#endif