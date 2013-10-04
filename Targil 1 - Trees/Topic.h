#pragma once
#include <string>
#include <vector>
#include "Vertex.h"

using namespace std;


class Topic : public Vertex
{
public:
	Topic(void);
	~Topic(void);
	string name;
	vector<Vertex*> subElements;
	bool addSubtopic();
};

