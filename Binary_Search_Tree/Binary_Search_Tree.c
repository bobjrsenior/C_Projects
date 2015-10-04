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
void createNode ( Node *node ){
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
	Node *node = (Node*)malloc(sizeof(Node));
	createNode(node);
	return node;
}/* -----  end of function createNewNode  ----- */
