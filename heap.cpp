#include <iostream>
#include <cstring>
#define ee 10

using namespace std;

/*
  Heap is some sorting algorithm
  Look at Java example sorting
  Make it either infinite or limit amount of data
  It's always 0 in the numboxes
  Only shifts left
  Possibly from clear, likely removing data as it is the first method
*/

void sort();
void clear(int*&);
void compareL();
void compareS();

//Greg made this
//clears pre-data in numbox
/*void clear(int*& in) {
  cout << "Clear: " << *in << ", ";
  for (int j = 0; j < ee; j++) {
    in[j] = 0;
  }
  cout << *in << endl;
}*/

int main() {
  int next;
  char input[10];
  int* numbox = new int[10];
  clear(numbox);

  //runs sort then outputs the numbox
  while (true) {
    cout << "Input 10 numbers: " << endl;
    cin >> input;
    //input = numbox;
    for (int a = 0; a < 1; a++) {
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
    for (int i = 0; i < 1; i++) {
      int max;
      int min;
      int left;
      int right;
      left - 1;
      right + 1;
      
     if (numbox[i] != '\0') {
       /*numbox[0] = i/2;
       left = i*2;
       right = i*2+1;*/
       main();
     }

       //if the number is smaller than the other, move it to the left
     if (numbox[min] <= numbox[max]) {
	   cout << "shifting left" << endl;
	   numbox[i] = i/2;
	   numbox[i] = i-2;
	   left/2;
	   main();
       }
       
       //if a number is bigger than the other, move it to the right
	   else if (numbox[max] >= numbox[min]) {
	     cout << "shfiting right" << endl;
	     numbox[i]*2;
	     right*4;
	     main();
       }

     //if number is larger than the large number
     else if (numbox[max] >= numbox[max]) {
       cout << "shifting small number" << endl;
	     numbox[max]+1;
	     main();
       //compareL();
	   }
     //if number is smaller than the small number
     else if(numbox[min] <= numbox[min]) {
	     cout << "shifting big number" << endl;
	     numbox[min]-1;
	     main();
     //comapreS();
        }
    }    
}

void clear(int*& in) {
 cout << "Clear: " << *in << ", ";
 for (int j = 0; j < ee; j++) {
 in[j] = 0;
  cout << *in << endl;
  }
}

//if number is larger than the other large number
/*void compareL(int* numbox) {
  
}

//if number is smaller than the other small number
void compareS(int* numbox) {

}*/
