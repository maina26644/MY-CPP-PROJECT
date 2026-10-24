#include <iostream>
#include <string>
using namespace std;

int main() {
    string customerName, phoneModel;
    int quantity;
    double pricePerPhone, totalSales;

    cout << "Enter customer name: ";
    cin>> customerName;

    cout << "Enter phone model: ";
    cin>> phoneModel;

    cout << "Enter quantity bought: ";
    cin >> quantity;

    cout << "Enter price per phone: ";
    cin >> pricePerPhone;

    totalSales = quantity * pricePerPhone;

    cout << "\n========== SALES RECEIPT ==========\n";
    cout << "Customer Name : " << customerName << "\n";
    cout << "Phone Model   : " << phoneModel << "\n";
    cout << "Quantity      : " << quantity << "\n";
    cout << "Price/Phone   : " << pricePerPhone << "\n";
    cout << "Total Sales   : " << totalSales << "\n";
    cout << "===================================\n";

    return 0;
}
