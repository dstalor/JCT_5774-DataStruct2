#pragma once
#include "stdafx.h"
#include "Library.h"

Library::Library(void)
{
	root=new Topic();
}


Library::~Library(void)
{
}

void Library::addSubject(string lct)
{
	cout<<"Please enter the name of the new subject:" << endl;
	Node * toAdd= new Topic();

	if(lct == "")//if its added to the main subject
	{
		root->add(toAdd);
		return;
	}
		
	Node * tmp= root->search(lct);

	if(tmp==NULL)
	{
		cout<<"ERROR: wrong location; subject wasn't added" << endl;
		system("pause");
		return;
	}
	string type = typeid(*(tmp->parent)).name();
	if (type == "class Topic")
	{
		tmp->add(toAdd);
	}
	else 
	{
		cout<<"ERROR: Bad parent!";
		system("pause");
	}

	return;
}
	
void Library::addBook (string lct)
{
	Node * tmp= root->search(lct);
	if(tmp==NULL)
	{
		cout<<"ERROR: wrong location; book wasn't added" << endl;
		system("pause");
		return;
	}

	cout<<"Please enter the name of the new book:" << endl;
	Node * toAdd= new Book();

	string type = typeid(*(tmp->parent)).name();
	if (type == "class Topic")
	{
		tmp->add(toAdd);
	}
	else
	{
		cout<<"ERROR: Bad parent!";
		system("pause");
	}

	return;
}

void Library::deleteBook (string bookToRemove)
{
		Node * tmpToDelete= root->search(bookToRemove);
		if(tmpToDelete==NULL)
		{
			cout<<"ERROR: book doesn't exist" << endl;
			system("pause");
			return;
		}
		Node * parent= tmpToDelete->parent;
		list <Node*>:: iterator it=parent->sons.begin();
		while(it!=parent->sons.end())
		{
			if ((*it)->getName()==bookToRemove)
			{
				parent->sons.erase(it);
				it=parent->sons.end();
			}
			else it++;
		}
		delete tmpToDelete;
	
}
	
void Library::printAll()
{
	if( root->sons.empty()) 
	{
		cout<<"ERROR: the library is empty" << endl;
		system("pause");
		return;
	}
	root->print(0);
}
	
void Library::printSubject( string sub)
{
	Node *tmp= root->search(sub);
	if( tmp==NULL)
	{
		cout<<"ERROR: this subject doesn't exist" << endl;
		system("pause");
		return;
	}
	tmp->print(0);
}
	
void Library::printBook (string bookName)
{
	Node * tmp=root->search(bookName);
	if( tmp==NULL)
	{
		cout<<"ERROR: this book doesn't exist" << endl;
		system("pause");
		return;
	}
	while( tmp->parent!=NULL)
	{
		cout<<tmp->parent->getName()<<"\\ ";
		tmp=tmp->parent;
	}
	cout<<endl;
}

string Library::getName()
{
	return root->name;
}