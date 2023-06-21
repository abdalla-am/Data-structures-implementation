#pragma once
//                      {1}                   //
template <class T>
class Queue
{
private:
	T* arr;               //the array at whitch elements will be stored (declared by a template as it be be a number or a char) 
	int elements;         //number of elements stored
	int lenght;           //capacity of the array
	int front;            // (front element)
	int back;             //at which last element in is stored (back element)

public:
	Queue();             //constructor 
	Queue(int);          //constructor (but for entering the size of the array)
	void enqueue(T);       //add an element to the end of the queue(back)
	void dequeue();        //remove the element at the front of the array
	T frontf();             //return the front element
	T backf();              //return the back element
	bool isfull();         //return if full
	bool isempty();          //return whether the queue is empty
	int lenghtf();          //return the number of elements

	~Queue();             //destructor
};

