#include "linkedlist.h"

template<class T>
node<T>::node()
{
	val = 0;
	next = 0;
}

template<class T>
node<T>::node(T value)
{
	val = value;
	next = 0;
}

template<class T>
linkedlist<T>::linkedlist()
{
	head = tail = 0;
	elements = 0;
}

template<class T>
int linkedlist<T>::lenght()
{
	return elements;
}

template<class T>
void linkedlist<T>::append(T value)
{
	node<T>* newnode = new node<T>(value);
	if (elements == 0)
		head = tail = newnode;
	else
	{
		tail->next = newnode;
		tail = newnode;
	}
	elements++;
}

template<class T>
T linkedlist<T>::at(int pos)
{
	assert(pos >= 0 && pos < elements);
	node<T>* temp = head;
	for (int i = 0; i < pos; i++)
	{
		temp = temp->next;
	}
	return  temp->val;
}

template<class T>
void linkedlist<T>::insertat(int pos, T value)
{
	assert(pos >= 0 && pos < elements);

	node<T>* newnode = new node<T>(value);

	if (pos == 0)
	{
		newnode->next = head;
		head = newnode;
	}
	else
	{
		node<T>* temp = head;
		for (int i = 0; i < pos - 1; i++)
		{
			temp = temp->next;
		}
		newnode->next = temp->next;
		temp->next = newnode;
	}
	elements++;
}

template<class T>
void linkedlist<T>::deleteat(int pos)
{
	assert(pos >= 0 && pos < elements);
	node<T>* temp = head;

	if (pos == 0)
	{
		head = head->next;
		delete temp;
	}
	else
	{
		for (int i = 0; i < pos - 1; i++)
		{
			temp = temp->next;
		}
		node<T>* tobedeleted = temp->next;
		temp->next = tobedeleted->next;
		delete tobedeleted;

		if (pos == elements - 1)
			tail = temp;
	}
	elements--;
}

template<class T>
linkedlist<T>::~linkedlist()
{
	while (elements != 0)
		deleteat(0);
}
