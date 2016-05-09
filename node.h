#pragma once
#ifndef NODE
#define NODE
class Node
{
public:
	char *name;
	int age;
	Node(char *n, int a); //constructor
	~Node(); //destructor
	Node(const Node& n); //copy constructor
	Node& operator=(const Node& n); //assignment operator
	bool operator==(const Node& p);
	bool operator<(const Node& p);
	bool operator>(const Node& p);
		
};
#endif