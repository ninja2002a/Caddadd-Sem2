#include <iostream>
#include <cstring>
#include "tree.h"

using namespace std;
//alt + x + linum-mode

//stack: pushes the data
int push() {
  char* dat = new char[10000];
  
}

//stack: takes out the data
int pop() {

}

//stack: looks at the data
int peek() {
  cout << "A" << endl;
}

//queue: fills in the line of data, like a line
int enqueue() {

}

//dequeue: the last row of data comes out
int dequeue() {

}

int main() {
  Tree* t = new Tree();
  char input[100];
  char list[10000][100];

  list[0] = "wefgg";
  list[1] = "rtgerty";

  while(true) {
    cout << "Enter a math problem." << endl;
    cin >> input;

    //Checks if only numbers and operators
    for (int i = 0; i < 100; i++) {
    if ((0 <= input[i] && input[i] >= 42) || (input[i] == 44) || (58 >= input[i] && input[i]
	<= 63) || (63 >= input[i] && input[i] <= 93) || (93 >= input[i] && input[i] <= 127)) {
      cout << "Only numbers and operators.";
	return true;
      }
    else {
      t->getMath();
      push();
      }
    }
  }
}
