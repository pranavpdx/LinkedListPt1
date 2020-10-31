#pragma warning(disable : 4996)
#include "Student.h"
#include <cstring>
Student::Student(){
	name = new char();
}
Student::~Student() {
	delete name;
}
char* Student::getName() {
	return name;
}
void Student::setName(char* name1) {
	name = new char[strlen(name1) + 1];
	strcpy(name, name1);
}