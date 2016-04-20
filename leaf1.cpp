#include "leaf1.h"
#include "ivisitor.h"

void Leaf1::accept(IVisitor *visitor)
{
	visitor->visit(this);
}
