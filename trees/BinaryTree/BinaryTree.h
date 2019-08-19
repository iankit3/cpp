/**
 * @copyright : Ankit
 * 
*/

#ifndef BINARYTREE_BINARYTREE_H_
#define BINARYTREE_BINARYTREE_H_
#include <stdlib.h>
#include <iostream>

struct Node;
void printNode(Node *);
Node *insert(Node *root, char data);
void printBFSTree(Node *root);

#endif /* BINARYTREE_BINARYTREE_H_ */
