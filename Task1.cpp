#include<bits/stdc++.h>
using namespace std;

int main() {
    int numCourses;
    cout << "Enter number of courses: ";
    cin >> numCourses;

    string courseName;
    double credit, gradePoint, totalCredits = 0, totalGradePoints = 0;
    char grade;

    for (int i = 1; i <= numCourses; i++) {
        cout << "\nCourse " << i << " name: ";
        cin >> ws;
        getline(cin, courseName);

        cout << "Credit hours: ";
        cin >> credit;

        cout << "Grade (A, B, C, D, F): ";
        cin >> grade;

        if (grade == 'A' || grade == 'a') 
			gradePoint = 4.0;
        else if (grade == 'B' || grade == 'b') gradePoint = 3.0;
        else if (grade == 'C' || grade == 'c') gradePoint = 2.0;
        else if (grade == 'D' || grade == 'd') gradePoint = 1.0;
        else if (grade == 'F' || grade == 'f') gradePoint = 0.0;
        else {
            cout << "Invalid grade entered.\n";
            return 1;
        }

        totalCredits += credit;
        totalGradePoints += gradePoint * credit;

        cout << "Course: " << courseName << ", Grade: " << grade
             << ", Grade Point: " << gradePoint << endl;
    }

    double cgpa = totalGradePoints / totalCredits;

    cout << "\nTotal Credits: " << totalCredits << endl;
    cout << "Total Grade Points: " << totalGradePoints << endl;
    cout << "CGPA: " << cgpa << endl;

    return 0;
}

