#include <iostream>

using namespace std;


template <typename T>
class response
{
public:
    bool succeeded;
    string message;
    T data;

    response(bool s,string m,T data):succeeded(s),message(m),data(d){}

};

class short_response
{
public:

    short_response(bool s,string m):succeeded(s),message(m){}

    bool succeeded;
    string message;
};

