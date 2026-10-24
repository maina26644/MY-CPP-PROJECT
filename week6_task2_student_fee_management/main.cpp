#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string studentName;
    string admissionNumber;
    double feeBalance;

public:
    void inputStudent() {
        cout << "Enter student name: ";
        cin >>  studentName;
        cout << "Enter admission number: ";
        cin >> admissionNumber;
        cout << "Enter fee balance: ";
        cin >> feeBalance;
    }

    void makePayment() {
        double payment;
        cout << "Enter payment amount: ";
        cin >> payment;

        if (payment <= 0) {
            cout << "Payment must be greater than zero.\n";
        } else if (payment > feeBalance) {
            cout << "Payment cannot exceed the fee balance.\n";
        } else {
            feeBalance -= payment;
            cout << "Payment processed successfully.\n";
        }
    }

    void displayStatus() {
        cout << "\n========== STUDENT FEE STATUS ==========\n";
        cout << "Student Name: " << studentName << "\n";
        cout << "Admission Number: " << admissionNumber << "\n";
        cout << "Remaining Fee Balance: " << feeBalance << "\n";
    }
};

int main() {
    Student student;
    student.inputStudent();
    student.makePayment();
    student.displayStatus();
    return 0;
}
