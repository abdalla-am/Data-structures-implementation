#pragma once
template<class M>
class Stack
{
	//                         {1}                          //
	M* arr;      //dynamic array
	int elements;  //number of values stored in the array
	int capacity;  //size of the array 

	//                            {3}                      //
public:
	Stack();             //constructor declaration
	Stack(int num);
	int lenght();          //return the number of elements 
	void push(M num);    // add element to the top of the stack
	void pop();            //remove the top element 
	M top();             //return the top element
	bool isempty();        //return whether the stack is empty
	void expand();         //increase the capacity of array if filled 

	~Stack();
};

