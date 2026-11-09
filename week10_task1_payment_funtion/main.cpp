#include <iostream>
using namespace std;

class Payment {
public:
    // Cash payment
    void processPayment(int amount) {
        cout << "Cash payment: KSh " << amount << '\n';
    }

    // Card payment: amount plus transaction fee
    void processPayment(double amount, double transactionFee) {

             cout<< "Card payment total: KSh " << amount + transactionFee << '\n';
    }

    // Mobile payment: amount plus fee, less discount
    void processPayment(double amount, double fee, double discount) {
        double total = amount + fee - discount;

            cout << "Mobile payment total: KSh " << total << '\n';
    }
};

int main() {
    Payment payment;
    payment.processPayment(1000);
    payment.processPayment(1500.0, 30.0);
    payment.processPayment(2000.0, 20.0, 100.0);
    return 0;
}
