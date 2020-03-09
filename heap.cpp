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
  int* numbox = new int[24];

  while (true) {
    //cin >> input;
 
  //clears the data that was already in it
  if (a && b && c == NULL) {
    a = NULL;
    b = NULL;
    c = NULL;
  }

  //asks for input for a-c and stores it into numbox
  for (int i = 0; i < 5; i++) {
    
    cout << "a" << endl;
    cin >> input;
    a[i] = (int)input[i];
    numbox[i] = a[i];
    
    cout << "b" << endl;
    cin >> input;
    b[i] = (int)input[i];
    numbox[i] = b[i];
    
    cout << "c" << endl;
    cin >> input;
    c[i] = (int)input[i];
    numbox[i] = c[i];
    
    numbox[i] = (int)input[i];
    
    cout << "[" << a << "] " << "[" << b << "] " << "[" << c << "]";
    sort();
    }
  }
}

  //finds the smallest number and moves it first, then finds the second least, and so on
  //test, fix later
  void sort() {
    int* numbox = new int[25];
  for (int* j = 0; j < numbox; j++) {
    for (int* i = j; i < numbox; i++) {
      int* temp = j;
      int max;
      int min;
     if (numbox) {
       //a = temp;
       numbox[0]+1;
       numbox[1]=0;
       numbox[2]=3;
       
       cout << numbox;
       return;
      }
    }
  }
}
