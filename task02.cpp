#include <iostream>
using namespace std;

int main() {
  // Define the books and their copies and borrowed status
  string book_one = "The Catcher in the Rye";
  string book_two = "1984";
  string book_three = "To Kill a Mockingbird";
  string book_four = "The Great Gatsby";
  string book_five = "The Lord of the Rings";

  int copies1 = 3, copies2 = 2, copies3 = 1, copies4 = 0, copies5 = 5;
  bool borrowed1 = false, borrowed2 = false, borrowed3 = false,
       borrowed4 = false, borrowed5 = false;
  // while is going to run until the user chooses to exit
  while (true) {
    // Display the menu
    cout << "Welcome to the Library!" << endl;
    cout << "1. Borrow a book" << endl;
    cout << "2. Return a book" << endl;
    cout << "3. Exit" << endl;
    // Ask the user for their choice
    cout << "Enter your choice: ";
    int choice;
    cin >> choice;
    // Check the user's choice
    if (choice == 1) {
      cout << "Which book would you like to borrow?" << endl;
      cout << "1. " << book_one << " (" << copies1 << " copies available)"
           << endl;
      cout << "2. " << book_two << " (" << copies2 << " copies available)"
           << endl;
      cout << "3. " << book_three << " (" << copies3 << " copies available)"
           << endl;
      cout << "4. " << book_four << " (" << copies4 << " copies available)"
           << endl;
      cout << "5. " << book_five << " (" << copies5 << " copies available)"
           << endl;
      cout << "Enter your choice: ";
      int book_choice;
      cin >> book_choice;
      // Check the user's choice and update the copies and borrowed status
      // accordingly. If the user tries to borrow a book that is already
      // borrowed, display an error message. If the user tries to borrow a book
      // that has no copies available, display an error message.
      if (book_choice == 1) {
        if (borrowed1) {
          cout << "You have already borrowed this book!" << endl;
        } else if (copies1 > 0) {
          cout << "You have successfully borrowed " << book_one << endl;
          copies1--;
          borrowed1 = true;
        } else {
          cout << "Sorry, no copies available!" << endl;
        }
      } else if (book_choice == 2) {
        if (borrowed2) {
          cout << "You have already borrowed this book!" << endl;
        } else if (copies2 > 0) {
          cout << "You have successfully borrowed " << book_two << endl;
          copies2--;
          borrowed2 = true;
        } else {
          cout << "Sorry, no copies available!" << endl;
        }
      } else if (book_choice == 3) {
        if (borrowed3) {
          cout << "You have already borrowed this book!" << endl;
        } else if (copies3 > 0) {
          cout << "You have successfully borrowed " << book_three << endl;
          copies3--;
          borrowed3 = true;
        } else {
          cout << "Sorry, no copies available!" << endl;
        }
      } else if (book_choice == 4) {
        if (borrowed4) {
          cout << "You have already borrowed this book!" << endl;
        } else if (copies4 > 0) {
          cout << "You have successfully borrowed " << book_four << endl;
          copies4--;
          borrowed4 = true;
        } else {
          cout << "Sorry, no copies available!" << endl;
        }
      } else if (book_choice == 5) {
        if (borrowed5) {
          cout << "You have already borrowed this book!" << endl;
        } else if (copies5 > 0) {
          cout << "You have successfully borrowed " << book_five << endl;
          copies5--;
          borrowed5 = true;
        } else {
          cout << "Sorry, no copies available!" << endl;
        }
      } else {
        cout << "Invalid choice!" << endl;
      }
      // If the user chooses to return a book, display the list of borrowed
    } else if (choice == 2) {
      cout << "Which book would you like to return?" << endl;
      // showing only those books which user has borrowed from library .
      if (borrowed1) {
        cout << "1. " << book_one << endl;
      }
      if (borrowed2) {
        cout << "2. " << book_two << endl;
      }
      if (borrowed3) {
        cout << "3. " << book_three << endl;
      }
      if (borrowed4) {
        cout << "4. " << book_four << endl;
      }
      if (borrowed5) {
        cout << "5. " << book_five << endl;
      }
      cout << "Enter your choice: ";
      int book_choice;
      cin >> book_choice;
      // double checking if user has borrowed the book or not and then returning
      // the book , updating the copies and borrowed status accordingly.
      if (book_choice == 1 && borrowed1) {
        cout << "You have successfully returned " << book_one << endl;
        copies1++;
        borrowed1 = false;
      } else if (book_choice == 2 && borrowed2) {
        cout << "You have successfully returned " << book_two << endl;
        copies2++;
        borrowed2 = false;
      } else if (book_choice == 3 && borrowed3) {
        cout << "You have successfully returned " << book_three << endl;
        copies3++;
        borrowed3 = false;
      } else if (book_choice == 4 && borrowed4) {
        cout << "You have successfully returned " << book_four << endl;
        copies4++;
        borrowed4 = false;
      } else if (book_choice == 5 && borrowed5) {
        cout << "You have successfully returned " << book_five << endl;
        copies5++;
        borrowed5 = false;
      } else {
        cout << "Invalid choice!" << endl;
      }
    }
    // If the user chooses to exit, display a goodbye message and break out of
    // the loop
    else if (choice == 3) {
      cout << "Goodbye!" << endl;
      break;
    } else {
      cout << "Invalid choice!" << endl;
    }
  }
}
