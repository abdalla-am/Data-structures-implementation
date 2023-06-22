#include "Stack.h"
#include <assert.h>

//                       {2}                            //

template<class M>
 Stack<M>::Stack()            //    constructor اول حاجة هتتنفذ في البرنامج
{
	elements = 0;             // still no values entered so elements =0; 
	capacity = 10;            //at first size of the dynamic array will be 10
	arr = new int[capacity];  //dynamic array initialization
}

template<class M>
Stack<M>::Stack(int size)
{
	arr = new M[size];
	elements = 0;
	capacity = size;

}

//                       {3}                              //
template<class M>
int Stack<M>::lenght()
{
	return elements;             //return the number of values stored
}

template<class M>
bool Stack<M>::isempty()
{
	return (elements == 0);   //return true if array is empty


	/*     if (elements == 0)
		   return true;
		   else
		   return false;
	*/
}

template<class M>
void Stack<M>::expand()
{
	capacity = capacity * 2;
	int* newarr = new int[capacity];
	for (int i = 0; i < elements; i++)
	{
		newarr[i] = arr[i];
	}
	delete[] arr;
	arr = newarr;
}

template<class M>
void Stack<M>::push(M val)
{
	if (elements == capacity)      // if array is full of elements , expand the array
		expand();
	arr[elements] = val;           // put the new number in the index of (elements)
	elements++;                    //elements will be increased by one
}

template<class M>
void Stack<M>::pop()
{                                  // should #include <assert.h>
	assert(elements != 0);        // لازم اللي بين القوسين يطلع ترو غير كدة هيديني ايرور
	elements--;
}

template<class M>
M Stack<M>::top()
{
	assert(elements != 0);          //if there is no elements ,therefore no top element so error
	return arr[elements - 1];          //the top element will be with index (number of elements -1 , as the array is zero based)  
}

template<class M>
Stack<M>::~Stack()
{
	delete[]arr;
}
