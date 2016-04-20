#ifndef TOGGLECASEVISITOR_H
#define TOGGLECASEVISITOR_H

#include "ivisitor.h"

class ToggleCaseVisitor : public IVisitor
{
public:
	void visit(Component *component);
};

#endif