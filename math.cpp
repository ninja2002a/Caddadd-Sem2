#include <iostream>
#include <cstring>
#include "tree.h"

using namespace std;
//alt + x + linum-mode

int push();
int pop();
void enqueue();
int dequeue();
int peek(char*);

int main() {
  Tree* t = new Tree();
  char input[100];
  char a = a;
  char b = b;
  char list[100];

  //clears out the data that was already in list
  for (int a = 0; a < 100; a++) {
    list[a] == 0;
  }

  while(true) {
    cout << "------------------------" << endl << "Enter an equation." << endl;
    cin >> input;

    //Checks if only numbers and operators
    for (int i = 0; i < 100; i++) {
      //cout << "Char:" << (int)input[i] << endl;
    if ((input[i] >= 0 && input[i] <= 39) || (input[i] == 44) || (input[i] >= 58 &&
       input[i] <= 93) || (input[i] >= 95 && input[i] <= 126)) {
      cout << "Only numbers and operators." << endl;
      break;
      }
    else {
      cout << endl << "------------------------" << endl;
      t->getMath();
      printf("" (a + b));
      cout << endl << input;
      }
    }
    if (strcmp(input, "00") == 0) {
      peek(list);
    }
  }
}

//stack: looks at the data
int peek(char* list) {
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
