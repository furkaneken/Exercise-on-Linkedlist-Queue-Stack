#include <iostream>

using namespace std;

struct node
{
	int value;
	node* next;
	node(int a, node* n = nullptr) : value(a), next(n) {}
};

class Container
{
protected:
	node* head;
	node* tail;
public:
	Container() : head(nullptr), tail(nullptr) {}
	virtual ~Container() 
	{
		node* temp;
		while (head)
		{
			temp = head->next;
			delete head;
			head = temp;
		}
	}
	virtual void insertElement(int a) = 0; //insert, delete and print are pure functions
	virtual void deleteElement(int a) = 0; //they will be implemented in the subclasses
	virtual void print() = 0;
};

class LinkedList : public Container //this is a sorted linked list class inherited from the container class
{
public:
	LinkedList() : Container() {}
	virtual ~LinkedList() {cout << "Destructing linkedlist" << endl;}
	virtual void insertElement(int a);
	virtual void deleteElement(int a);
	virtual void print();
};

class Stack : public Container
{
public:
	Stack() : Container() {}
	virtual ~Stack() {cout << "Destructing stack" << endl;}
	virtual void insertElement(int a);
	virtual void deleteElement(int a);
	virtual void print();
};

class Queue : public Container
{
public:
	Queue() : Container() {}
	virtual ~Queue() {cout << "Destructing queue" << endl;}
	virtual void insertElement(int a);
	virtual void deleteElement(int a);
	virtual void print();
};