#include <iostream>
#include <string>

using namespace std;

class BankAccount {
private:
    string accountHolder;
    string accountNumber;
    double balance;

public:
    BankAccount(string holder, string number, double initialBalance)
        : accountHolder(holder), accountNumber(number), balance(initialBalance) {
        cout << "Account successfully created\n";
    }

    void displayAccount() const {

        cout << "\n--- BANK ACCOUNT DETAILS ---\n"
             << "Account holder: " << accountHolder << '\n'
             << "Account number: " << accountNumber << '\n'
             << "Account balance: KSh " << balance << '\n';
    }

    ~BankAccount() {
        cout << "Account closed successfully\n";
    }
};

int main() {
    string holder, number;
    double balance;

    cout << "Enter account holder name: ";
    cin>> holder;
    cout << "Enter account number: ";
    cin>> number;
    cout << "Enter opening balance (KSh): ";
    cin >> balance;

    while (balance < 0) {
        cout << "Balance cannot be negative. Enter again: ";
        cin >> balance;
    }

    BankAccount account(holder, number, balance);
    account.displayAccount();
    return 0;
}
