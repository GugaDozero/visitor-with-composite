#ifndef LEAF2_H
#define LEAF2_H

#include <string>

#include "component.h"

class Leaf2 : public Component
{
public:
	Leaf2(const string &text) : m_text(text) {};

	virtual void accept(IVisitor *visitor);
	
	void setText(const std::string &text) { this->m_text = text; }
	string text() { return this->m_text; }

private:
    string m_text;
};

#endif
