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

struct Node {
        struct Node *parent;
        struct Node *leftChild;
        struct Node *rightChild;
};                              /*  ----------  end of struct Node  ---------- */
  
typedef struct Node Node;


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  createNode
 *  Description:  Description: Uses a pointer to a node and modifies it with default values
 * =====================================================================================
 */
void createNode ( Node *node );

 
/*  
 *    * ===  FUNCTION  ======================================================================
 *    * *         Name:  createNewNode
 *     *  Description: Creates a new Node and returns a pointer to it 
 *      * =====================================================================================
 *       */
Node* createNewNode ();
