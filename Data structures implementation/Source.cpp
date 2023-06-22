#include<iostream>

#include"Stack.h"
#include"Stack.cpp"

#include"Queue.h"
#include"Queue.cpp"

#include"linkedlist.h"
#include"linkedlist.cpp"

using namespace std;
int main()
{ 
	
	
	cout << "                                   Data structures      " << endl;
	cout << endl;
	cout << endl;
	
	
	//Stack
	Stack <int> s;
	s.push(10);
	s.push(20);
	s.push(30);
	cout << "///////////////////////////////////    STACK    \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\ " << endl;
	cout << "Stack lenght :" << s.lenght() << endl;
	cout << "Stack elements :" << endl;
	while (!s.isempty())
	{
		cout << s.top() << endl;
		s.pop();

	}
	cout << endl;

	//Queue
	Queue <int> q;           //back             front
	q.enqueue(10);             //third    second    first   
	q.enqueue(20);             // 7        6         5
	q.enqueue(30);            // ------------------>

	cout << "///////////////////////////////////    QUEUE    \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\ " << endl;
	cout << "Queue lenght is " << q.lenghtf() <<endl;
	cout << "Queue result is :" << endl ;
	while (!q.isempty())
	{
		cout << q.frontf() << endl;
		q.dequeue();
	}
	cout << endl;



	cout <<"///////////////////////////////////    LinkedList    \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\ " << endl;
	linkedlist<int> l;

	l.append(10);
	l.append(20);
	l.append(30);
	l.append(40);
	cout << "creating a linkedlist with some elements :" << endl;
	cout << "Lenght of the linkedlist: " << l.lenght() << " elements" << endl;
	for (int i = 0; i < l.lenght(); i++)
	{
		cout << l.at(i);
		if (i < l.lenght() - 1)
		{
			cout << " ---> ";
		}
	}
	cout << endl;
	cout << endl;


	l.deleteat(1);
	cout << "After deletion :" << endl;
	cout << "Lenght of the linkedlist: " << l.lenght() << " elements" << endl;
	for (int i = 0; i < l.lenght(); i++)
	{
		cout << l.at(i);
		if (i < l.lenght() - 1)
		{
			cout << " ---> ";
		}
	}
	cout << endl;
	cout << endl;


	l.insertat(1, 100);
	cout << "Insert an element of value 100 at position 1 :" << endl;
	cout << "Lenght of the linkedlist: " << l.lenght() << " elements" << endl;
	for (int i = 0; i < l.lenght(); i++)
	{
		cout << l.at(i);
		if (i < l.lenght() - 1)
		{
			cout << " ---> ";
		}
	}
	cout << endl;

	return 0;

}