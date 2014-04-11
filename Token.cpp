//
//  Token.cpp
//  Lab4
//
//  Created by Bryce Holton.
//

#include "Token.h"

Token::Token()
{   
    leftLeaf = NULL;
    rightLeaf = NULL;// sets both to NULL 
    
}
Token::~Token()
{   
    //calls killList deletes each object on the list, going through each object and delete it from the heap
    //with a bayonette!
    lineCount.killList();
}
void Token::setCode(TokenCode newCode)
{
    this->code = newCode;
}
TokenCode Token::getCode()
{
    return this->code;
}
void Token::setType(LiteralType newType)
{
    this->type = newType;
}
LiteralType Token::getType()
{
    return this->type;
}
void Token::setLiteral(int newInteger)
{
    this->literal.integer = newInteger;
}
int Token::getIntLiteral()
{
    return this->literal.integer;
}
void Token::setLiteral(float newReal)
{
    this->literal.real = newReal;
}
float Token::getRealLiteral()
{
    return this->literal.real;
}
void Token::setLiteral(string newString)
{
    this->literal.stringLiteral = (char*)malloc(sizeof(char) * newString.length() + 1);
    strcpy(this->literal.stringLiteral, newString.c_str());
}
string Token::getStringLiteral()
{
    return string(this->literal.stringLiteral);
}
void Token::setTokenString(string s)
{
    this->tokenString = s;
}
string Token::getTokenString()
{
    return this->tokenString;
}

LinkedList Token::getList()
{
    return this -> lineCount;
}
void Token::setList(int newLine)
{
	lineCount.addLineToList(newLine);
}
void Token::setLine(int lineCount)
{
	this->lineCount.set(lineCount);

void Token::setList
//What methods am I missing to implement a binary tree.
Token *Token::getleftLeaf()
{
	return this->leftLeaf;
}
void Token::setleftLeaf(Token *newToken)
{
	this->leftLeaf = newToken;
}
Token *Token::getrightLeaf()
{
	return this->rightLeaf;
}
void Token::setrightLeaf(Token *newToken)
{
	this->rightLeaf = newToken;
}
