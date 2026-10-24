#include <iostream>
#include <string>
using namespace std;

int main() {
    string employeeName;
    double basicSalary, bonus, totalSalary;

    for (int i = 1; i <= 5; i) {
        cout << "Enter employee name: ";
        cin>>employeeName;
        cout << "Enter basic salary: ";
        cin >> basicSalary;

        bonus = 0.05 * basicSalary;
        totalSalary = basicSalary + bonus;

        cout << "Name: " << employeeName << "\n";
        cout << "Basic Salary: " << basicSalary << "\n";
        cout << "Bonus: " << bonus << "\n";
        cout << "Total Salary: " << totalSalary << "\n";
    }

    return 0;
}
