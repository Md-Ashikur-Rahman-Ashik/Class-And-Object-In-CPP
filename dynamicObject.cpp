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
    Student *mumin = new Student(10, 5, 4.56);

    cout << abdurRahim.roll << endl
         << abdurRahim.studentClass << endl
         << abdurRahim.gpa << endl;

    cout << mumin->roll << endl
         << mumin->studentClass << endl
         << mumin->gpa;

    return 0;
}