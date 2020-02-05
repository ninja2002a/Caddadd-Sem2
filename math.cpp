#include <iostream>
#include <cstring>
#include "tree.h"

using namespace std;
//alt + x + linum-mode

int push();
int pop();
void enqueue();
int dequeue();
void peek();

int main() {
  Tree* t = new Tree();
  char input[100];
  char list[100];

  while(true) {
    cout << "Enter a math problem." << endl;
    cin >> input;

    //Checks if only numbers and operators
    for (int i = 0; i < 100; i++) {
    if ((input[i] >= 1 && input[i] <= 39) || (input[i] == 44) || (input[i] >= 58 &&
       input[i] <= 93) || (input[i] >= 95 && input[i] <= 126)) {
      cout << "Only numbers and operators." << endl;
      break;
      }
    else {
      cout << "ok boomer" << endl;
      t->getMath();
      push();
      enqueue();
      }
    }
  }
}

//stack: looks at the data
void peek(char* list) {
    cout << list << endl;
}

//inputs data
int push() {

}

//outputs the data
int pop() {

}

//queue: fills in the line of data
void enqueue() {

}

//queue: outputs the data
int dequeue() {

}
