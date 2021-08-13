#include <iostream>

#include "A.h"
#include "Kontroller.h"

using namespace std;

A::A(Kontroller *kontrol)
{
    m_Kontrol = kontrol;
}

A::~A()
{
    
}

void A::ident(bool b)
{
    cout << "A::ident()" << endl;
    if (b) return;
    m_Kontrol->m_B->ident(true);
}