#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int roll;
    int studentClass;
    double gpa;

    Student(int studentRoll, int studentsClass, double studentGPA)
    {
        this->roll = studentRoll;
        this->studentClass = studentsClass;
        this->gpa = studentGPA;
    }
};

int main()
{
    int userRoll, userClass;
    double userGPA;

    cin >> userRoll >> userClass >> userGPA;

    Student abdurRahim(userRoll, userClass, userGPA);

    cout << abdurRahim.roll << endl
         << abdurRahim.studentClass << endl
         << abdurRahim.gpa;

    return 0;
}