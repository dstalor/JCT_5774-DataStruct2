#pragma once
#include "Topic.h"
class Library
{
public:
	Library(void);
	~Library(void);
	vector<Topic*> topics;
	bool addTopic(Topic* toAdd, const Topic* parent);
};

