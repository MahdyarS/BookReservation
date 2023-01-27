#include <iostream>
#include <vector>
using namespace std;

class invalid_date{};
class date
{
public:
    date();
    date(int d,int m,int y);
    void set_date(int d,int m,int y);
    int get_day(){return day;};
    int get_month(){return month;};
    int get_year(){return year;};
    static int get_count(){return countt;}
    bool is_leap_year();
    static bool is_leap_year(int y);
    bool is_end_of_the_month();
    bool is_end_of_year();
    void inc_one_day();
    void print_date();
    friend ostream& operator<<(ostream &out,date d);
private:
    static int countt;
    int day;
    int month;
    int year;
};
int date::countt=0;
/////////////////////////////////////////////
