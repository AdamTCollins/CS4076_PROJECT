#ifndef EXCEPTION_H
#define EXCEPTION_H
#include <string>

using namespace std;


// Programmer Defined Exception

class exception
{
public:
    explicit exception(const string &);
    ~exception();
};


#endif // EXCEPTION_H
