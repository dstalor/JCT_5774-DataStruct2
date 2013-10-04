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
			if ((*it)->addSubtopic(toAdd,parent)) //if it returns succesful
			{
				return true;
			}
		}
		return false;
	}
}
