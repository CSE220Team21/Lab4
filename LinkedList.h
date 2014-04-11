//Mike Mayr (MMayr15), Chalie Crow (LevenBravo)
//Team 21
//https://github.com/CSE220Team21/Lab4
//bTree.cpp

#ifndef _Lab4_LinkedList
#define _Lab4_LinkedList

#include <iostream>
#include "common.h"


using namespace std;

class LinkedList
{

	private:
		int lineCount; //integer for line number
		LinkedList *nextLine; //pointer for next object
		LinkedList *currentLine; //pointer for current object

	public:
		LinkedList(); //constructor
		~LinkedList(); //destructor
		
		void addLeafToList(int newLine);
		void printList();
		void deleteList();
		void set(int line_Number);
};

#endif
