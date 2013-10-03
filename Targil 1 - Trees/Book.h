#pragma once
#include <string>
#include "Vertex.h"

using namespace std;


class Book : public Vertex
{
public:
	Book(void);
	~Book(void);
	string title;
	string author;
	string publisher;
	char isbn[13];
	string description;
	string summary;
	string keywords;
};

