#include <iostream>
#include <string>
#include <list>
#include <algorithm>

#include "leaf1.h"
#include "leaf2.h"
#include "composite.h"
#include "togglecasevisitor.h"

using namespace std;

int main()
{
    list<IVisitor *> visitorList;
    visitorList.push_back(new ToggleCaseVisitor);

    Component* componente1 = new Leaf1("Quadrado");
    Component* componente2 = new Leaf1("Triangulo");
    Component* componente3 = new Leaf2("Circulo");

    Component* composite1 = new Composite();

    composite1->add(componente1);
    composite1->add(componente2);
    composite1->add(componente3);

    std::for_each(visitorList.begin(), visitorList.end(), [&](IVisitor *visitor)
    {
        composite1->accept(visitor);
    });

    cout << composite1->text();

    return 0;
}
