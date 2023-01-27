#include <iostream>
#include <vector>
#include "response.cpp"

using namespace std;

class book
{
private:
    string ISBN;
    string title;
    int shelf_number;
    string authors;
    int edition;
    string publisher;
    int published_year;
    int length;
    string subjects;
    bool is_borrowed;
public:
    book();//to create a user to use the empty object just to use the static methods. because the stupid c++ do not let us to use static methods without creating objs :/
    book(string isbn,string t,int s_num,string as,int edtn,string pblshers,int pu_year,int len,string subs);
    static response<vector<book>> search(string searchkey);
    static response<book> update_book(book book);
    static response<vector<book>> load_books();

};



