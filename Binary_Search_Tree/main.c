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

void minTests(Node* root);

int main(){
	Node* root = createNewNodeValue(13);
	addNode(root, createNewNodeValue(8));
	addNode(root, createNewNodeValue(4));
	addNode(root, createNewNodeValue(12));
	addNode(root, createNewNodeValue(18));
	addNode(root, createNewNodeValue(21));
	
	minTests(root);	

//	printf("  %d\n %d %d\n%d %d  %d\n", root->value, root->leftChild->value, root->rightChild->value, root->leftChild->leftChild->value, root->leftChild->rightChild->value, root->rightChild->rightChild->value);
	return 0;
}


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  minTests
 *  Description: Tests the BST functions for finding a minimum value/Node 
 * =====================================================================================
 */
void minTests ( Node* root ){
	Node* minNode = findMin(root);
	if(minNode->value != 4){
		printf("FAILED: findMin() test\n");
	}else{
		printf("PASSED: findMin() test\n");
	}
	minNode = findMinNoRec(root);
	if(minNode->value != 4){
		printf("FAILED: findMinNoRec() test\n");
	}else{
		printf("PASSED: findMinNoRec() test\n");
	}

	int minValue = findMinValue(root);
	if(minValue != 4){
		printf("FAILED: findMinValue() test\n");
	}else{
		printf("PASSED: findMinValue() test\n");
	}
	minValue = findMinValueNoRec(root);
	if(minValue != 4){
		printf("FAILED: findMinValueNoRec() test\n");
	}else{
		printf("PASSED: findMinValueNoRec() test\n");
	}
}/* -----  end of function minTests  ----- */
