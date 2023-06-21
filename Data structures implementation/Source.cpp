#include<iostream>

#include"Stack.h"

#include"Queue.h"
#include"Queue.cpp"

using namespace std;
int main()
{   //Stack
	Stack s1;
	s1.push(10);
	s1.push(20);
	s1.push(30);
	
	cout << "Queue result is :" << endl;
	while (!s1.isempty())
	{
		cout << s1.top() << endl;
		s1.pop();

	}
	

	//Queue
	Queue <int> q1;           //back             front
	q1.enqueue(10);             //third    second    first   
	q1.enqueue(20);             // 7        6         5
	q1.enqueue(30);            // ------------------>

	cout << "Queue result is :" << endl ;
	while (!q1.isempty())
	{
		cout << q1.frontf() << endl;
		q1.dequeue();
	}


	return 0;

}