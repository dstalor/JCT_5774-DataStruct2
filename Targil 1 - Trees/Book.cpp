#pragma once
#include "stdafx.h"
#include "Book.h"


Book::Book(void)
{
	cout<<"Please enter author:" << endl;
	getline(cin,author);
	cout<<"Please enter publisher:" << endl;
	getline(cin,publish);
	cout<<"Please enter ISBN code:" << endl;
	getline(cin,isbn);
	cout<<"Please enter a description of the book:" << endl;
	getline(cin,desc);
	cout<<"Please enter a short summary of the book:" << endl;
	getline(cin,summary);
	cout<<"Please enter a few keywords:" << endl;
	getline(cin,keyWords);	
}


Book::~Book(void)
{
}

void Book::add(Node* x)
{
}

Node* Book::search(string str)
{
	return NULL;
}

void Book::print(int space)
{
	for(int i=0;i<space;i++)
		cout<<"       ";
	cout<<name<<endl;
}
