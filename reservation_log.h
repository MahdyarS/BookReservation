#include <iostream>
#include <vector>
#include "response.cpp"
#include "date.h"

using namespace std;

class reservation_log
{
    friend istream& operator>>(istream &in,reservation_log& log);
    friend ostream& operator<<(ostream &out,reservation_log log);

    string username;
    string book_ISBN;
    date borrowed_date;
    bool is_delivered;
    date delivery_date;
public:
    reservation_log();//to create a user to use the empty object just to use the static methods. because the stupid c++ do not let us to use static methods without creating objs :/
    reservation_log(string uname,string isbn,date bd,bool delivered,date dd);
    static response<vector<reservation_log>> load_logs();
    static response<bool> is_restricted(string username);
};

