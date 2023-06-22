#pragma once
#include<assert.h>
#include<iostream>

template<class T>
class node
{
public:
	node<T>* next;
	T val;

	node();
	node(T);


};

template<class T>
class linkedlist
{
private:
	node<T>* tail;
	node<T>* head;
	int elements;

public:
	linkedlist();
	int lenght();                       //return the no. of elements in the list
	void insertat(int, T);              //to insert an element at a certain position
	void deleteat(int);                 //to delete an element at a certain position
	T at(int);                          //return an element at a certain position
	void append(T);                     //insert an element at the end of the list
	~linkedlist();
};

