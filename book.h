#ifndef BOOKINHININCLUDED
#define BOOKINHININCLUDED
#include <string>
#include <iostream>
#include "Izdanie.h"
using namespace std;
class book: public Izdanie{
protected:
    int pagescount;
    string author;
public:
    book();
    book(string const nameIN, int const yearIN, int const pagescountIN, string const authorIN );
    book(const book &rey);

    void SetPagescount (int const PagescountIN);
    int GetPagescount () const;
    void SetAuthor(string const authorIN);
    string GetAuthor() const;
    void print()const;
    book &operator = (const book &rey);
};

#endif // BOOKINHININCLUDED
