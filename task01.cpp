#include <iostream>
using namespace std;

int main() {
  cout << " ***** BANK ACCOUNT MANAGEMENT SYSTEM ***** " << endl;
  //  declaring variables
  //  creating an account variable with initial balance of 1000
  double account = 1000;
  double withdraw, deposit, balance_check;
  // creating a boolean variable to check if the account is created
  bool account_created = false;
  // creating and initializing a passcode with 1234
  int passcode = 1234;
  // using a while loop to keep the program running until the user decides to
  // exit the program by selecting option 4.
  while (true) {
    // The user is presented with a menu to select an option
    cout << "Select an option below to proceed" << endl;
    cout << "1. Create Account with 1000 $ initial deposit " << endl;
    cout << "2. Deposit Money " << endl;
    cout << "3. Withdraw Money " << endl;
    cout << "4. Check Balance " << endl;
    cout << "5. Exit " << endl;
    /* declaring a variable to store the user's option and taking input from the
     user.
     */
    int option;
    cin >> option;
    // using if else statements to check the user's option and perform the
    // necessary action.
    if (option == 1) {
      // if the account is already created, the program will display an error
      // message.
      if (account_created) {
        cout << "Account already created" << endl;
      } else {
        // if the account is not created, the program will create an account
        // with an initial balance of 1000
        account_created = true;
        cout << "Account created successfully" << endl;
      }
      // if the account is already created, the program will display an error
      // message.
    } else if (!account_created) {
      cout << "Account not created. Please create an account first" << endl;
    }
    /* using if else statements to check the user's option and perform the
     necessary action. if option 2 is selected, the user is prompted to enter
     the amount of money they want to deposit and it checks the false
     condition of the amount entered.
     */
    else if (option == 2) {
      cout << "Enter the amount of money you want to deposit: ";
      cin >> deposit;
      if (deposit > 0) {
        account += deposit;
        cout << "You have successfully deposited " << deposit
             << " into your account" << endl;

      } else {
        cout << "Invalid amount . Please try again" << endl;
      }
    }
    /* if option 3 is selected user is prompted to enter their passcode to
     withdraw money . If user enters the wrong password the program will
     prompt the user to enter the correct password.When the correct password
     is entered the user is prompted to enter the amount of money they want to
     withdraw. If the amount entered is greater than the account balance or
    less than 0, the program will display an error message. If the amount
    entered is valid, the program will deduct the amount from the account
     balance.
     */
    else if (option == 3) {
      cout << "Enter your passcode to withdraw" << endl;
      int pass;
      cin >> pass;
      while (pass != passcode) {
        cout << "Invalid passcode, try again" << endl;
        cin >> pass;
      }
      cout << "Passcode accepted" << endl;
      cout << "Enter the amount of money you want to withdraw: ";
      cin >> withdraw;
      if (withdraw > account || withdraw < 0) {
        cout << "Insufficient funds or invalid input" << endl;
      } else {
        account -= withdraw;
        cout << "You have successfully withdrawn " << withdraw
             << " from your account" << endl;
      }
    }
    /*
     If option 4 is selected, the user is prompted to enter their passcode to
     check their account balance. If the passcode entered is incorrect, the
     program will prompt the user to enter the correct passcode. When the
     correct passcode is entered, the program will display the account balance.
     */
    else if (option == 4) {
      cout << "Enter your passcode to check balance" << endl;
      int pass;
      cin >> pass;
      while (pass != passcode) {
        cout << "Invalid passcode, try again" << endl;
        cin >> pass;
      }
      cout << "Your account balance is " << account << endl;
    }
    /*
    If option 5 is selected, the program will display a thank you message and
    break out of the while loop, ending the program.
    */
    else if (option == 5) {
      cout << "Thank you for using our service" << endl;
      break;
    }
    /* If the user enters an invalid option, the program will display an error
     * message and prompt the user to try again.
     */
    else {
      cout << "Invalid option. Please try again" << endl;
    }
  }
  return 0;
}
