#include "composite.h"
#include "ivisitor.h"

#include <iostream>
#include <algorithm>

Composite::Composite()
{
}

Composite::Composite(Component *component)
{
	this->add(component);
}

Composite::~Composite()
{

	std::for_each(m_childrenList.begin(), m_childrenList.end(), [&](Component *component)
	{
		delete component;
	});

	m_childrenList.clear();

}

std::list<Component*> Composite::children() const
{
	return m_childrenList;
}

void Composite::accept(IVisitor *visitor)
{
	std::for_each(m_childrenList.begin(), m_childrenList.end(), [&](Component *component)
	{
		component->accept(visitor);
	});
}

string Composite::text()
{
	string text = "";
	for (std::list<Component*>::iterator iter = m_childrenList.begin(); iter != m_childrenList.end(); ++iter)
	{
		text += (*iter)->text();
		text += "\n";
	}

	return text;
}


void Composite::add(Component *component)
{
	if (component != this)
	{
		m_childrenList.push_back(component);
	}
}


void Composite::remove(Component *component)
{
	if(m_childrenList.empty())
	{
		std::cout << "Nao tem componentes para remover\n";
		return;
	}

	for(auto iter = m_childrenList.begin(); iter != m_childrenList.end(); ++iter)
	{
		if (*iter == component)
		{
			delete *iter;
			m_childrenList.erase(iter);
			return;
		}
	}

	std::for_each(m_childrenList.begin(), m_childrenList.end(), [&](Component *component)
	{
		component->remove(component);
	});
}
