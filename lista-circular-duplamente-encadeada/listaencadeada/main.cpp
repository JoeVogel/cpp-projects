#include <iostream>
#include "List.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	List list;
	
	for(int i = 359; i >= 0; i--)
	{
		list.insertOnList(i);
	}
	
	//list.printList();
	
	list.getBestWay(20, 50);
	list.getBestWay(10, 300);
	list.getBestWay(300, 350);
	list.getBestWay(350, 300);
	
	
	return 0;
}
