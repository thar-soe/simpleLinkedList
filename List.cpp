#include <cstdlib>
#include <iostream>
#include "List.h"
using namespace std; 



List::List(){ //creates list object and initialize the private pointers
	
	head = NULL;
	current = NULL;
	temp = NULL;
	
}

void List::addNode(int addData) {
	
	//define the addNode function
	nodePtr n = new node; 
	n->next = NULL; 
	n->data = addData; //the node is going to hold whatever that's in the parameter
	
	if (head != NULL) // if a list has at least one element, then points to the current
	{
		current = head; 
		
		while (current->next != NULL) // while not at the end of the list
		{
			current = current->next;
			
		}
		
		current->next = n; // points to the new node 'n'
		
	}
	
	else {
		
		head = n; // the new node needs to be at the front of the list
		
		
	}

}


void List::delNode(int delData){
	
	nodePtr delPtr = NULL; 
	temp = head;
	current = head;
	//check to see if current node is what we want to delete
	
	while (current != NULL && current->data != delData) // to advance the current pointers
	{
		temp = current;
		current = current->next;
		
	}
	
	if (current == NULL) //passed through the entire list
	{
		cout << delData << "was not in the list. \n";
		
	}
	
	else if (delData == head)
	{
		head = head->next; //advances the head
		temp = NULL;
		
		
	}
	
	else
	{
		delData = current;
		current = current->next; // advances the current pointer to the next node
		temp->next = current;
		delete delPtr; 
		cout << "The Value " << delData << " was deleted! \n"; 
		
		
	}
	
}



void List::printList() {
	
	
	current = head;
	while (current != NULL)
	{
		
		cout << current->data << endl;
		current = current->next; 
		
	}
	
	
}