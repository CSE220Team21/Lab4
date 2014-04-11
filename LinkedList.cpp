//Mike Mayr (MMayr15), Chalie Crow (LevenBravo)
//Team 21
//https://github.com/CSE220Team21/Lab4
//LinkedList.cpp

#include "LinkedList.h"


LinkedList::LinkedList()
{
	lineCount = 0; //sets lineCount to 0
	nextLine = NULL; //sets "next pointer" to NULL
}

LinkedList::~LinkedList(){}

void LinkedList::addLineToList(int newLine)
{
	LinkedList *currentLine; //current object pointer
	LinkedList *previousLine; //previous object pointer
	LinkedList *node2 = new LinkedList; //creates "node2" LinkedList object
	node2->lineCount = newLine; //sets line number to next integer
	previousLine = NULL;

	if(this->nextLine == NULL)
	{
		this->nextLine = node2;
	}
	else
	{
		currentLine = this;
		while(currentLine != NULL)
		{
			previousLine = currentLine;
			currentLine = currentLine->nextLine;
		} //end of while
		previousLine->nextLine = node2;
		node2->nextLine = currentLine;
	} //end of else
} //end method addLineToList

void LinkedList::printList()
{

	LinkedList *currentLine;
	currentLine = this;

	while(currentLine != NULL)
	{
		printf("%d\t", currentLine->lineCount); //prints current node Line#
		currentLine = currentLine->nextLine; //sets current object to the next one
	} //end while
} //end method printList

void LinkedList::killList() //deletes objects
{
	LinkedList *tempPtr;
	tempPtr = NULL;
	while(this->nextLine != NULL)
	{
		tempPtr = this->nextLine;
		this->nextLine = tempPtr->nextLine;
		delete tempPtr;	
	}
} //end killList()

void LinkedList::set(int lineCount)
{
	this->lineCount = lineCount;
}

LinkedList* LinkedList::getNext() {
	return this->nextLine;
}

int LinkedList::getLine() {
	return this->lineCount;
}
