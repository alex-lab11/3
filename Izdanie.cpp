#include "Izdanie.h"
#include <iostream>
using namespace std;
Izdanie::Izdanie(string const  nameIN, int const yearIN){
    year = yearIN;
    name = nameIN;
}
Izdanie::Izdanie(){
    name = "";
    year = 0;
}
Izdanie::Izdanie(Izdanie const &izdanie)
{
    this -> name = izdanie.name;
    this -> year = izdanie.year;
}

void Izdanie::SetYear(int const yearIN){
    year = yearIN;
}
void Izdanie::SetName(string const  name)
{
    this -> name = name;
}

 string Izdanie::GetName() const
    {
        return name;
    }
int Izdanie::GetYear() const{
    return year;
}
Izdanie & Izdanie ::operator = (const Izdanie &izdanie)
    {
        this->name     = izdanie .name;
        this->year     = izdanie .year;
        return *this;
    }
