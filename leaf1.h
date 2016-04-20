#ifndef LEAF1_H
#define LEAF1_H

#include <string>

#include "component.h"

class Leaf1 : public Component
{
public:
	Leaf1(const string &text) : m_text(text) {};

	virtual void accept(IVisitor *visitor);
	
	void setText(const std::string &text) { this->m_text = text; }
	string text() { return this->m_text; }

private:
    string m_text;
};

#endif
