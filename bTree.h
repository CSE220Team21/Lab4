//Mike Mayr (MMayr15), Chalie Crow (LevenBravo)
//Team 21
//https://github.com/CSE220Team21/Lab4
//bTree

#ifndef B_TREE
#define B_TREE

#include "common.h"
#include "Token.h"


using namespace std;

class bTree
{
  public:
    bTree();
    ~bTree();
    
    void addLeafToTree(Token *token, int lineCount);
    void killTree();  //deconstructor
    void PrintTree();  //prints
    
  private:
    void recursiveAddLeafToTree(Token *token, Token *nodeToken, int lineCount);
    void recursivekillTree(Token *nodeToken);
    void recursivePrintTree(Token *nodeToken);
    
    Token *root;
};
#endif
