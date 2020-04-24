#ifndef JORNAL_H_INCLUDED
#define JORNAL_H_INCLUDED
#include <string>
#include <iostream>
#include "Izdanie.h"
using namespace std;
class jornal: public Izdanie{
protected:
    int number;
public:
    jornal();
    jornal(string const nameIN, int const yearIN, int const numberIN);
    jornal(const jornal &life);

  void SetNumber (int numberIN);
   int GetNumber() const;
   void print()const;
   jornal &operator = (const jornal &life);
};

#endif // JORNAL_H_INCLUDED
