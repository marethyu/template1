#ifndef _A_H_
#define _A_H_

#include "component.h"

class Kontroller;

class A: Component
{
public:
    A(Kontroller *kontrol);
    ~A();
    void ident(bool b);
private:
    Kontroller *m_Kontrol;
};

#endif