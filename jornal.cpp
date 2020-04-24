#include "jornal.h"
#include <iostream>
using namespace std;
jornal::jornal(string const nameIN, int const yearIN, int const numberIN):Izdanie(nameIN, yearIN){
    number = numberIN;
}

jornal::jornal():Izdanie()
{
	number = 0;
}
jornal::jornal(const jornal &life):Izdanie(life){
    number = life.number;
}

void jornal::SetNumber(int const numberIN)
{
    number = numberIN;
}

int jornal::GetNumber() const{
    return number;
}
void jornal::print() const{
cout << "name: " << name << endl;
cout << "year: " << year << endl;
cout << "number: " << number << endl;
}
jornal &jornal::operator = (const jornal &life)
 {
        Izdanie::operator =(life);
        this->number = life.number;
        return *this;
}
