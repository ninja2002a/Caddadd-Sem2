#include <iostream>

using namespace std;

/*
  Heap is some sorting thing
*/

int main() {
  int max;
  int min;
  int next;
  int right;
  int left;
  char input[25];
  int* a = new int[5];
  int* b = new int[5];
  int* c = new int[5];
  int* numbox = new int[10];

  while (true) {
  cin >> input;
  
  for (int i = 0; i < 5; i++) {
    int tempo;
    (int)input[i];
    
    //cout << "a" << endl;
    a[i] = (int)input[i];
    //cout << "b" << endl;
    b[i] = (int)input[i];
    //cout << "c" << endl;
    c[i] = (int)input[i];

    numbox[i] = (int)input[i];

    a[i] = max;
    numbox[i] = min;
    
    //cout << "[" << a << "] " << "[" << b << "] " << "[" << c << "]";
    return true;
    }

  //If the number is big, move it to the right
     if (input.max > input.min) {
       int temp;
       a = temp;
       cout << numbox;
       
    }
  }
}
