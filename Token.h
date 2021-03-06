//
//  Token.h
//  Lab4
//
//  Created by Bryce Holton.
//

#ifndef __Lab4__Token__
#define __Lab4__Token__

#include <iostream>
#include <stdlib.h>
#include "common.h"
#include "LinkedList.h"

using namespace std;

/**************
 this is a valid Pascal token.  A token must have a literal type,
 a literal value, and a token code.
 ***************/
class Token
{
private:
    TokenCode code;
    LiteralType type;
    union
    {
        int integer;
        float real;
        char *stringLiteral;
    }
    literal;
    string tokenString;
    //What variables and methods am I missing to implement a binary tree.
    Token *leftLeaf;
    Token *rightLeaf;
    LinkedList lineCount;
    
public:
    Token();
    ~Token();
    void setCode(TokenCode newCode);
    TokenCode getCode();
    void setType(LiteralType newType);
    LiteralType getType();
    void setLiteral(int newInteger);
    int getIntLiteral();
    void setLiteral(float newReal);
    float getRealLiteral();
    void setLiteral(string newString);
    string getStringLiteral();
    void setTokenString(string s);
    string getTokenString();
    void setNextToken(Token *newToken);
    Token* getNextToken();
    //add getList()-----------------
    LinkedList getList();
    void setList(int newLine);
    //------------------------------
    Token* getleftLeaf();
    void setleftLeaf(Token *newToken);
    Token* getrightLeaf();
    void setrightLeaf(Token *newToken);
    void setLine(int lineCount);
};

#endif /* defined(__Lab4__Token__) */
