#include <iostream>
#include <string> 
using namespace std;

class Node {
public:
	string info;
	Node* leftchild;
	Node* rightchild;

	// Constructor for the node class
	Node(string i, Node* l, Node* r) {
		info = i;
		leftchild = l;
		rightchild = r;
	}
};

class BinaryTree {
public:
	Node* ROOT;

	BinaryTree()
	{
		ROOT = NULL; //Initializing ROOT to NULL
	}

	void insert(string element) //Insert a node in the binary search tree
	{
		Node* newNode = new Node(element, NULL, NULL); //Allocate memory for the new node
		newNode->info = element; //Assign velue to the data field of the new node
		newNode->leftchild = NULL; //Make the left child of the node point to NULL
		newNode->rightchild = NULL; //Make the right child of the node point to NULL

		Node* parent = NULL;
		Node* currentNode = NULL; 
		search(element, parent, currentNode); //Locate the node which will be the parent of the node to be inserted
		
		if (parent == NULL) //If the parent is NULL (Tree is Empty)
		{
			ROOT = newNode; //Mark the node as ROOT
			return; //exit
		}

		if (element < parent->info) //if the value is in the datae field of the of the new node is less than that of of the parent
		{
			parent->leftchild = newNode; //Make the left child of the parent point to the new node
		}
		else if (element > parent->info) //if the value in the data field of the new node is greater than that of the parent
		{
			parent->rightchild = newNode; //Make the right child of the parent point to the new node
		}
	
	}

	void search(string element, Node*& parent, Node*& currentNode)
	{
		//this function searches the currentnode of the specified node as well as the current node of its parent
		currentNode = ROOT;
		parent -= NULL;
		while ((currentNode != NULL) && (currentNode->info != element))
		{
			parent = currentNode;
			if (element < currentNode->info)
				currentNode = currentNode->leftchild;
			else
				currentNode = currentNode->rightchild;
		}
	}

	void inorder(Node* ptr)
	{
		if (ROOT == NULL)
		{
			cout << "Tree is empty" << endl;
			return;
		}
		if (ptr != NULL)
		{
			inorder(ptr->leftchild);
			cout << ptr->info << " ";
			inorder(ptr->rightchild);
		}
	}
	void preorder(Node* ptr) 
	{
		if (ROOT == NULL)
		{
			cout << "Tree is empty" << endl;
			return;
		}
		if (ptr != NULL)
		{
			cout << ptr->info << " ";
			preorder(ptr->leftchild);
			preorder(ptr->rightchild);
		}
	}
};