#include "Queue.h"
#include "assert.h"
//                           {2}                           //
template <class T>
Queue<T>::Queue()
{
	lenght = 5;
	elements = 0;
	arr = new T[lenght];
	back = -1;
	front = -1;
}

template <class T>
Queue<T>::Queue(int size)
{
	lenght = size;
	elements = 0;
	arr = new T[size];
	back = -1;
	front = -1;
}

template<class T>
void Queue<T>::enqueue(T num)
{
	assert(!isfull());
	if (elements == 0)
	{
		front++;                       //front ++
	}
	back = (back + 1) % lenght;    //back ++  


	arr[back] = num;                   //put the element in the array
	elements++;                        //increase number of elements by one
}

template<class T>
void Queue<T>::dequeue()
{
	assert(!isempty());
	if (elements == 1)
	{
		back = -1;
		front = -1;
	}
	else
	{
		front = (front + 1) % lenght;
	}
	elements--;
}

template <class T>
T Queue<T>::frontf()
{
	assert(!isempty());
	return arr[front];
}

template <class T>
T Queue<T>::backf()
{
	assert(!isempty());
	return arr[back];
}

template <class T>
int Queue<T>::lenghtf()
{
	return elements;
}

template <class T>
bool Queue<T>::isempty()
{
	return (elements == 0);
}

template <class T>
bool Queue<T>::isfull()
{
	return (elements == lenght);
}

template<class T>
Queue<T> ::~Queue()
{
	delete[]arr;
}
