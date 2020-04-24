#include "newspaper.h"
using namespace std;
newspaper::newspaper(string const nameIN, int const yearIN, int const formIN, string const colorIN):Izdanie(nameIN, yearIN){
	form = formIN;
	color = colorIN;
}
newspaper::newspaper():Izdanie()
{
	color = "";
	form = 0;
}
newspaper::newspaper(newspaper const &knig):Izdanie(knig)
{
    this -> form = knig.form;
    this -> color = knig.color;
}
void newspaper::SetColor(string color)
{
    color = color;
}

string newspaper::GetColor() const
{
    return color;
}
void newspaper::SetForm(int const  formIN)
{
    form = formIN;
}

int newspaper::GetForm() const{
    return form;
}
void newspaper::print() const
 {
     cout << "Name: " << name << "\nYear: " << year << "\nForm: " << form <<"\nColor: " << color <<endl;
 }
newspaper &newspaper::operator = (const newspaper &knig)
    {
        Izdanie::operator =(knig);
        this->form   = knig.form;
        this->color  = knig.color;
        return *this;
    }
