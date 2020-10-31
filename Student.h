#pragma once
class Student
{
public:
	// variables in students, just name
	char* name;
	// gets the name of students
	char* getName();
	// sets the name of student
	void setName(char* name);
	// constructer and destructor, initializes and deletes pointers
	Student();
	~Student();
};

