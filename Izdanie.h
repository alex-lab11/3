#ifndef IZDANIE_H_INCLUDED
#define IZDANIE_H_INCLUDED
#include <string>
using namespace std;
 class Izdanie
 {
protected:
    string name;
    int year;
public:
    Izdanie();
    Izdanie(string const nameIN, int const yearIN);
    Izdanie (const Izdanie &izdanie);
    void SetName(string const nameIN);
    string GetName() const;
    void SetYear(int const yearIN);
    int GetYear() const;
    virtual void print()const = 0;
    Izdanie &operator=(Izdanie const & izdanie);
 };

#endif // IZDANIE_H_INCLUDED
