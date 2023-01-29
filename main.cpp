#include <iostream>
#include "memory.cpp"
#include "response.cpp"
#include "date.h"
#include "user.h"
#include "date.h"

using namespace std;

memory mem;
book B;
user U;
user thisUser;

user login_handler()
{
    string username,password;
    while (true)
    {
        cout << "Enter your username:";
        cin >> username;
        cout << "Enter your password";
        cin >> password;
        response<user> res = U.login(username,password,mem);
        cout << res.message << endl;

        if(res.succeeded)
            return res.data;
        
        cout << "Retry your login process" << endl;
    }
    
}

void show_commands()
{
    cout << "Please Enter the number of the command that you want to execute:";
    if(thisUser.is_admin().data)
        show_admin_commands();
    else
        show_user_commands();
}

void show_admin_commands()
{

}

void show_user_commands()
{

}


int main()
{
    B.load_books(mem);
    U.load_users(mem);

    thisUser = login_handler();


    return 0;
}
