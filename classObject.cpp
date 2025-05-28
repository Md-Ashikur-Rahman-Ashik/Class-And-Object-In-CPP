#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    char name[100];
    int roll;
    double gpa;
};

int main()
{
    Student info;

    int studentRoll;
    double studentGPA;

    cin.getline(info.name, 100);

    cin >> studentRoll >> studentGPA;

    info.roll = studentRoll;
    info.gpa = studentGPA;

    cout << info.name << endl
         << info.roll << endl
         << info.gpa;

    return 0;
}