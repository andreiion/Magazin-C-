#include <string.h>

#include "node.h"

Node::Node(char *n, int a) { //constructor
	name = new char[strlen(n) + 1];
	strcpy(name, n);
	this->age = a;
}

Node::~Node() { //destructor
	if (name != 0)
		delete[] name;
}

Node::Node(const Node& n) { //copy constructor
	name = new char[strlen(n.name) + 1];
	strcpy(name, n.name);
	age = n.age;
}


Node& Node::operator=(const Node& n) {
	if (this != &n) { //no assignment to itself
		if (name != 0)
			delete[] name;
		name = new char[strlen(n.name) + 1];
		strcpy(name, n.name);
		age = n.age;
	}
	return *this;
}

bool Node::operator==(const Node& p) {
	return strcmp(name, p.name) && (age == p.age);
}

bool Node::operator<(const Node& p) {
	return strcmp(name, p.name) < 0;
}

bool Node::operator>(const Node& p) {
	return !(*this == p) && !(*this < p);
}
