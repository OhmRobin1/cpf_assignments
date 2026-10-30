#include<iostream>
using namespace std;

struct patient
{
    int id;
    char name[20];
    int age;
    char type;          
    union
    {
        int days;       
        float fee;      
    } u;
};

int main()
{
    patient p[50];
    int n, i;

    cout << "Enter number of patients: ";
    cin >> n;

    for (i = 0; i < n; i++)
    {
        cout << "Enter id: ";
        cin >> p[i].id;
        cout << "Enter patient name: ";
        cin >> p[i].name;
        cout << "Enter age: ";
        cin >> p[i].age;
        cout << "Enter type(O or I): ";
        cin >> p[i].type;

        if (p[i].type == 'I')
        {
            cout << "Enter days admitted: ";
            cin >> p[i].u.days;
        }
        else
        {
            cout << "Enter consultation fee: ";
            cin >> p[i].u.fee;
        }
    }

    for (i = 0; i < n; i++)
    {
        cout << "\nID: " << p[i].id << "\nName: " << p[i].name << "\nAge: " << p[i].age << endl;
        if (p[i].type == 'I')
            cout << "Indoor patient, days admitted: " << p[i].u.days << endl;
        else
            cout << "Outdoor patient, consultation fee: " << p[i].u.fee << endl;
    }
    cout << "\nMade By Ohm :)";
    return 0;
}