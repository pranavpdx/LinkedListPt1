// LinkedListpt1.cpp : This file contains the 'main' function. Program execution begins and ends there.
// The program tests the linked lists created with Students Pranav, Jalen, Jason

#include <iostream>
#include "Node.h"
#pragma warning(disable : 4996)
using namespace std;
// Function Protoypes
void add(Student* student);
void printList(Node* next);
// head pointer of the list
Node* head = NULL;
int main()
{
    // name is the character array that holds the Student's name
    char name[20];
    // adding variables to the linked list
    Student* jalen = new Student();
    strcpy(name, "Jalen");
    jalen->setName(name);
    add(jalen);
    Student* pranav = new Student();
    strcpy(name, "Pranav");
    pranav->setName(name);
    add(pranav);
    Student* jason = new Student();
    strcpy(name, "Jason");
    jason->setName(name);
    add(jason);
    // printing the list
    printList(head);
}

// adds a node to the Linked List
void add(Student* student){
    // has a current pointer to the begginng of the list
    Node* current = head;
    // if this is the first time adding to the list, it created an initial node with the student given and sets head equal to it
    if (current == NULL) {
        head = new Node(student);
    }
    // if this is not the first time adding to the list, it loops until it gets to the last node in the list, then...
    else {
        while (current->getNext() != NULL) {
            current = current->getNext();
        }
        // sets that last nodes pointer to a new node
        current->setNext(new Node(student));
    }
}
// prints all the student's names in the list
void printList(Node* next) {
    // before the head is printed, print "List: "
    if (next == head) {
        cout << "List: ";
    }
    // while next is not pointing to null, it runs through the linked list and prints the names
    if (next != NULL) {
        while (next->getNext() != NULL) {
            cout << next->getStudent()->getName() << " ";
            next = next->getNext();
        }
        // prints the last name in the list
        cout << next->getStudent()->getName() << " ";
    }
}


