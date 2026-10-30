#include<iostream>
using namespace std;

struct student
{
    int roll;
    char name[20];
    float m1, m2, m3, total, avg;
};

int main()
{
    student s[50];
    int n, i, top = 0;

    cout << "Enter number of students: ";
    cin >> n;

    for (i = 0; i < n; i++)
    {
        cout << "\nEnter roll no: ";
        cin >> s[i].roll; 
        cout << "\nEnter name: ";
        cin >> s[i].name; 
        cout << "\nEnter marks: ";
        cin >> s[i].m1 >> s[i].m2 >> s[i].m3;
       

        s[i].total = s[i].m1 + s[i].m2 + s[i].m3;
        s[i].avg = s[i].total / 3;

        if (s[i].avg > s[top].avg)
            top = i;
    }

    cout << "\nRoll\tName\tTotal\tAverage\n";
    for (i = 0; i < n; i++)
        cout << s[i].roll << "\t" << s[i].name << "\t" << s[i].total << "\t" << s[i].avg << endl;

    cout << "\nHighest average: " << s[top].name << " " << s[top].avg << endl;
    cout << "\nMade By Ohm :)";
    return 0;
}