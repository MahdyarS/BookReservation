#include <iostream>
#include <vector>
#include <fstream>
#include "user.h"
#include "book.h"
#include "reservation_log.h"

class memory
{
public:
    vector<user> users;
    vector<book> books;
    vector<reservation_log> logs;

    response<book> getBookByIsbn(string isbn)
    {
        book empty_book;
        for (int i = 0; i < books.size(); i++)
        {
            if(books[i].ISBN == isbn)
                return response<book>(true,"",books[i]);
        }
        return response<book>(false,"Book Not Found...!",empty_book);
    }

    short_response rewrite_users()
    {
        fstream file;
        remove("users");
        file.open("users");
        if(!file)
            return short_response(false,"could not open users file successfully!");
        for (int i = 0; i < users.size(); i++)
        {
            file << users[i] << endl;
        }
        file.close();
        
    }
    short_response rewrite_books()
    {
        fstream file;
        remove("books");
        file.open("books");
        if(!file)
            return short_response(false,"could not open books file successfully!");
        for (int i = 0; i < books.size(); i++)
        {
            file << books[i] << endl;
        }
        file.close();
        
    }
    short_response rewrite_logs()
    {
        fstream file;
        remove("logs");
        file.open("logs");
        if(!file)
            return short_response(false,"could not open logs file successfully!");
        for (int i = 0; i < logs.size(); i++)
        {
            file << logs[i] << endl;
        }
        file.close();
        
    }

    short_response rewrite_all_files()
    {
        short_response res = rewrite_users();

        if(!res.succeeded)
            return res;

        res = rewrite_books();

        if(!res.succeeded)
            return res;
        
        res = rewrite_logs();

        if(!res.succeeded)
            return res;

    }
};




