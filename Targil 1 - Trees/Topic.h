#pragma once
#include <string>
#include <vector>
#include "Vertex.h"
#include "Book.h"

using namespace std;


class Topic : public Vertex
{
public:
	Topic(void);
	~Topic(void);
	string name;
	vector<Vertex*> subElements;
	bool addVertex(Vertex* toAdd, const Topic* parent);
};

