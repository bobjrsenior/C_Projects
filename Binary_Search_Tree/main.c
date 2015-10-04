/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  The main file in order to test the Binary_Search_Tree.c
 *
 *        Version:  1.0
 *        Created:  10/04/15 22:36:39
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Bobjrsenior (BOB), bobjrsenior@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>
#include "Binary_Search_Tree.h"

int main(){
	Node* root = createNewNodeValue(13);
	addNode(root, createNewNodeValue(8));
	addNode(root, createNewNodeValue(4));
	addNode(root, createNewNodeValue(12));
	addNode(root, createNewNodeValue(18));
	addNode(root, createNewNodeValue(21));
	
	printf("  %d\n %d %d\n%d %d  %d\n", root->value, root->leftChild->value, root->rightChild->value, root->leftChild->leftChild->value, root->leftChild->rightChild->value, root->rightChild->rightChild->value);
	return 0;
}
