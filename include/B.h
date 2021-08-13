#ifndef _B_H_
#define _B_H_

#include "component.h"

class Kontroller;

class B: Component
{
public:
    B(Kontroller *kontrol);
    ~B();
    void ident(bool b);
private:
    Kontroller *m_Kontrol;
};

#endif