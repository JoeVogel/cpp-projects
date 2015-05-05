/*
 * List.h
 *
 *  Created on: 04/05/2015
 *      Author: joevogel
 */

#include "Element.h"

#ifndef LIST_H_
#define LIST_H_

class List {
public:
	List();
	virtual ~List();

    void insertOnList(int data);
    void printList();
    char getBestWay(int current, int goal);

private:
	Element *head;
	Element *tail;
	
	Element *getHead();
    void setHead(Element *head);
    
    Element *getTail();
    void setTail(Element *tail);

};

#endif /* LIST_H_ */
