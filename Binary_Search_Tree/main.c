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


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  insertionTests
 *  Description: Tests if creating/inserting Nodes into a BST works 
 * =====================================================================================
 */
void insertionTests (  );


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  populateBST
 *  Description:  Populates a BST for testing and returns a pointer to it's root
 * =====================================================================================
 */
Node* populateBST (  );

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  minTests
 *  Description: Tests the BST functions for finding a minimum value/Node 
 * =====================================================================================
 */
void minTests();

int main(){
	insertionTests();
	minTests();	

//	printf("  %d\n %d %d\n%d %d  %d\n", root->value, root->leftChild->value, root->rightChild->value, root->leftChild->leftChild->value, root->leftChild->rightChild->value, root->rightChild->rightChild->value);
	return 0;
}


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  insertionTests
 *  Description: Tests if creating/inserting Nodes into a BST works 
 * =====================================================================================
 */
void insertionTests (  ){
	Node* root = createNewNode();	
	if(root->parent != NULL || root->leftChild != NULL || root->rightChild != NULL || root->value != 0){
		printf("FAILED: createNewNode() Test\n");
	}else{
		printf("PASSED: createNewNode() Test\n");
	}
	free(root);
	root = createNewNodeValue(7);
	if(root->parent != NULL || root->leftChild != NULL || root->rightChild != NULL || root->value != 7){
		printf("FAILED: createNewNodeValue() Test\n");
	}else{
		printf("PASSED: createNewNodeValue() Test\n");
	}
	free(root);
	root = (Node*)malloc(sizeof(Node));
	if(root == NULL){
		printf("Malloc Failed: May be out of memory\n");
		return;
	}
	root->parent = &root;
	root->leftChild = root;
	root->leftChild = root;
	root->value = 7;
	createNode(root);
	if(root->parent != NULL || root->leftChild != NULL || root->rightChild != NULL || root->value != 0){
		printf("FAILED: createNode() Test\n");
	}else{
		printf("PASSED: createNode() Test\n");
	}
	free(root);
}/* -----  end of function insertionTests  ----- */


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  populateBST
 *  Description: Populates a BST for testing and returns a pointer to it's root 
 * =====================================================================================
 */
Node* populateBST (  ){
	Node* root = createNewNodeValue(23);
	addNodeValue(root, 17);
	addNodeValue(root, 84);
	addNodeValue(root, 12);
	addNodeValue(root, 22);
	addNodeValue(root, 57);
	addNodeValue(root, 99);
	addNodeValue(root, 45);
	addNodeValue(root, 1);
	addNodeValue(root, 7);
	addNodeValue(root, 19);
	addNodeValue(root, 213);
	addNodeValue(root, 24);
	addNodeValue(root, 14);
	addNodeValue(root, 37);
	addNodeValue(root, 85);
	addNodeValue(root, 10);
	return root;
}/* -----  end of function populateBST  ----- */

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  minTests
 *  Description: Tests the BST functions for finding a minimum value/Node 
 * =====================================================================================
 */
void minTests ( ){
	Node* root = populateBST();
	Node* minNode = findMin(root);
	if(minNode->value != 1){
		printf("FAILED: findMin() test\n");
	}else{
		printf("PASSED: findMin() test\n");
	}
	minNode = findMinNoRec(root);
	if(minNode->value != 1){
		printf("FAILED: findMinNoRec() test\n");
	}else{
		printf("PASSED: findMinNoRec() test\n");
	}

	int minValue = findMinValue(root);
	if(minValue != 1){
		printf("FAILED: findMinValue() test\n");
	}else{
		printf("PASSED: findMinValue() test\n");
	}
	minValue = findMinValueNoRec(root);
	if(minValue != 1){
		printf("FAILED: findMinValueNoRec() test\n");
	}else{
		printf("PASSED: findMinValueNoRec() test\n");
	}
	free(root);
}/* -----  end of function minTests  ----- */
