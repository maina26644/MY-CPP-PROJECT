#include <iostream>
#include <string>
using namespace std;

int main() {
    string studentName;
    double theoryMarks, practicalMarks, averageScore;

    cout << "Enter student name: ";
    cin>> studentName;

    cout << "Enter theory test marks: ";
    cin >> theoryMarks;

    cout << "Enter practical test marks: ";
    cin >> practicalMarks;

    averageScore = (theoryMarks + practicalMarks) / 2.0;

    cout << "\n========== DRIVING TEST RESULT ==========\n";
    cout << "Student Name    : " << studentName << "\n";
    cout << "Theory Marks    : " << theoryMarks << "\n";
    cout << "Practical Marks : " << practicalMarks << "\n";
    cout << "Average Score   : " << averageScore << "\n";

    if (averageScore >= 50)
        cout << "Result          : PASSED\n";
    else
        cout << "Result          : FAILED\n";

    return 0;
}
