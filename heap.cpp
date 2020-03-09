#include <iostream>

using namespace std;

/*
  Heap is some sorting algorithm
  Look at Java example sorting
  Make it either infinite or limit amount of data
  Make it loop so it can go through each data and sort
  Simplify a better way to check if one is bigger than the other or the other way around
  Figure out how comparing works without the need of a, b, and c
*/

void sort();

int main() {
  int next;
  int right;
  int left;
  char input[25];
  int* a = new int[3];
  int* b = new int[3];
  int* c = new int[3];
  char* numbox = new char[25];

  while (true) {
    //cin >> input;
 
  //clears the data that was already in it
  if (a && b && c == NULL) {
    a = NULL;
    b = NULL;
    c = NULL;
  }

  //asks for input for a-c and stores it into numbox
  for (int i = 0; input == numbox; i++) {
    
    cout << "a" << endl;
    cin >> input;
    a[i] = numbox[0];
    
    cout << "b" << endl;
    cin >> input;
    b[i] = numbox[1];
    
    cout << "c" << endl;
    cin >> input;
    c[i] = numbox[2];
    
    cout << "[" << a << "] " << "[" << b << "] " << "[" << c << "]";
    sort();
    }
  }
}

  //finds the smallest number and moves it first, then finds the second least, and so on
  //test, fix later
  void sort() {
    char* numbox = new char[25];
    for (char* j = 0; j < numbox; j++) {
    for (char* i = j; i < numbox; i++) {
      char* temp = j;
      int max;
      int min;
     if (numbox[0] != '\0') {
       numbox[0] = i/2;
       min = i*2;
       max = i*2+1;
       cout << numbox;
       return;
      }
    }
  }
}
