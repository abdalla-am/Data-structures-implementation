#include "Stack.h"
#include <assert.h>

//                       {2}                            //

Stack::Stack()            //    constructor اول حاجة هتتنفذ في البرنامج
{
	elements = 0;             // still no values entered so elements =0; 
	capacity = 10;            //at first size of the dynamic array will be 10
	arr = new int[capacity];  //dynamic array initialization
}

Stack::Stack(int size)
{
	arr = new int[size];
	elements = 0;
	capacity = 10;

}

//                       {3}                              //
int Stack::lenght()
{
	return elements;             //return the number of values stored
}

bool Stack::isempty()
{
	return (elements == 0);   //return true if array is empty


	/*     if (elements == 0)
		   return true;
		   else
		   return false;
	*/
}
void Stack::expand()
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


void Stack::push(int num)
{
	if (elements == capacity)      // if array is full of elements , expand the array
		expand();
	arr[elements] = num;           // put the new number in the index of (elements)
	elements++;                    //elements will be increased by one
}

void Stack::pop()
{                                  // should #include <assert.h>
	assert(elements != 0);        // لازم اللي بين القوسين يطلع ترو غير كدة هيديني ايرور
	elements--;
}

int Stack::top()
{
	assert(elements != 0);          //if there is no elements ,therefore no top element so error
	return arr[elements - 1];          //the top element will be with index (number of elements -1 , as the array is zero based)  
}

Stack::~Stack()
{
	delete[]arr;
}
