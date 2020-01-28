#include "container.h"

using namespace std;

void LinkedList::insertElement(int a)
{
	 if(head == nullptr) {
		 //If its head inserts
            head = new node(a);
            return;
        }
        node * current = head;
        node * previous = nullptr;
        while(current != nullptr) {
			//Compare 
			if(a < current->value) {
                node * newNode = new node(a);
                newNode->next = current;
				//Its the head node
                if(previous == nullptr) {
                    head = newNode;
                } else {
					//Its not head
                    previous->next = newNode;
                }
                return;
            }
			//Arrange links
            previous = current;
            current = current->next;
        }
        previous->next = new node(a);

	cout << a << " is inserted in the linked list" << endl;
}

void LinkedList::deleteElement(int a)
{
	if (head)
	{
		node* temp = head;
		if (temp->value == a) //if the number is at the first node
		{
			node* temp2 = head->next;
			delete head;
			head = temp2;
			cout << a << " is deleted from the linkedlist" << endl;
		}
		else //if not, continue to search
		{
			while (temp->next && temp->next->value != a) //temp will be the node before the wanted number
			{
				temp = temp->next;
			}
			if (!temp->next) //if we reached end of the list in the search
			{
				cout << "number not found in the linkedlist" << endl;
			}
			else //if we found the number
			{
				node* temp2 = temp->next->next;
				delete temp->next;
				temp->next = temp2;
				cout << a << " is deleted from the linkedlist" << endl;
			}
		}	
	}
	else
		cout << "the linkedlist is empty" << endl;
	return;
}

void LinkedList::print()
{
	cout << "Printing linked list" << endl;
	node* temp = head;
	while (temp)
	{
		cout << temp->value << " ";
		temp = temp->next;
	}
	cout << endl;
}

void Stack::insertElement(int a)
{
	if (!head) //if the list is empty
	{
		head = tail = new node(a); //it will be our first element
	}
	else //if the list has elements
	{
		node* temp = head; // we add new element to the begining
		head = new node(a,temp);
	}
	cout << a << " is inserted in the stack" << endl;
}

void Stack::deleteElement(int a)
{
	if (head)
	{
		node* temp = head;
		if (temp->value == a) //if the number is at the first node
		{
			node* temp2 = head->next;
			delete head;
			head = temp2;
			cout << a << " is deleted from the stack" << endl;
		}
		else //if not, continue to search
		{
			while (temp->next && temp->next->value != a) //temp will be the node before the wanted number
			{
				temp = temp->next;
			}
			if (!temp->next) //if we reached end of the list in the search
			{
				cout << "number not found in the stack" << endl;
			}
			else //if we found the number
			{
				node* temp2 = temp->next->next;
				delete temp->next;
				temp->next = temp2;
				cout << a << " is deleted from the stack" << endl;
			}
		}	
	}
	else
		cout << "the stack is empty" << endl;
	return;
}

void Stack::print()
{
	cout << "Printing stack" << endl;
	node* temp = head;
	while (temp)
	{
		cout << temp->value << " ";
		temp = temp->next;
	}
	cout << endl;
}

void Queue::insertElement(int a)
{
	if (!head) //if the list is empty
	{
		head = tail = new node(a); //it will be our first element
	}
	else //if the list has elements
	{
		tail->next = new node(a); //we add new element to the end
		tail = tail->next;
	}
	cout << a << " is inserted in the queue" << endl;
}

void Queue::deleteElement(int a)
{
	if (head)
	{
		node* temp = head;
		if (temp->value == a) //if the number is at the first node
		{
			node* temp2 = head->next;
			delete head;
			head = temp2;
			cout << a << " is deleted from the queue" << endl;
		}
		else //if not, continue to search
		{
			while (temp->next && temp->next->value != a) //temp will be the node before the wanted number
			{
				temp = temp->next;
			}
			if (!temp->next) //if we reached end of the list in the search
			{
				cout << "number not found in the queue" << endl;
			}
			else //if we found the number
			{
				node* temp2 = temp->next->next;
				delete temp->next;
				temp->next = temp2;
				cout << a << " is deleted from the queue" << endl;
			}
		}	
	}
	else
		cout << "the queue is empty" << endl;
	return;
}

void Queue::print()
{
	cout << "Printing queue" << endl;
	node* temp = head;
	while (temp)
	{
		cout << temp->value << " ";
		temp = temp->next;
	}
	cout << endl;
}