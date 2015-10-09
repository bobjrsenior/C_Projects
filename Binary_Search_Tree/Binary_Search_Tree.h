/*
 * =====================================================================================
 *
 *       Filename:  Binary_Search_Tree.h
 *
 *    Description:  The header file for a Binary Search Tree implementation in C
 *
 *        Version:  1.0
 *        Created:  10/04/15 22:26:56
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Bobjrsenior (BOB), bobjrsenior@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdlib.h>
#include <stdio.h>

struct Node {
	int value;
        struct Node** parent;
        struct Node* leftChild;
        struct Node* rightChild;
};                              /*  ----------  end of struct Node  ---------- */
  
typedef struct Node Node;


/*
 * ===  FUNCTION  ======================================================================
 *        Name:  createNode
 * Description:  Description: Uses a pointer to a node and modifies it with default values
 * =====================================================================================
 */
void createNode ( Node *node );

/*  
 *  ===  FUNCTION  ======================================================================
 *         Name:  createNewNode
 *  Description: Creates a new Node and returns a pointer to it
 *  =====================================================================================
 */
Node* createNewNode ();

/*
 * ===  FUNCTION  ======================================================================
 *        Name:  createNewNodeValue
 * Description: Created a new node with a given value
 *  ====================================================================================
 */
Node* createNewNodeValue ( int value );

/*
 * ===  FUNCTION  ======================================================================
 *       Name:  setValue
 * Description:  Sets the value of a node
 * =====================================================================================
 */
void setValue ( Node* node, int value );
 
/*
 * ===  FUNCTION  ======================================================================
 *       Name:  addNode
 * Description: Adds a node to the BST
 * =====================================================================================
 */
void addNode ( Node* root, Node* child );


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  addNodeValue
 *  Description:  Adds a node to the BST
 * =====================================================================================
 */
void addNodeValue ( Node* root, int value );


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  findMin
 *  Description: Returns a pointer to the Node with the minimum value in the BST 
 * =====================================================================================
 */
Node* findMin ( Node* root );


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  findMinNoRec
 *  Description: (No Recursion) Returns a pointer to the Node with the minimum value in the BST 
 * =====================================================================================
 */
Node* findMinNoRec ( Node* root );


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  findMinValue
 *  Description: Returns the minimum value stored in the BST 
 * =====================================================================================
 */
int findMinValue ( Node* root );


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  findMinValueNoRec
 *  Description: (No Recursion) Return the minimum value stored in the BST 
 * =====================================================================================
 */
int findMinValueNoRec ( Node* root );
