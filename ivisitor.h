#ifndef IVISITOR_H
#define IVISITOR_H

class Component;

class IVisitor
{
public:
    virtual void visit(Component *component) = 0;
};

#endif