#include "MemberData.h"

MemberData :: MemberData()
{
    _data.resize(0);
    MaxId = 0;
}
MemberData :: MemberData(string filename)
{
    _data.resize(0);
    MaxId = 0;
    ifstream fileIn(filename);
    int Number = 0 ;
    fileIn >> Number;
    int Id;
    int MemberID;
    string MemberName;

    for(int i = 0 ; i < Number; i++)
    {
        fileIn >> Id;
        fileIn >> MemberID;
        fileIn >> MemberName;
        Member member(Id,MemberID,MemberName);
        _data.push_back(member);
        MaxId = Id;
    }
    fileIn.close();
}

int MemberData ::GetSize()
{
    return _data.size();
}
Member MemberData ::Get(int i)
{
    return _data[i];
}

int MemberData ::GetMaxId()
{
    return MaxId;
}

void MemberData ::SetMaxID(int i)
{
    MaxId = i;
}

int MemberData ::PushBack(Member member)
{
    MaxId ++;
    member.SetID(MaxId);
    _data.push_back(member);
    return MaxId;
}

int MemberData :: Export(string filename)
{
    ofstream fileOut(filename);
    fileOut << _data.size()<<endl;

    for(Member member : _data )
    {
        fileOut << member.GetID() <<endl;
        fileOut << member.GetMemberID() <<endl;
        fileOut << member.GetMemberName() <<endl;
    }
    fileOut.close();
    return 1;
}

void MemberData :: Create(Member member)
{
    MemberData memberData("Member.txt");
    memberData.PushBack(member);
    memberData.Export("Member.txt");
}

void MemberData ::Edit(Member &member, int i)
{
    int Id;
    MemberData memberData("Member.txt");
    Id = memberData._data[i].GetID();
    member.SetID(Id);
    memberData._data[i] = member;
    memberData.Export("Member.txt");
}

int MemberData ::Delete(int &i)
{
    MemberData memberData("Member.txt");
    memberData._data.erase(memberData._data.begin() + i-1);
    int maxId = _data.size();
    for(int j = i-1 ; j < MaxId; j++)
    {
        memberData._data[j].SetID(j+1);
    }
    cout << "maxId tu tao"<<endl<< maxId <<endl;
    cout << "MaxId co dinh" << MaxId <<endl;
    memberData.Export("Member.txt");
    return 0;
}

