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
		search(element, perent, currentNode); //Locate the node which will be the parent of the node to be inserted
		
		

	
	
	}
};