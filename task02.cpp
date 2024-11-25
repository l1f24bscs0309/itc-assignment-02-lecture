#include <iostream>
using namespace std;

int main() {
  // declaring and initializing variables with book names and copies
  string book_1 = "100 Go Mistakes and How to Avoid Them";
  string book_2 = "The Linux Programming Interface";
  string book_3 = "C++ Primer";
  string book_4 = "Js is for Dummies";
  string book_5 = "I use vim btw";

  int copies_1 = 6;
  int copies_2 = 9;
  int copies_3 = 7;
  int copies_4 = 0;
  int copies_5 = 3;

  // initializing borrowed status for each book
  bool borrowed_1 = false, borrowed_2 = false, borrowed_3 = false,
       borrowed_4 = false, borrowed_5 = false;

  // while loop to keep the program running until the user exits
  while (true) {
    // displaying the main menu
    cout << endl << "Welcome to Library!" << endl;
    cout << "Please select an option to proceed:" << endl;
    cout << "1. Borrow a book" << endl;
    cout << "2. Return a book" << endl;
    cout << "3. Exit" << endl;

    int option;
    cin >> option;

    if (option == 1) { // Borrow a book
      cout << "Please select a book to borrow using (1-5):" << endl;
      cout << "1. " << book_1 << " (" << copies_1 << " copies available)"
           << endl;
      cout << "2. " << book_2 << " (" << copies_2 << " copies available)"
           << endl;
      cout << "3. " << book_3 << " (" << copies_3 << " copies available)"
           << endl;
      cout << "4. " << book_4 << " (" << copies_4 << " copies available)"
           << endl;
      cout << "5. " << book_5 << " (" << copies_5 << " copies available)"
           << endl;

      int book;
      cin >> book;
      // checking if the book is available and if the user has already borrowed
      // it or not and updating the copies and borrowed status accordingly
      if (book == 1) {
        if (borrowed_1) {
          cout << "Sorry, you have already borrowed this book." << endl;
        } else if (copies_1 == 0) {
          cout << "Sorry, this book is out of stock." << endl;
        } else {
          borrowed_1 = true;
          copies_1--;
          cout << "You have successfully borrowed \"" << book_1 << "\"."
               << endl;
        }
      } else if (book == 2) {
        if (borrowed_2) {
          cout << "Sorry, you have already borrowed this book." << endl;
        } else if (copies_2 == 0) {
          cout << "Sorry, this book is out of stock." << endl;
        } else {
          borrowed_2 = true;
          copies_2--;
          cout << "You have successfully borrowed \"" << book_2 << "\"."
               << endl;
        }
      } else if (book == 3) {
        if (borrowed_3) {
          cout << "Sorry, you have already borrowed this book." << endl;
        } else if (copies_3 == 0) {
          cout << "Sorry, this book is out of stock." << endl;
        } else {
          borrowed_3 = true;
          copies_3--;
          cout << "You have successfully borrowed \"" << book_3 << "\"."
               << endl;
        }
      } else if (book == 4) {
        if (borrowed_4) {
          cout << "Sorry, you have already borrowed this book." << endl;
        } else if (copies_4 == 0) {
          cout << "Sorry, this book is out of stock." << endl;
        } else {
          borrowed_4 = true;
          copies_4--;
          cout << "You have successfully borrowed \"" << book_4 << "\"."
               << endl;
        }
      } else if (book == 5) {
        if (borrowed_5) {
          cout << "Sorry, you have already borrowed this book." << endl;
        } else if (copies_5 == 0) {
          cout << "Sorry, this book is out of stock." << endl;
        } else {
          borrowed_5 = true;
          copies_5--;
          cout << "You have successfully borrowed \"" << book_5 << "\"."
               << endl;
        }
      } else {
        cout << "Invalid input." << endl;
      }

    }
    // displaying only the borrowed books and asking the user to select a book
    // to return and updating the copies and borrowed status accordingly
    else if (option == 2) {
      cout << "Please select a book to return:" << endl;
      if (borrowed_1)
        cout << "1. " << book_1 << endl;
      if (borrowed_2)
        cout << "2. " << book_2 << endl;
      if (borrowed_3)
        cout << "3. " << book_3 << endl;
      if (borrowed_4)
        cout << "4. " << book_4 << endl;
      if (borrowed_5)
        cout << "5. " << book_5 << endl;

      int book;
      cin >> book;
      // checking if the user has borrowed the book and updating the copies and
      // borrowed status accordingly
      if (book == 1 && borrowed_1) {
        borrowed_1 = false;
        copies_1++;
        cout << "You have successfully returned \"" << book_1 << "\"." << endl;
      } else if (book == 2 && borrowed_2) {
        borrowed_2 = false;
        copies_2++;
        cout << "You have successfully returned \"" << book_2 << "\"." << endl;
      } else if (book == 3 && borrowed_3) {
        borrowed_3 = false;
        copies_3++;
        cout << "You have successfully returned \"" << book_3 << "\"." << endl;
      } else if (book == 4 && borrowed_4) {
        borrowed_4 = false;
        copies_4++;
        cout << "You have successfully returned \"" << book_4 << "\"." << endl;
      } else if (book == 5 && borrowed_5) {
        borrowed_5 = false;
        copies_5++;
        cout << "You have successfully returned \"" << book_5 << "\"." << endl;
      } else {
        cout << "You have not borrowed this book or invalid input." << endl;
      }

    } else if (option == 3) { // Exit the program if the user selects 3
      cout << "Thank you for using the Library!" << endl;
      break;
    } else {
      cout << "Invalid input." << endl;
    }
  }

  return 0;
}
