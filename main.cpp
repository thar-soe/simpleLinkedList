//Programmer: Thar Soe
//Simple Linked List Skeleton in C++

#include <cstdlib>
#include "List.h"

using namespace std;

int main (int argc, char** argv) 
{
	
	List Obj; 
	
	Obj.addNode(5); //creates list and puts the values 3
	Obj.addNode(23);
	Obj.addNode(67); 
	Obj.addNode(9);
	Obj.printList(); 
	
	Obj.delNode(67);
	Obj.printList(); 
	
	Obj.delNode(9);
	Obj.printList();
		
	Obj.delNode(1);
	Obj.printList();
	
	Obj.delNode(5);
	Obj.printList(); 
	
	
	return 0;
	
	
	
}



