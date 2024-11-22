#include <iostream>
using namespace std;

int main() {
  cout << "==================================== pattern 1" << endl;
  // Initializing i with 1 . Initialization cannot be done inside the while loop
  // condition .
  int i = 1;
  while (i <= 5) {
    // Initializing j with 1 . Initialization cannot be done inside the while
    // loop condition . j is alwys initialized to 1 so that it can be compared
    // with i to run the loop for i times
    int j = 1;
    // we need to run the loop till j is less than or equal to i .
    while (j <= i) {
      // printing the value of j
      cout << j;
      // incrementing the value of j
      ++j;
    }
    // printing a new line
    cout << endl;
    // incrementing the value of i
    ++i;
  }

  cout << "================================= pattern 2 using while loop "
       << endl;

  // Initializing the iterator with 1. i is already used so we cannot redeclare
  int iterator = 1;
  // n is the number of rows.
  int n = 5;
  // loop will run till iterator is less than or equal to n
  while (iterator <= n) {
    // k is the number of spaces to be printed before the *
    int k = n - iterator;
    // printing the spaces . because first time the value of k is 4 , so 4
    // spaces will be printed and decrementing the value of k every time
    while (k > 0) {
      cout << " ";
      // decrementing the value of k
      --k;
    }
    // j is the number of * to be printed
    int j = 1;
    // printing the * . j is always initialized to 1 so that it can be compared
    // with iterator to run the loop for iterator times.
    while (j <= iterator) {
      cout << "*";
      // incrementing the value of j
      ++j;
    }
    // printing a new line
    cout << endl;
    // incrementing the value of iterator
    ++iterator;
  }

  cout << "============================ pattern 2 using do while loop " << endl;

  // Initializing the iterator with 1. i is already used so we cannot redeclare
  // . n is the
  // number of rows.
  int iterate = 1;
  int num = 5;

  // loop will run till iterator is less than or equal to n. Main loop to print
  // the rows.
  do {
    // k is the number of spaces to be printed before the *
    int k = num - iterate;

    do {
      // printing the spaces . because first time the value of k is 4 , so 4
      // spaces will be printed and decrementing the value of k every time
      if (k > 0) {
        cout << " ";
      }
      --k;
    } while (k > 0);
    // j is the number of * to be printed
    int j = 1;

    do {
      cout << "*";
      ++j;
    } while (j <= iterate);
    // printing a new line
    cout << endl;
    // incrementing the value of iterator
    ++iterate;
  } while (iterate <= num);

  return 0;
}
