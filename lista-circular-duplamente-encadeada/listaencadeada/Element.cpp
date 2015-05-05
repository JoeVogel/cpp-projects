/*
 * Element.cpp
 *
 *  Created on: 04/05/2015
 *      Author: joevogel
 */

#include "Element.h"

Element::Element() {


}

Element::~Element() {
	// TODO Auto-generated destructor stub
}

int Element::getData() const
{
    return data;
}

Element *Element::getNext() const
{
    return next;
}

Element *Element::getPrev() const
{
    return prev;
}

void Element::setData(int data)
{
    this->data = data;
}

void Element::setNext(Element *next)
{
    this->next = next;
}

void Element::setPrev(Element *prev)
{
    this->prev = prev;
}







