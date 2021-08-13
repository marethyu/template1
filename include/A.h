#ifndef _A_H_
#define _A_H_

#include "component.h"

class A: public Component
{
public:
    A(Kontroller *kontrol);
    ~A();
    void ident(bool b);
private:
    Kontroller *m_Kontrol;
};

#endif