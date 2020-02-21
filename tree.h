#ifndef TREE_H
#define TREE_H

using namespace std;

class Tree {
 public:
  Tree();
  ~Tree();
  void getDat();
  Tree* setDat(int input);
  void getLeft();
  Tree* setLeft(int input);
  void getRight();
  Tree* setRight(int input);
  void getNext();
  Tree* setNext(int input);
  
 private:
  Tree* next;
  Tree* left;
  Tree* right;
  int data;
  
};

#endif

