#pragma once
#include "Node.h"


class Topic : public Node
{
public:
	Topic(void);
	~Topic(void);
	void add(Node* x);
	void print(int space);
};

