#ifndef _KONTROLLER_H_
#define _KONTROLLER_H_

#include <memory>

using namespace std;

#include "A.h"
#include "B.h"

class Kontroller
{
public:
    Kontroller();
    ~Kontroller();
    void run();

    unique_ptr<A> m_A;
    unique_ptr<B> m_B;
};

#endif