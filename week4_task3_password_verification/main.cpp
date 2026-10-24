#include <iostream>
#include <string>
using namespace std;

int main() {
    const string correctUsername = "chalo";
    const string correctPassword = "26644";
    string username, password;

    do {
        cout << "Enter username: ";
        cin >> username;
        cout << "Enter password: ";
        cin >> password;

        if (username == correctUsername && password == correctPassword)
            cout << "Access Granted\n";
        else
            cout << "Incorrect credentials, try again\n";

    } while (username != correctUsername || password != correctPassword);

    return 0;
}
