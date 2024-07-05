#include <iostream>

using namespace std;

const int MAX_COURSES = 10;

int main() {
    int numCourses;
    float totalCredits = 0;
    float totalGradePoints = 0;

    cout << "Enter number of courses (max " << MAX_COURSES << "): ";
    cin >> numCourses;

    if (numCourses < 1 || numCourses > MAX_COURSES) {
        cout << "Invalid number of courses. Please enter between 1 and " << MAX_COURSES << "." << endl;
        return 1;
    }

    for (int i = 0; i < numCourses; ++i) {
        string courseName;
        int credits;
        float grade;

        cout << "Enter details for course #" << i + 1 << ":" << endl;
        cout << "Name: ";
        cin.ignore(); // to clear the input buffer
        getline(cin, courseName);
        cout << "Credits: ";
        cin >> credits;
        cout << "Grade (4.0 scale): ";
        cin >> grade;

        totalCredits += credits;
        totalGradePoints += grade * credits;
    }

    if (totalCredits > 0) {
        float cgpa = totalGradePoints / totalCredits;
        cout << "Your CGPA is: " << cgpa << endl;
    } else {
        cout << "No valid courses to calculate CGPA." << endl;
    }

    return 0;
}
