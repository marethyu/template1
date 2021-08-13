#ifndef _COMPONENT_H_
#define _COMPONENT_H_

class Kontroller;

class Component
{
protected:
    Kontroller *m_Kontrol;
public:
    virtual void ident(bool b) = 0;
};

#endif