#include "leaf2.h"
#include "ivisitor.h"

void Leaf2::accept(IVisitor *visitor)
{
	visitor->visit(this);
}
