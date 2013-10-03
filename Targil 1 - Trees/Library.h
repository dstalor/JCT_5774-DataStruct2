#pragma once
#include "Topic.h"
class Library
{
public:
	Library(void);
	~Library(void);
	Topic* root;
	void addTopic(Topic* toAdd, const Topic* parent);
};

