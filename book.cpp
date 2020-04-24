#include "book.h"
#include <iostream>
using namespace std;
book::book(string const nameIN, int const yearIN, int const pagescountIN, string const authorIN):Izdanie(nameIN, yearIN){
	pagescount = pagescountIN;
    author = authorIN;
}
book::book():Izdanie()
{
	author = "";
	pagescount = 0;
}
book::book(book const &rey):Izdanie(rey)
{
    this -> pagescount = rey.pagescount;
    this -> author = rey.author;
}
void book::SetAuthor(string const  authorIN)
{
    author = authorIN;
}
string book::GetAuthor() const
{
    return author;
}
void book::SetPagescount(int const pagescountIN)
{
    pagescount = pagescountIN;
}

int book::GetPagescount() const{
    return pagescount;
}
void book::print() const
 {
     cout << "Name: " << name << "\nYear: " << year << "\nPagesCount: " << pagescount <<"\nAuthor: " << author <<endl;
 }
book &book::operator = (const book &rey)
    {
        Izdanie::operator =(rey);
        this->pagescount   = rey.pagescount;
        this->author       = rey.author;
        return *this;
    }
