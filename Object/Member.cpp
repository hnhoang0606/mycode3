#include "Member.h"

Member :: Member()
{

}
Member :: Member(int id, int memberID,string memberName)
{
    Id = id;
    MemberID = memberID;
    MemberName = memberName;
}

int Member ::GetID()
{
    return Id;
}
int Member ::GetMemberID()
{
    return MemberID ;
}
string Member ::GetMemberName()
{
    return MemberName;
}

void Member ::SetID(int id)
{
    Id = id;
}
void Member ::SetMemberID(int memberID)
{
    MemberID = memberID;
}
void Member ::SetMemberName(string memberName)
{
    MemberName = memberName;
}
string Member ::Tostring()
{
    string s;
    s = "{ Id: " + to_string(Id) + ", ";
    s+= "MemberID: " + to_string(MemberID)+ ", ";
    s+= "MemberName: " + MemberName +" }";
    return s;
}