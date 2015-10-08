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
	createNode(node);
	node->value = value;
	return node;
}/* -----  end of function createNewNodeValue  ----- */

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
 *         Name:  Remove
 *  Description: Removes a node from the BST 
 * =====================================================================================
 */
void Remove ( Node* node ){
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
	
	
}/* -----  end of function Remove  ----- */


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
 *         Name:  findMinValue
 *  Description: Returns the minimum value stored in the BST 
 * =====================================================================================
 */
int findMinValue ( Node* root ){
	return findMin(root)->value;
}/* -----  end of function findMinValue  ----- */
