#include<iostream>
using namespace std;

struct employee
{
    int id;
    char name[20];
    float basic, hra, da, gross;
};

int main()
{
    employee e[50];
    int n, i, top = 0;

    cout << "Enter number of employees: ";
    cin >> n;

    for (i = 0; i < n; i++)
    {
        cout << "Enter id: ";
        cin >> e[i].id;
        cout << "Enter name: ";
        cin >> e[i].name;
        cout << "Enter base salary: ";
        cin >> e[i].basic;
        cout << "Enter HRA: ";
        cin >> e[i].hra;
        cout << "Enter DA: ";
        cin >> e[i].da;


        e[i].gross = e[i].basic + e[i].hra + e[i].da;

        if (e[i].gross > e[top].gross)
            top = i;
    }

    cout << "\nID\tName\tBasic\tHRA\tDA\tGross\n";
    for (i = 0; i < n; i++)
        cout << e[i].id << "\t" << e[i].name << "\t" << e[i].basic << "\t"
             << e[i].hra << "\t" << e[i].da << "\t" << e[i].gross << endl;

    cout << "\nHighest gross salary: " << e[top].name << " " << e[top].gross << endl;
    cout << "\nMade By Ohm :)";
    return 0;
}