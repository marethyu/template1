#include <memory>

#include "kontroller.h"

using namespace std;

Kontroller::Kontroller()
{
    m_A = make_unique<A>(this);
    m_B = make_unique<B>(this);
}

Kontroller::~Kontroller()
{
    
}

void Kontroller::run()
{
    m_A->ident(false);
    m_B->ident(false);
}