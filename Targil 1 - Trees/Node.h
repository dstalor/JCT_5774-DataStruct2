#pragma once

class Node
{
public:
	string name;
	list<Node *> sons;
	Node * parent;

	Node(void);
	~Node(void);
	string getName();
	void setName(string str);
	virtual Node* search(string str);

	virtual void add(Node*)=0;
	virtual void print(int space)=0;
};

