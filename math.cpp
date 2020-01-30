#include <iostream>
#include <cstring>
#include "tree.h"

using namespace std;
//alt + x + linum-mode

int main() {
  Tree* t = new Tree();
  char input[100];

  while(true) {
    cout << "Enter a math problem." << endl;
    cin >> input;

    //Checks if only numbers and operators
    for (int i = 0; i < 100; i++) {
    if ((0 >= input[i] && input[i] <= 42) || (input[i] == 44) || (58 >= input[i] && input[i]
	<= 63) || (63 >= input[i] && input[i] <= 93) || (93 >= input[i] && input[i] <= 127)) {
      cout << "Only numbers and operators.";
	return true;
      }
    }
  }
}
