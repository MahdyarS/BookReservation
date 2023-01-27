#include <iostream>
#include "date.h"
#include "response.cpp"
#include "book.h"

using namespace std;

class user
{
private:
    string username;
    string firstName;
    string lastName;
    string password;
    date birthday;
    bool isAdmin;

public:
    user();//to create a user to use the empty object just to use the static methods. because the stupid c++ do not let us to use static methods without creating objs :/ 
    user(string uname,string fname,string lname, string psswd,string rpt_psswd,date bd);
    short_response add_user(string uname,string fname,string lname, string psswd,string rpt_psswd,date bd);
    static response<user> login(string usernaem,string password);
    response<user> update_user(string uname,string fname,string lname, string psswd,string rpt_psswd,date bd);
    short_response borrow(string isbn);
    short_response renew_borrowing(string isbn);
    short_response confirm_delivery(string isbn);
    response<book> add_book(book book);
    response<book> update_book(book book);
    short_response delete_user(string username);
    static response<vector<user>> load_users();

};


