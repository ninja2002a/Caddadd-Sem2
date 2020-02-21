#include <iostream>
#include "tree.h"

using namespace std;

Tree::Tree() {
  
}

Tree::~Tree() {
}

void Tree::getDat() {
  return next;
}

Tree* Tree::setDat(int input) {
  data = input;
}

void Tree::getNext() {
  return next;
}

Tree* Tree::SetNext(Tree* input) {
  next = input;
}

void Tree::getLeft() {
  return left;
}

Tree* Tree::setLeft(Tree* input) {
  left = input;
}

void Tree::getRight() {
  return right;
}

Tree* Tree::setRight(Tree* input) {
  right = input;
}
