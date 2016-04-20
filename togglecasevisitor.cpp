#include "togglecasevisitor.h"
#include "component.h"
#include "leaf1.h"
#include "leaf2.h"

#include <string>
#include <cctype>

using std::string;

void ToggleCaseVisitor::visit(Component *component)
{
	if(dynamic_cast<Leaf1 *>(component))
	{
		int counter = 0;
		
		string newText = ((Leaf1 *)component)->text();

		for(auto iter = newText.begin(); iter != newText.end(); ++iter, ++counter)
		{
			if(counter & 1)
			{
				if(isalpha(*iter)) *iter &= ~(0x20);
			}
			else
			{
				if(isalpha(*iter)) *iter |= 0x20;
			}

		}

		((Leaf1 *)component)->setText(newText);

	}
	else if(dynamic_cast<Leaf2 *>(component))
	{
		int counter = 0;
		
		string newText = ((Leaf2 *)component)->text();

		for(auto iter = newText.begin(); iter != newText.end(); ++iter, ++counter)
		{
			if(counter & 1)
			{
				if(isalpha(*iter)) *iter &= ~(0x20);
			}
			else
			{
				if(isalpha(*iter)) *iter |= 0x20;
			}

		}

		((Leaf2 *)component)->setText(newText);

	}
}