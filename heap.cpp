#include <iostream>
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
  for (int j = 0; j < ee; j++) {
    in[j] = (char)0;
  }
}

int main() {
  int next;
  int right;
  int left;
  char input[10];
  int* numbox = new int[10];
  clear(numbox);
  
  while (true) {
    cout << "Input 10 numbers: " << endl;
    cin >> input;
    (int)input = numbox;
    for (int a = 0; a < 10; a++) {
      //sort();
    
    cout << "[" << numbox[0] << "]" << "[" << numbox[1] << "]" << "[" << numbox[2] << "]" <<
    "[" << numbox[3] << "]" << "[" << numbox[4] << "]" << "[" << numbox[5] << "]" << "[" <<
    numbox[6] << "]" << "[" << numbox[7] << "]" << "[" << numbox[8] << "]" << "[" << numbox[9]
    << "]" <<"[" << numbox[10] << "]" << endl;
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
     if (numbox[0] != '\0') {
       numbox[0] = i/2;
       min = i*2;
       max = i*2+1;
     }

       //if the number is smaller than the other
       if (min <= max) {
	 cout << "test";
	   numbox[i];
       }
       
       //if a number is bigger than the other
	   else if (max >= min) {
	     cout << "frdf";
	     numbox[i]*2;
	     return;
       }
    }
}
