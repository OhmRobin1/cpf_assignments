#include<iostream>
#include<cstdlib>
using namespace std;

struct student
{
    int roll;
    char name[20];
    float cgpa;
};

int main()
{
    student *s;
    int n, i;
    float x;

    cout << "Enter number of students: ";
    cin >> n;

    s = (student*)calloc(n, sizeof(student));

    for (i = 0; i < n; i++)
    {
        cout << "Enter roll no: ";
        cin >> s[i].roll;
        cout << "Enter student name: ";
        cin >> s[i].name;
        cout << "Enter CGPA: ";
        cin >> s[i].cgpa;
    }

    cout << "Enter CGPA value: ";
    cin >> x;

    cout << "\nStudents with CGPA greater than " << x << endl;
    for (i = 0; i < n; i++)
        if (s[i].cgpa > x)
            cout << s[i].roll << "\t" << s[i].name << "\t" << s[i].cgpa << endl;

    free(s);
    cout << "\nMade By Ohm :)";
    return 0;
}