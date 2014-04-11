//Mike Mayr (MMayr15), Chalie Crow (LevenBravo)
//Team 21
//bTree.cpp

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
	string 1 = token->getTokenString();
	string 2 = tokNode->getTokenString();
	if(1.compare(2) < 0)
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
	else if(1.compare(2) > 0)
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
	else if(1.compare(2) == 0)
	{
		nodeToken->setList(lineCount); //----------------WHAT DID WE NAME THIS???----------------
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
		nodeToken->getList().printList();  //----------------WHAT DID WE NAME THIS???----------------
		cout<<"\n";
		recursivePrintTree(nodeToken->getrightLeaf());
	}
}
