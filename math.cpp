#include <iostream>
#include <cstring>
#include "tree.h"

/*
- Figure out how move works and if I need vector for it
- Peek should be the only function, rest in code
- Fix the repeat
- Figure out how printf works
- Figure out how to move around numbers and operators
- Figure out how to make it read the equation so it knows where to place them, perhaps use for loop again
- Make tree.cpp do something, it is useless
 */

using namespace std;
//alt + x + linum-mode

void enqueue();
int dequeue();
int peek(char*);

int main() {
  Tree* t = new Tree();
  char input[100];//[100];
  char ans[100];
  char a = a;
  char b = b;
  char list[1000];

  //clears out the data that was already in list
  for (int a = 0; a < 100; a++) {
    list[a] == 0;
  }

  while(true) {
    cout << "------------------------" << endl << "Enter an equation." << endl;
    cin >> input;

    //Checks if only numbers and operators
    for (int i = 0; i < 100; i++) {
    cout << "Char:" << (int)input[i] << endl;
    if (((input[i] >= 0 && input[i] <= 39) || (input[i] == 44) || (input[i] >= 58 &&
	 input[i] <= 93) || (input[i] >= 95 && input[i] <= 126))&& input[i] != 0 &&
	input[i] != 32) {
      cout << "Only numbers and operators." << endl;
      }

    else if (input[i] == 0) {
      break;
    }

    //moves around the numbers and operators
    for (int i = 0; i < 100; i++) {
      if ((input[i] >= 48 && input[i] <= 57) || (input[i] >= 40 && input[i] <= 47)
	  || (input[i] == 94)) {

	char temp = input[i];
	int j = i;
	while <strlen(input)-1 {
      cout << endl << "------------------------";
      //printf("" (a + b));
      //move(a, t + 2, b + 1);
      input[0] + input[1];
      cout << endl << "Answer: " << input[i] << endl;
      break;
       }
     }
   }

    if (strcmp(input, "00") == 0) {
      peek(list);
      }
    }
  }
}

//stack: looks at the data
int peek(char* list) {
    cout << list << endl;
}

//queue: fills in the line of data
void enqueue() {

}

//queue: outputs the data
int dequeue() {

}
