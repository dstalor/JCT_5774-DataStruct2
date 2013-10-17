#pragma once
#include "Node.h"
#include "Topic.h"
#include "Book.h"

class Library
{
private:
	Node* root;
public:
	Library(void);
	~Library(void);
	void addSubject(string lct);
	void addBook (string lct);
	void deleteBook (string bookToRemove);
	void printAll();
	void printSubject( string sub);
	void printBook (string bookName);
	string getName();
};

