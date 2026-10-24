#include <iostream>
#include <string>
using namespace std;

string employeeName;
double basicSalary, overtimeHours, ratePerHour;
double overtimePay, netSalary;

void getEmployeeDetails() {
    cout << "Enter employee name: ";
    cin>> employeeName;
    cout << "Enter basic salary: ";
    cin >> basicSalary;
    cout << "Enter overtime hours: ";
    cin >> overtimeHours;
    cout << "Enter overtime rate per hour: ";
    cin >> ratePerHour;
}

void calculateOvertimePay() {
    overtimePay = overtimeHours * ratePerHour;
}

void calculateNetSalary() {
    netSalary = basicSalary + overtimePay;
}

void displayPayslip() {
    cout << "\n========== EMPLOYEE PAYSLIP ==========\n";
    cout << "Employee Name: " << employeeName << "\n";
    cout << "Basic Salary: " << basicSalary << "\n";
    cout << "Overtime Hours: " << overtimeHours << "\n";
    cout << "Overtime Rate: " << ratePerHour << "\n";
    cout << "Overtime Pay: " << overtimePay << "\n";
    cout << "Net Salary: " << netSalary << "\n";
}

int main() {
    getEmployeeDetails();
    calculateOvertimePay();
    calculateNetSalary();
    displayPayslip();
    return 0;
}
