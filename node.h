#ifndef NODE_H
#define NODE_H

using namespace std;

class Node {
 public:
  Node();
  ~Node();
  void getDat();
  Node* setDat(int input);
  void getLeft();
  Node* setLeft(int input);
  void getRight();
  Node* setRight(int input);
  void getNext();
  Node* setNext(int input);
  
 private:
  Node* next;
  Node* left;
  Node* right;
  int data;
  
};

#endif

