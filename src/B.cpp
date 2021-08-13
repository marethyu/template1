#include <iostream>

#include "B.h"
#include "Kontroller.h"

using namespace std;

B::B(Kontroller *kontrol)
{
    m_Kontrol = kontrol;
}

B::~B()
{
    
}

void B::ident(bool b)
{
    cout << "B::ident()" << endl;
    if (b) return;
    m_Kontrol->m_A->ident(true);
}