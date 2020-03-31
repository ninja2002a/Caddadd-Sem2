#include <iostream>
#include <cstring>
#include <fstream>
#define ee 100

using namespace std;

/*
  Heap is some sorting algorithm
  Look at Java example sorting
  Inputted data should be moved to a temp, processed through the sort, then placed
*/

void sort(char*&);
void clear(char*&);
//void numHold(char, int);

//Greg made this
//clears pre-data in numbox
void clear(char*& in) {
  //cout << "Clear: " << *in << ", ";
  for (int j = 0; j < ee; j++) {
    in[j] = (char)0;
  }
  //cout << *in << endl;
}

//inputted data will be moved here as storage
/*void numHold(char input, int main) {
  int temp;
  for (int i = 0; i == input; i++) {
    
  }
}*/

int main() {
  int next;
  char* numbox = new char[ee];
  clear(numbox);

  //runs sort then outputs the numbox
  while (true) {
    cout << "Input numbers or type 'quit' to exit the program: " << endl;
    cin.getline(numbox, ee);
    for (int a = 0; a < ee; a++) {
      //numHold();
      sort(numbox);

      if (numbox[a] != char(0)) {
	cout << "[" << numbox[a] << "]" << endl;
	
      }
      if (strcmp(numbox,"quit") == 0) {
	return 0;
      }
    }
  }
}

  //finds the smallest number and moves it first, then finds the second least, and so on
  void sort(char*& numbox) {
    //int* numbox = new int[ee];
    for (int i = 0; i < ee; i++) {
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
       return;
     }

       //if the number is smaller than the other, move it to the left
     if (numbox[min] <= numbox[max]) {
	   cout << "shifting left" << endl;
	   numbox[i] = i/2;
	   numbox[i] = i-2;
	   left/2;
	   return;
       }
       
       //if a number is bigger than the other, move it to the right
	   else if (numbox[max] >= numbox[min]) {
	     cout << "shfiting right" << endl;
	     numbox[i]*2;
	     right*4;
	     return;
       }

     //if number is larger than the large number
     else if (numbox[max] >= numbox[max]) {
       cout << "shifting small number" << endl;
	     numbox[max]+1;
	     return;
	   }
     //if number is smaller than the small number
     else if(numbox[min] <= numbox[min]) {
	     cout << "shifting big number" << endl;
	     numbox[min]-1;
	     return;
        }
    }
}
