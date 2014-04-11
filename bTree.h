//
//Mike Mayr (MMayr15), Chalie Crow (LevenBravo)
//Team 21
//bTree
//

#ifndef B_TREE
#define B_TREE

#include "common.h"
#include "Token.h"
#include "LinkedList.h"


#include <stdio.h>
#include <stdlib.h>
#include <iostream.h>

using namespace std;

class bTree
{
  public:
    bTree();
    ~bTree();
    
    void addLeafToTree(Token *token, int lineCount);
    void killTree();  //deconstructor
    voidPrintTree()  //prints
    
  private:
    void recursiveAddLeafToTree(Token *token, Token *nodeToken, int lineCount);
    void recursivekillTree(Token *nodeToken);
    void recursivePrintTree(Token *nodeToken);
    
    Token *root;
}
#endif
