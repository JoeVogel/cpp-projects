/*
 * List.cpp
 *
 *  Created on: 04/05/2015
 *      Author: joevogel
 */

#include "List.h"
#include "Element.h"
#include <cstddef> //Para usar NULL
#include <iostream>
using namespace std;

List::List() {
	this->setHead(NULL);
	this->setTail(NULL);
}

List::~List() {}

Element *List::getHead()
{
    return this->head;
}

void List::setHead(Element *head)
{
    this->head = head;
}

Element *List::getTail()
{
	return this->tail;
}

void List::setTail(Element *tail)
{
	this->tail = tail;
}

void List::insertOnList(int data)
{
	Element *element = new Element();
	
	//preenche novo 
	element->setData(data);
	element->setPrev(NULL);
	//coloca o primeiro na lista como segundo
	element->setNext(this->getHead());
	
	//Se a lista não estiver vazia. Preenche o ponteiro prev do atual primeiro para o elemento novo
	if (this->getHead() != NULL)
	{
		this->getHead()->setPrev(element);		
	}
	
	//Coloca o novo como primeiro
	this->setHead(element);
	
	//Se o ultimo da lista for null. Quer dizer que a lista é nova, devido a isso adiciona o unico item da lista ao final também
	if (this->getTail() == NULL)
	{
		this->setTail(this->getHead());
	}
	//Se não. Significa que a lista não é nova, então aponta o prev do primeiro com o ultimo e o next do ultimo com o primeiro
	else
	{
		this->getHead()->setPrev(this->getTail());
		this->getTail()->setNext(this->getHead());
	}
}

void List::printList()
{
	Element *p = this->getHead();
	
	do 
	{
		cout << p->getData();
		p = p->getNext();
	}while(p != this->getHead());
}

char List::getBestWay(int current, int goal)
{
	Element *element = this->getHead();
	Element *currentElement = NULL;
	Element *goalElement = NULL;
	int rightCount = 0;
	int leftCount = 0;
	
	do 
	{
		element = element->getNext();
	}while(element->getData() != current);
	
	currentElement = element;
	
	do
	{
		rightCount++;
		currentElement = currentElement->getNext();
	}while(currentElement->getData() != goal);
	
	currentElement = element;
	
	do
	{
		leftCount++;
		currentElement = currentElement->getPrev();
	}while(currentElement->getData() != goal);
	
	cout << "\n\nDireita: " << rightCount;
	cout << "\nEsquerda: " << leftCount;
	
}

