#include <iostream>

using namespace std;

/*
  Heap is some sorting algorithm
  Look at Java example sorting
  Make it either infinite or limit amount of data
  Make it loop so it can go through each data and sort
  Simplify a better way to check if one is bigger than the other
*/

int main() {
  int max;
  int min;
  int next;
  int right;
  int left;
  char input[25];
  int* a = new int[3];
  int* b = new int[3];
  int* c = new int[3];
  int* numbox = new int[24];

  while (true) {
  cin >> input;
 
  //clears the data that was already in it
  if (a && b && c == false) {
    a = NULL;
    b = NULL;
    c = NULL;
  }

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
    
    a[i] = max;
    numbox[i] = min;
    
    cout << "[" << a << "] " << "[" << b << "] " << "[" << c << "]";
    return 0;
    }

  //checks if b is larger than a and if so, move b to the right or to numbox if used
     if (a < b) {
       for (int* j = 0; max > min; j++) {
       int* temp = j;
       a = temp;
       b[0]+1;
       a[0]=0;
       c[0]=3;
       cout << numbox;
       
       }
     }
  }
}
