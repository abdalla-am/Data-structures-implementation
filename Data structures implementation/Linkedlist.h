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
	int lenght();
	void insertat(int, T);
	void deleteat(int);
	T at(int);
	void append(T);
	~linkedlist();
};

