<p><a href="https://www.asu.edu.eg/"><img align="right" src="https://ums.asu.edu.eg/images/logo.png" width="100" /></a></p>
<p><img align="right" src="https://upload.wikimedia.org/wikipedia/commons/1/18/ISO_C%2B%2B_Logo.svg" width="70" /></a></p>
<div align=left>
<h1>
  Data Structures implementation 
</h1>
  <h3>
    This repo implements many Data structures in a professinal way using C++ programming language .
  </h3>
 <h5>
    "Data structures" course at FCIS - ASU 
        (4th semester)
<div>
<br>
<br>

## **Why we need Data structure ?🤔**
### Data structures make it easy for users to access and work with the data they need in appropriate ways. Most importantly, data structures frame the organization of information so that machines and humans can better understand it.


## **List Of Implemented Algorithms:**
- [x] Stack
- [x] Queue
- [x] Array list
- [x] Linked list
- [x] Binary search tree

<br>
<br>

# **1️⃣Stack**

## **What is Stack?**
#### The stack data structure is a linear data structure that accompanies a principle known as **LIFO (Last In First Out)** . Real-life examples of a stack are a deck of cards, piles of books, piles of money, and many more.

![picture alt](https://cdn.programiz.com/sites/tutorial2program/files/stack.png "Stack data structure")


## **When we use Stack ?**
#### Stack data structures are useful when the order of actions is important. They ensure that a system does not move onto a new action before completing those before. Here are some common examples where a stack is used: 
 - Reversing
 - Undo/redo operations
 - Backtracking

## **What is the complexity when using Stack ?**
#### For the array-based implementation of a stack, the push and pop operations take constant time, i.e. `O(1)` , and it requires `O(N)` operations to display all elements of the Stack as we need to pop all elements in the stack .

## **Implementation of Stack can be done by using :**
- Array (used in the repo)
- Linked list

## **Operations need to be implemented to create a stack :**
 - lenght : return number of elements in the stack
 - Push : Add an element to the top of a stack
 - Pop : Remove an element from the top of a stack
 - Top : return the top element
 - Empty : Check if the stack is empty
 - Expand : increase the size of the array if Stack is full

## **STL used for Stack**
```bash
Stack <int> S;
S.push(1);
S.top()
S.pop();
```



## [Problems to solve on stack](https://www.w3resource.com/cpp-exercises/stack/index.php)

<br>
<br>

# **2️⃣Queue**

## **What is Queue?**
#### A Queue is defined as a linear data structure that is open at both ends and the operations are performed in First In First Out (FIFO) order.

![picture alt](https://media.geeksforgeeks.org/wp-content/cdn-uploads/20221213113312/Queue-Data-Structures.png "Queue data structure")

## **When we use Queue ?**
#### The basic appeal of a queue is that is a data structure that guarantees order and it guarantees a fair order. The first element that entered the Queue is the first element to be dequeued .

## **What is the complexity when using Queue ?**
#### For the array-based implementation of a Queue , the enqueue and dequeue operations take constant time, i.e. `O(1)` . 

## **Implementation of Queue can be done by using :**
- Array (used in the repo)
- Linked list
- Stack

 ## **Operations need to be implemented to create a queue :**
 - enqueue : Add element to the back
 - dequeue : Remove an element from the front 
 - frontf : Return the front element
 - backf : Return the back element
 - lenthf : return no. of elements in the queue
 - isempty : return true if queue is empty
 - isfull : return true if the queue is full
 
 ## **STL used for Queue**
```bash
//deque<T> Q;
queue<int> Q;
Q.push(10);
Q.push(20);
Q.push(30);
Q.size();
Q.front();
Q.back();
Q.pop();
```

## [Problems to solve on Queue ](https://www.w3resource.com/cpp-exercises/queue/index.php)
<br>
<br>

# **3️⃣Array list**
