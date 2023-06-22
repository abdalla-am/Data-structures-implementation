#pragma once
template <class T>
class ArrayList
{

	T* arr;
	int size, count;
public:
	ArrayList();                  //constructor
	int Length();                 //return no. of elements in the arraylist
	void Append(T);               //insert an element at last position in the arraylist
	void Expand();                //expand the arraylist size 
	T At(int);                    //return an element at the entered position
	void insertAt(int, T);        //insert an element at  acertain position
	void deleteAt(int);           //delete an element at  acertain position
	~ArrayList(void);             //destructor
};
