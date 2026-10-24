#include <iostream>
using namespace std;

int main() {
    double balance, withdrawal;

    cout << "Enter account balance: ";
    cin >> balance;

    while (balance > 0) {
        cout << "Enter withdrawal amount : ";
        cin >> withdrawal;

        if (withdrawal > balance) {
            cout << "Withdrawal exceeds balance. Transaction stopped.\n";
            break;
        }

        if (withdrawal <= 0) {
            cout << "Enter a positive withdrawal amount.\n";
            continue;
        }

        balance -= withdrawal;
        cout << "Remaining balance: " << balance << "\n";
    }

    cout << "Transaction ended.\n";
    return 0;
}
