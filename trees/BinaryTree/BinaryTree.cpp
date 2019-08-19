/**
 * @copyright : Ankit
 * 
*/

#include <iostream>
#include <queue>
using std::cout , std::endl , std::queue;

// #define NULL __null : in c++
#define __null 0

struct Node {
  int data;
  Node *left;
  Node *right;
};

void printNode(Node *);

Node *getNewNode() {
  Node *node = new Node();
  node->left = NULL;
  node->right = NULL;
  return node;
}

/*
 * Node* insert(Node* root , int data){
  Node* newNode = getNewNode();
  newNode->data = data;

  if(root->data > data){
     root->left = newNode;
  }else{
     root->right = newNode;
  }
   	  
  return newNode;	  
}
*
* */

// Function to Insert Node in a Binary Search Tree
Node *insert(Node *root, char data) {
  if (root == NULL) {
    root = new Node();
    root->data = data;
    root->left = root->right = NULL;
  } else if (data <= root->data) {
    root->left = insert(root->left, data);
  } else {
    root->right = insert(root->right, data);
  }
  return root;
}

/*
int main() {
  Node *root = NULL;
  root = insert(root, 10);
  root = insert(root, 15);
  root = insert(root, 3);

  printNode(root);

  return 0;
}
*/

// Visualize it

void printNode(Node *root) {
  Node* originalRoot = root;
  cout << "The Tree is" << endl;

  // Left Nodes
  cout << "LEFT NODES" << endl;
  while (root->left && root->left->data != NULL) {
    cout << root->left->data << endl;
    root = root->left;
  }
  // Reset root to original location
  root = originalRoot;
  // Root
  cout << "******** ROOT ******* NODE" << endl;
  cout << root->data << endl;

  // Right Nodes
  cout << "RiGHT NODES" << endl;
  while (root->right && root->right->data != NULL) {
    cout << root->right->data << endl;
    root = root->right;
  }
  // Reset root
  root = originalRoot;
}

void printBFSTree(Node *root) {
  queue<Node*> node_queue;

  node_queue.push(root);

  while (!node_queue.empty()) {
    Node* current_node = node_queue.front();
    cout << current_node->data;
    node_queue.pop();
    if (current_node && current_node->left != NULL) {
      node_queue.push(current_node->left);
    }
    if (current_node && current_node->right != NULL) {
      node_queue.push(current_node->right);
    }
    cout << endl;
  }
}

// TODO(ankit): BFS and DFS
