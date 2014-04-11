//Mike Mayr (MMayr15), Chalie Crow (LevenBravo)
//Team 21
//https://github.com/CSE220Team21/Lab4
//bTree.cpp

#include "bTree.h"


bTree::bTree() //bTree constructor
{
  root = NULL;
}
bTree::~bTree() //bTree destructor
{
  killTree(); //recursively deletes the bineary tree
}
void bTree::addLeafToTree(Token *token, int lineCount)
{
	if(root != NULL)
	{
		if(token != NULL)
		{
		recursiveAddLeafToTree(token, root, lineCount); //recursively adds the tree to the right place
		}
	}
	else
	{
		root = token;
		root->setleftLeaf(NULL);
		root->setrightLeaf(NULL);
	}
}
void bTree::recursiveAddLeafToTree(Token *token, Token *nodeToken, int lineCount)
{
	string first = token->getTokenString();
	string second = tokNode->getTokenString();
	if(first.compare(second) < 0)
	{
		if(nodeToken->getleftLeaf() != NULL)
		{
			revursiveAddLeafToTree(token, nodeToken->getleftLeaf(), lineCount);
		}
		else
		{
			nodeToken->setleftLeaf(token);
			nodeToken->getleftLeaf()->setleftLeaf(NULL);
			nodeToken->getleftLeaf()->setrightLeaf(NULL);

		}
	}
	else if(first.compare(second) > 0)
	{
		if(nodeToken->getrightLeaf() != NULL)
		{
			recursiveAddLeafToTree(token, nodeToken->getrightLeaf(), lineCount);
		}
		else
		{
			nodeToken->setrightLeaf(token);
			nodeToken->getrightLeaf()->setleftLeaf(NULL);
			nodeToken->getrightLeaf()->setrightLeaf(NULL);

		}
	}
	else if(first.compare(second) == 0)
	{
		nodeToken->setList(lineCount); //My mistake, figured it out
		delete token; //remove duplicate token from tree
	}
}
void bTree::killTree()
{
	recursivekillTree(root); //recursively deletes binary tree
}

void bTree::recursivekillTree(Token *nodeToken)
{
	if(nodeToken != NULL) //recursively deletes the binary tree
	{
		recursivekillTree(nodeToken->getleftLeaf());
		recursivekillTree(nodeToken->getrightLeaf());
		delete nodeToken;
	}
}

void bTree::printTree() //recursively print the tree
{
	recursivePrintTree(root);
}

void bTree::recursivePrintTree(Token *nodeToken)
{
	if(nodeToken != NULL) //print the tree recursively
	{
		recursivePrintTree(nodeToken->getleftLeaf());
		printf("%s\t\t\t",nodeToken->getTokenString().c_str() );
		nodeToken->getList().printList();  //My mistake, figured it out
		cout<<"\n";
		recursivePrintTree(nodeToken->getrightLeaf());
	}
}
