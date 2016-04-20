#ifndef COMPOSITE_H
#define COMPOSITE_H

#include <list>

#include "component.h"

class Composite : public Component
{
public:
	Composite();
	Composite(Component*);
	~Composite();

	virtual void accept(IVisitor *visitor);
	virtual string text();

	virtual void add(Component *component);
	virtual void remove(Component *component);

	std::list<Component*> children() const;

private:
	std::list<Component*> m_childrenList;
}; 

#endif
