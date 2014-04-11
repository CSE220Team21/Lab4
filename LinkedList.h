//Mike Mayr (MMayr15), Chalie Crow (LevenBravo)
//Team 21
//https://github.com/CSE220Team21/Lab4
//LinkedList.h

#ifndef __Lab4__LinkedList
#define __Lab4__LinkedList

#include <iostream>
#include "common.h"


using namespace std;

class LinkedList
{

	private:
		int lineCount; //integer for line number
		LinkedList *followingObj; //pointer for next object
		LinkedList *leadingObj; //pointer for previous object
		LinkedList *presentObj; //pointer for current object

	public:
		LinkedList(); //constructor
		~LinkedList(); //destructor
		
		void addLineToList(int newLine);
		void killList();
		void printList();
		void set(int line_Number);
		LinkedList* getNextLine();
		int getLine();
};

#endif
