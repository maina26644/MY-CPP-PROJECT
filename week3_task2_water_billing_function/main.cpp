#include <iostream>
#include <string>
using namespace std;

string customerName;
double unitsConsumed;
const double RATE_PER_UNIT = 40.0;
double totalBill, discount, finalAmount;

void getCustomerDetails() {
    cout << "Enter customer name: ";
    getline(cin, customerName);
    cout << "Enter units consumed: ";
    cin >> unitsConsumed;
}

void calculateBill() {
    totalBill = unitsConsumed * RATE_PER_UNIT;
}

void applyDiscount() {
    discount = (unitsConsumed > 100) ? totalBill * 0.10 : 0.0;
    finalAmount = totalBill - discount;
}

void displayBill() {
    cout << "\n========== WATER BILL ==========\n";
    cout << "Customer Name: " << customerName << "\n";
    cout << "Units Consumed: " << unitsConsumed << "\n";
    cout << "Rate Per Unit: " << RATE_PER_UNIT << "\n";
    cout << "Total Before Discount: " << totalBill << "\n";
    cout << "Discount: " << discount << "\n";
    cout << "Final Amount Payable: " << finalAmount << "\n";
}

int main() {
    getCustomerDetails();
    calculateBill();
    applyDiscount();
    displayBill();
    return 0;
}
