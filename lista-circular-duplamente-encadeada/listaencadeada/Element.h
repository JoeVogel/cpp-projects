/*
 * Element.h
 *
 *  Created on: 04/05/2015
 *      Author: joevogel
 */

#ifndef ELEMENT_H_
#define ELEMENT_H_

class Element {
public:
	Element();
	virtual ~Element();

	int getData() const;
    Element *getNext() const;
    Element *getPrev() const;

    void setData(int data);
    void setNext(Element *next);
    void setPrev(Element *prev);

private:
	int data;
	Element *next;
	Element *prev;
};

#endif /* ELEMENT_H_ */
