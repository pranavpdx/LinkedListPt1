#include "Node.h"
Node::Node(Student* ptr1) {
	value = new Student();
	value = ptr1;
	ptr = NULL;
}

Node::~Node() {
	delete value;
	delete ptr;
}

Student* Node::getStudent() {
	return value;
}

Node* Node::getNext() {
	return ptr;
}

void Node::setNext(Node* next) {
	ptr = next;
}