#include "stdafx.h"
#include "Topic.h"


Topic::Topic(void)
{
}


Topic::~Topic(void)
{
}

bool Topic::addVertex(Vertex* toAdd, const Topic* parent)
{
	if (parent == NULL) // shouldn't ever come to this, but just in case...
	{
		return false;
	}
	else if (parent == this)
	{
		subElements.push_back(toAdd);
		return true;
	}
	else
	{
		for (std::vector<Vertex*>::iterator it = subElements.begin() ; it != subElements.end(); ++it) // iterate through subElements
		{
			if (typeid(*it) == typeid(Topic*)) // first make sure it's a Topic pointer
			{
				if (((Topic*)(*it))->addVertex(toAdd,parent)) // try to add to this Topic, and if successful
				{
					return true;
				}
			} // no else - if not a Topic pointer, then move on to the next Vertex in the list
		}
		return false; // went through all Vertices and all came back false (no parent match)
	}
}