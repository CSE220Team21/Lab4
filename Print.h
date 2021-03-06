//
//  Print.h
//  Lab4
//
//  Created by Bryce Holton.
//

#ifndef __Lab4__Print__
#define __Lab4__Print__

#include <iostream>
#include "common.h"
#include "Token.h"

using namespace std;

class Print
{
public:
    Print(char source_name[], char date[]);
    ~Print();
    
    void printLine(char line[]);
    void printToken(Token *token);
    void printPageHeader();
    void printPageHeader2();
    
private:
    string sourceFileName;
    string currentDate;
    int pageNumber;

};

#endif /* defined(__Lab4__Print__) */
