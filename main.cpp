#include <iostream>
#include "Izdanie.h"
#include "jornal.h"
#include "book.h"
#include "newspaper.h"
#include <string>
using namespace std;

int main()
{
string nameIN;  string authorIN; string colorIN;
int yearIN, numberIN, pagescountIN, choice, formIN;
    //a:
    cout << "Input 1, to enter information about  jornal;" << endl;
    cout << "Input 2, to enter information about  book;" << endl;
    cout << "Input 3, to enter information about  newspaper;" << endl;

    cout <<"Input: ";
    cin >> choice;
    cout << endl;
    if ((choice>=4)||(choice<=1)){
    cout << "Please, input number from 1 to 4!"<< endl<<endl;
    }
    cout << endl;

    switch (choice){
    case 1:{
    cout << "You have chosen jornal." << endl;
    cout << "Input name  jornal: ";
    cin >> nameIN;
    cout << "Input year jornal: ";
    cin >> yearIN;
    cout << "Input number jornal: ";
    cin >> numberIN;
    cout << endl;

    jornal life(nameIN, yearIN, numberIN);
  life.print();
    cout << endl;
    cout << "Input 1, to enter information about  jornal;" << endl;
    cout << "Input 2, to enter information about  book;" << endl;
    cout << "Input 3, to enter information about  newspaper;" << endl;
    cout << "Input 4,finished work program." << endl;

    cout <<"Input: ";
    cin >> choice;
    cout << endl;
    //goto a;
}
    case 2:{
    cout << "You have chosen book." << endl;
    cout << "Input name book: ";
    cin >> nameIN;
    cout << "Input year book: ";
    cin >> yearIN;
    cout << "Input pagescount book: ";
    cin >> pagescountIN;
    cout << "Input author book: ";
    cin >> authorIN;
    cout << endl;

    book rey(nameIN, yearIN, pagescountIN, authorIN);
    rey.print();
     cout << endl;
    cout << "Input 1, to enter information about  jornal;" << endl;
    cout << "Input 2, to enter information about  book;" << endl;
    cout << "Input 3, to enter information about  newspaper;" << endl;
    cout << "Input 4,finished work program." << endl;

    cout <<"Input: ";
    cin >> choice;
    cout << endl;
    //goto a;
}
    case 3:{
    cout << "You have chosen newspaper." << endl;
    cout << "Input name newspaper: ";
    cin >> nameIN;
    cout << "Input year newspaper: ";
    cin >> yearIN;
    cout << "Input form newspaper: ";
    cin >> formIN;
    cout << "Input color newspaper: ";
    cin >> colorIN;
    cout << endl;
   newspaper knig(nameIN, yearIN, formIN, colorIN);
    knig.print();
      cout << endl;
    cout << "Input 1, to enter information about  jornal;" << endl;
    cout << "Input 2, to enter information about  book;" << endl;
    cout << "Input 3, to enter information about  newspaper;" << endl;
    cout << "Input 4,finished work program." << endl;


    cout <<"Input: ";
    cin >> choice;
    cout << endl;
    //goto a;
}
    case 4:{
    cout << "Goodbuy!";
    return 0;
}
}
}
