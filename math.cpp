#include <iostream>
#include <cstring>
#include "tree.h"

/*
- Peek should be the only function, rest in code
- Fix the repeat
- Figure out how to make it read the equation so it knows where to place them
- Make tree.cpp do something, it is useless
 */

using namespace std;
//alt + x + linum-mode

int peek(char*);

int main() {
  Tree* t = new Tree();
  char input[100];
  char list[100];
  char* num;
  Tree* q;
  Tree* dq = NULL;
  Tree* wack = NULL;

  //clears out the data that was already in list
  /*for (int a = 0; a < 100; a++) {
    list[a] == 0;
  }*/

  while(true) {
    cout << "------------------------" << endl << "Enter an equation." << endl;
    cin >> input;
    cout << list;

    for (int a = 0; a < 100; a++) {
      list[a] == 0;
    }

    //Checks if only numbers and operators
    for (int i = 0; i < 100; i++) {
      //cout << "Char:" << (int)input[i] << endl;
      if (((input[i] >= 0 && input[i] <= 39) || (input[i] == 44) || (input[i] >= 58 &&
   	    input[i] <= 93) || (input[i] >= 95 && input[i] <= 126) && (input[i] != 0 &&
	    input[i] != 32))) {
      cout << "Only numbers and operators." << endl;
      break;
      }

    else if (input[i] == 0) {
      break;
    }

    //moves around the numbers and operators
    for (int i = 0; i < 100; i++) {
      if ((input[i] >= 48 && input[i] <= 57) || (input[i] >= 40 && input[i] <= 47)
	  || (input[i] == 94) && (input[i] == '+')) {
	char temp = input[i];
	int j = i;
	while (j < strlen(input) - 1) {
      cout << endl << "------------------------";
      input[j] = input[j+1];
      j++;
      cout << endl << "Answer: " << input[j] << input[i] << endl;
      strcpy(input,list);
      break;
	}
      }
    }

    if (dq = NULL) {
      dq = new Tree();
      q = NULL;
      num = input;
    }
    else {
      Tree* current = q;
      while (current != dq)  {
	  current = current - NULL;
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
