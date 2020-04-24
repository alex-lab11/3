#ifndef NEWSPAPER_H_INCLUDED
#define NEWSPAPER_H_INCLUDED
#include <string>
#include <iostream>
#include "Izdanie.h"
using namespace std;
class newspaper: public Izdanie{
protected:
    int form;
    string color;
public:
    newspaper();
    newspaper(string const nameIN, int const yearIN, int const formIN, string const colorIN);
    newspaper(const newspaper &knig);
    void SetForm (int const formIN);
    int GetForm() const;
    void SetColor(string const colorIN);
    string GetColor() const;
    void print()const;
    newspaper &operator = (const newspaper &knig);
};


#endif // NEWSPAPER_H_INCLUDED
