#include "Ui.h"

void Ui :: CreateMember()
{
    MemberData memberData;
    Member member = EnterMemberInfor();
    memberData.Create(member);
    cout << "Data : "<<endl;
    DisplayMember();
}

void Ui :: DisplayMember()
{
    MemberData memberData("Member.txt");
    cout <<" Data in table " <<endl;
    for(int i = 0; i < memberData.GetSize(); i++)
    {
        Member member = memberData.Get(i);
        cout << member.Tostring() <<endl;
    }
}

void Ui ::EditMember()
{
    int choice;
    MemberData memberData;
    DisplayMember();
    cout << endl;
    cout <<"Pleasr Enter ID of table that you want to Edit: ";
    cin >> choice; choice --;
    cout <<endl;
    Member member = EnterMemberInfor();
    memberData.Edit(member,choice);
    DisplayMember();
}

void Ui :: DeleteMember()
{
    MemberData memberData("Member.txt");
    int choice;
    DisplayMember();
    cout <<" Enter ID of Table that you want to delete: "<<endl;
    cin >> choice; 
    memberData.Delete(choice);
    DisplayMember();
}

void Ui :: DisplayBook()
{
    cout <<" display book" <<endl;
    BookData bookData("Book.txt");
    for(int i = 0; i < bookData.GetSize(); i++)
    {
        Book book = bookData.Get(i);
        cout << book.Tostring() << endl;
    }
}

void Ui :: CreateBook()
{
    BookData bookData;
    cout << "Create Book" <<endl;
    Book book = EnterBookInfor();
    bookData.Create(book);
    DisplayBook();
}

void Ui ::EditBook()
{
    int id;
    BookData bookData;
    cout << "Enter id" <<endl;
    cin >> id; id --;
    Book book = EnterBookInfor();
    bookData.Edit(book,id);
    DisplayBook();

}

void Ui ::DeleteBook()
{
    int id;
    BookData bookData;
    DisplayBook();
    cout << "Enter Id that you want to delete: "<<endl;
    cin >> id;
    bookData.Delete(id);
    DisplayBook();
}

Book Ui :: EnterBookInfor()
{
    Book book;
    cout <<" Enter Book Infor" <<endl;
    int bookid; string bookname;
    cout << "enter BookId: ";
    cin >> bookid;
    book.SetBookId(bookid);
    cout << "enter BookId: ";
    cin >> bookname;
    book.SetBookName(bookname);
    return book;
}


Member Ui :: EnterMemberInfor()
{
    Member member;
    cout <<" Enter Member Infor" <<endl;
    int memberID; string MemberName;
    cout << "enter memberID: ";
    cin >> memberID;
    member.SetMemberID(memberID);
    cout << "Enter MemberName: ";
    cin >> MemberName;
    member.SetMemberName(MemberName);
    return member;
}

