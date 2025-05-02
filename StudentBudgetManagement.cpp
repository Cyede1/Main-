#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;

int main() {
    //START APP
   
    /*
    IF user data file EXISTS
        THEN LOAD user data
    ELSE proceed to Authentication
    END IF
    */

    /*
    DISPLAY "Log In or Sign Up?"
    IF user chooses Login 
        THEN PROMPT for username, password
    END IF
    IF credentials(username, password) VALID
        THEN PROCEED to Main Loop
    ELSE
        DISPLAY "Invalid Credentials"
    END IF 
    */
    string username, password;

    cout << "Log In or Sign Up?";
    string loginChoice;
    getline(cin.ignore(), loginChoice);

    if(loginChoice == "Log In" || "log in" || "LOG IN" || "login" || "LOGIN") {
        cout << "Enter your username: ";
        getline(cin.ignore(), username);
        cout << "Enter your password: ";
        getline(cin.ignore(), password);
    }
    

}
