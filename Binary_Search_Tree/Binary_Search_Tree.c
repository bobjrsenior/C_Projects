/*
 * =====================================================================================
 *
 *       Filename:  Binary_Search_Tree.c
 *
 *    Description:  A simple C impolementation of a Binary Search Tree
 *
 *        Version:  1.0
 *        Created:  10/04/15 22:16:48
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Bobjrsenior (BOB), bobjrsenior@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */


#include "Binary_Search_Tree.h"

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  createNode
 *  Description: Uses a pointer to a node and modifies it with default values 
 * =====================================================================================
 */
void createNode ( Node* node ){
	node->value = 0;
	node->parent = NULL;
	node->leftChild = NULL;
	node->rightChild = NULL;
}/* -----  end of function createNode  ----- */


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  createNewNode
 *  Description: Creates a new Node and returns a pointer to it 
 * =====================================================================================
 */
Node* createNewNode (){
	Node* node = (Node*)malloc(sizeof(Node));
	if(node == NULL){
		printf("Malloc Failed: Possibly out of memory\n");
		return NULL;
	}
	createNode(node);
	return node;
}/* -----  end of function createNewNode  ----- */


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  createNewNodeValue
 *  Description: Created a new node with a given value 
 * =====================================================================================
 */
Node* createNewNodeValue ( int value ){
	Node* node = (Node*)malloc(sizeof(Node));
	if(node == NULL){
		printf("Malloc Failed: Possibly out of memory\n");
		return NULL;
	}
	createNode(node);
	node->value = value;
	return node;
}/* -----  end of function createNewNodeValue  ----- */


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  freeBST
 *  Description: Deallocates all Nodes in a BST 
 * =====================================================================================
 */
void freeBST ( Node* root ){
	if(root->leftChild != NULL){
		freeBST(root->leftChild);
	}
	if(root->rightChild != NULL){
		freeBST(root->rightChild);
	}
	free(root);
}/* -----  end of function freeBST  ----- */


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  setValue
 *  Description:  Sets the value of a node
 * =====================================================================================
 */
void setValue ( Node* node, int value ){
	node->value = value;
}/* -----  end of function setValue  ----- */


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  addNode
 *  Description: Adds a node to the BST 
 * =====================================================================================
 */
void addNode ( Node* root, Node* child ){
	if(root->value > child->value){
		if(root->leftChild != NULL){
			addNode(root->leftChild, child);
		}else{
			root->leftChild = child;
			child->parent = &root->leftChild;
		}
	}else{
		if(root->rightChild != NULL){
			addNode(root->rightChild, child);
		}else{
			root->rightChild = child;
			child->parent = &root->rightChild;
		}
	}
}/* -----  end of function addNode  ----- */


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  addNodeValue
 *  Description: Adds a node to the BST 
 * =====================================================================================
 */
void addNodeValue ( Node* root, int value ){
	addNode(root, createNewNodeValue(value));
}/* -----  end of function addNodeValue  ----- */


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  removeNode
 *  Description: Removes a node from the BST 
 * =====================================================================================
 */
void removeNode ( Node* node ){
	if(node->leftChild == NULL){
		if(node->rightChild == NULL){
			if(node->parent != NULL){
				*node->parent = NULL;
			}
			free(node);
		}else{
			if(node->parent != NULL){
				node->parent = &node->rightChild;
				node->rightChild->parent = node->parent;
			}else{
				node->rightChild->parent = NULL;
			}
			free(node);
		}
		
	}else{
		if(node->rightChild == NULL){
			if(node->parent != NULL){
				node->parent = &node->leftChild;
				node->leftChild->parent = node->parent;
			}else{
				node->leftChild->parent = NULL;
			}
			free(node);
		}else{
			//Find the min node in the left subtree and replace the current node with it	
		}
	}
	
	
}/* -----  end of function removeNode  ----- */


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  findMin
 *  Description: Returns a pointer to the Node with the minimum value in the BST 
 * =====================================================================================
 */
Node* findMin ( Node* root ){
	if(root->leftChild != NULL){
		return findMin(root->leftChild);
	}
	return root;
}/* -----  end of function findMin  ----- */


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  findMinNoRec
 *  Description:  (No Recursion) Returns a pointer to the Node with the minimum value in the BST
 * =====================================================================================
 */
Node* findMinNoRec ( Node* root ){
	while(root->leftChild != NULL){
		root = root->leftChild;
	}
	return root;
}/* -----  end of function findMinNoRec  ----- */


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  findMinValue
 *  Description: Returns the minimum value stored in the BST 
 * =====================================================================================
 */
int findMinValue ( Node* root ){
	return findMin(root)->value;
}/* -----  end of function findMinValue  ----- */


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  findMinValueNoRec
 *  Description: (No Recursion) Return the minimum value stored in the BST 
 * =====================================================================================
 */
int findMinValueNoRec ( Node* root ){
	return findMinNoRec(root)->value;
}/* -----  end of function findMinValueNoRec  ----- */


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  findMax
 *  Description: Returns a pointer to the Node with the maximum value in the BST 
 * =====================================================================================
 */
Node* findMax ( Node* root ){
	if(root->rightChild != NULL){
		return findMax(root->rightChild);
	}
	return root;
}/* -----  end of function findMax  ----- */


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  findMaxNoRec
 *  Description:  (No Recursion) Returns a pointer to the Node with the maximum value in the BST
 * =====================================================================================
 */
Node* findMaxNoRec ( Node* root ){
	while(root->rightChild != NULL){
		root = root->rightChild;
	}
	return root;
}/* -----  end of function findMaxNoRec  ----- */


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  findMaxValue
 *  Description: Returns the maximum value stored in the BST 
 * =====================================================================================
 */
int findMaxValue ( Node* root ){
	return findMax(root)->value;
}/* -----  end of function findMaxValue  ----- */


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  findMaxValueNoRec
 *  Description: (No Recursion) Return the maximum value stored in the BST 
 * =====================================================================================
 */
int findMaxValueNoRec ( Node* root ){
	return findMaxNoRec(root)->value;
}/* -----  end of function findMaxValueNoRec  ----- */
