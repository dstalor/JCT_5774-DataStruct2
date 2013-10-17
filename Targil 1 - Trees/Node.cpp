#pragma once
#include "stdafx.h"
#include "Node.h"
#include "Topic.h"

Node::Node(void)
{
	getline(cin,name);
	parent=NULL;
}


Node::~Node(void)
{
}

string Node::getName()
{ 
	return name;
}

void Node::setName(string str)
{ 
	name=str;
};

Node* Node::search(string str)//if it doesn't find anything, it returns a NULL
{
	if( sons.empty())
	{
		return NULL;
	}
	list <Node*>:: iterator it=sons.begin();
	while(it!= sons.end())
	{
		if( (*it)->getName()==str)
		{
			return *it;
		}
		string type = typeid(**it).name();
		if(type == "class Topic")
		{
			if( ! (*it)->sons.empty() ) 
			{
				Node *tmp=(*it)->search(str);
				if(tmp!=NULL)
					return tmp;
			}
		}
		it++;
	}
		
	return NULL;
}
