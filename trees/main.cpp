/**
 * @copyright : Ankit
 * 
*/

#include <iostream>
#include "BinaryTree/BinaryTree.h"
using std::cout;
Node *insert(Node *root, char data);

int main() {
  Node *root = NULL;
  root = insert(root, 10);
  root = insert(root, 15);
  root = insert(root, 3);
  root = insert(root, 17);
  root = insert(root, 16);
  root = insert(root, 1);
  root = insert(root, 4);
  root = insert(root, 2);
  root = insert(root, 20);
  root = insert(root, 14);
  root = insert(root, 13);

  // printNode(root);
  printBFSTree(root);

    return 0;
}
