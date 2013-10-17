#pragma once
#include "stdafx.h"
#include "Topic.h"


Topic::Topic(void)
{
}


Topic::~Topic(void)
{
}

void Topic::add(Node* x)
{
	x->parent=this;
	sons.push_back(x);
}

void Topic::print(int space)
{
	for(int i=0;i<space;i++)
			cout<<"       ";
	cout<<"["<<name<<"]"<<endl;
	if( sons.empty()) return;
	list <Node*>:: iterator it=sons.begin();
	while(it!= sons.end())
	{
		(*it)->print(space+1);
		it++;
	}
}