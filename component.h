#ifndef COMPONENT_H
#define COMPONENT_H

#include <string>

using std::string;

class IVisitor;

class Component
{
public:
	virtual ~Component() { }

	virtual void accept(IVisitor *visitor) = 0;

    virtual string text() { return ""; };
	virtual void add(Component *component) { }
	virtual void remove(Component *component) { }
};

#endif
