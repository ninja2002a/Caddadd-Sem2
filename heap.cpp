#include <iostream>
#include <cstring>
#define ee 10

using namespace std;

/*
  Heap is some sorting algorithm
  Look at Java example sorting
  Make it either infinite or limit amount of data
  Figure out how comparing works without the need of a, b, and c
*/

void sort();
void clear(int*&);

//Greg made this
//clears pre-data in numbox
void clear(int*& in) {
  cout << "Clear: " << *in << ", ";
  for (int j = 0; j < ee; j++) {
    in[j] = 0;
  }
  cout << *in << endl;
}

int main() {
  int next;
  char input[10];
  int* numbox = new int[10];
  clear(numbox);
  
  while (true) {
    cout << "Input 10 numbers: " << endl;
    cin >> input;
    input = numbox;
    for (int a = 0; a < 10; a++) {
      sort();
    
    cout << "[" << numbox[0] << "]" << "[" << numbox[1] << "]" << "[" << numbox[2] << "]" <<
    "[" << numbox[3] << "]" << "[" << numbox[4] << "]" << "[" << numbox[5] << "]" << "[" <<
    numbox[6] << "]" << "[" << numbox[7] << "]" << "[" << numbox[8] << "]" << "[" << numbox[9]
    << "]" << endl;
    }
  }
}

  //finds the smallest number and moves it first, then finds the second least, and so on
  void sort() {
    int* numbox = new int[10];
    clear(numbox);
    for (int i = 0; i < 10; i++) {
      int max;
      int min;
      int left;
      int right;
      
     if (numbox[i] != '\0') {
       numbox[0] = i/2;
       left = i*2;
       right = i*2+1;
     }

       //if the number is smaller than the other, move it to the left
     if (numbox[min] <= numbox[max]) {
	   cout << "shifting left" << endl;
	   numbox[i] = i-2;
	   left/2;
       }
       
       //if a number is bigger than the other, move it to the right
	   else if (numbox[max] >= numbox[min]) {
	     cout << "shfiting right" << endl;
	     numbox[i]*2;
	     right*4;
	     return;
       }
    }
}
