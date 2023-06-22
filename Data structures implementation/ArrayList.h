#pragma once
template <class T>
class ArrayList
{

	T* arr;
	int size, count;
public:
	ArrayList();
	int Length();
	void Append(T);
	void Expand();
	T At(int);
	void insertAt(int, T);
	void deleteAt(int);
	~ArrayList(void);
};
