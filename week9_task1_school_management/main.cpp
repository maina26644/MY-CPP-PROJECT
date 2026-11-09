#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    void inputPerson() {
        cout << "Enter name: ";
        cin>> name;
        cout << "Enter age: ";
        cin >> age;

    }

    void displayPerson() const {
        cout << "Name: " << name << '\n'
             << "Age: " << age << '\n';
    }
};

class Student : public Person {
private:
    string admissionNumber;
    string studentClass;

public:
    void inputStudent() {
        inputPerson();
        cout << "Enter admission number: ";
        cin>> admissionNumber;
        cout << "Enter class: ";
        cin>> studentClass;
    }

    void displayStudent() const {
        cout << "\n--- STUDENT DETAILS ---\n";
        displayPerson();
        cout << "Admission number: " << admissionNumber << '\n'
             << "Class: " << studentClass << '\n';
    }
};

int main() {
    Student student;
    student.inputStudent();
    student.displayStudent();
    return 0;
}
