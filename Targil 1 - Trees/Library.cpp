#include "stdafx.h"
#include "Library.h"


Library::Library(void)
{
}


Library::~Library(void)
{
}


bool Library::addTopic(Topic* toAdd, const Topic* parent = NULL)
{
	if (parent = NULL) // this is a main topic of the library
	{ 
		topics.push_back(toAdd);
		return true;
	}
	else // it's a subtopic, go looking for where to put it
	{
		for (std::vector<Topic*>::iterator it = topics.begin() ; it != topics.end(); ++it)
		{
			if ((*it)->addVertex(toAdd,parent)) //if it returns succesful
			{
				return true;
			}
		}
		return false;
	}
}

bool Library::addBook(Book* toAdd, const Topic* parent = NULL)
{
	if (parent = NULL) // this is an illogical request
	{ 
		return false;
	}
	else
	{
		for (std::vector<Topic*>::iterator it = topics.begin() ; it != topics.end(); ++it)
		{
			if ((*it)->addVertex(toAdd,parent)) //if it returns succesful
			{
				return true;
			}
		}
		return false;
	}
}
