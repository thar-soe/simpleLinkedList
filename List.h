#ifndef LIST_H
#define LIST_H

#include <iostream>
using namespace std;

class List{
	
private:
	
	typedef struct node{
		int data; 
		node* next;
	}* nodePtr;
	
	//typedef struct node* nodePtr; // allow to type nodePtr as the same as creating a node pointer
	
	nodePtr head; 
	nodePtr temp;
	nodePtr current; 
	
	

public: //this is where the functions go
	
	#include "List.cpp"
	
	List();// constructor for the nodePtrs 
	void addNode (int addData);
	void delNode (int delData); 
	void printList (); 
	
	
	
	
};

#endif


