#pragma once
#include "Node.h"

class Book : public Node
{
private:
	string author, publish, isbn, desc, keyWords, summary;

public:
	Book(void);
	~Book(void);

	void add(Node* x);
	virtual Node* search(string str);
	void print(int space);
};

