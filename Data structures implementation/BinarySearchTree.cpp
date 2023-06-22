#include "BinarySearchTree.h"
#include <iostream>
#include <assert.h>
using namespace std;
template <class T>
Node<T>::Node()
{
	left = right = NULL;
}

template <class T>
Node<T>::Node(T val)
{
	value = val;
	left = right = NULL;
}

template <class T>
BinarySearchTree<T>::BinarySearchTree(void)
{
	root = NULL;
}

template <class T>
bool BinarySearchTree<T>::contains(T val)
{
	Node<T>* tmp = findNode(val);
	return (tmp != NULL);
}

template <class T>
Node<T>* BinarySearchTree<T>::findNode(T val)
{
	Node<T>* temp = root;
	while (temp != NULL)
	{
		if (temp->value == val)
		{
			return temp;
		}
		else if (temp->value < val)
		{
			//right
			temp = temp->right;
		}
		else
		{
			//left
			temp = temp->left;
		}
	}

	return temp;
}

template <class T>
void BinarySearchTree<T>::insert(T val)
{
	assert(contains(val) == false);

	Node<T>* nodeToBeAdded = new Node<T>(val);
	if (root == NULL)
	{
		root = nodeToBeAdded;
	}
	else
	{
		Node<T>* temp = root;
		while (true)
		{
			if (temp->value < val)
			{
				// right
				if (temp->right == NULL)
				{
					temp->right = nodeToBeAdded;
					break;
				}
				else
				{
					temp = temp->right;
				}
			}
			else
			{
				// left
				if (temp->left == NULL)
				{
					temp->left = nodeToBeAdded;
					break;
				}
				else
				{
					temp = temp->left;
				}
			}
		}
	}
}

template <class T>
void BinarySearchTree<T>::traverse(Order order)
{
	if (order == INORDER)
		inOrder(root);
	else if (order == PREORDER)
		preOrder(root);
	else
		postOrder(root);
}

template <class T>
void BinarySearchTree<T>::inOrder(Node<T>* node)
{
	if (node != NULL)
	{
		//left
		inOrder(node->left);
		//node
		std::cout << node->value << std::endl;
		//right
		inOrder(node->right);
	}
}

template <class T>
void BinarySearchTree<T>::preOrder(Node<T>* node)
{
	if (node != NULL)
	{
		std::cout << node->value << std::endl;
		preOrder(node->left);
		preOrder(node->right);
	}
}

template <class T>
void BinarySearchTree<T>::postOrder(Node<T>* node)
{
	if (node != NULL)
	{
		postOrder(node->left);
		postOrder(node->right);
		std::cout << node->value << std::endl;
	}
}

template <class T>
void BinarySearchTree<T>::deleteBST(Node<T>* node)
{
	if (!node)
		return;

	Node<T>* currentTreeNode = node;
	Node<T>* leftTreeNode = node->left;
	Node<T>* rightTreeNode = node->right;
	delete(currentTreeNode);
	deleteBST(leftTreeNode);
	deleteBST(rightTreeNode);
}

template <class T>
BinarySearchTree<T>::~BinarySearchTree(void)
{
	deleteBST(root);
}