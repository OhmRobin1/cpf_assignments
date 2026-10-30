#include<iostream>
using namespace std;

struct product
{
    int id;
    char name[20];
    char type;          
    union
    {
        int warranty;   
        int expiry;     
    } u;
};

int main()
{
    product p[50];
    int n, i;

    cout << "Enter number of products: ";
    cin >> n;

    for (i = 0; i < n; i++)
    {
        cout << "Enter product id: "; 
        cin >> p[i].id;
        cout << "Enter product name: "; 
        cin >> p[i].name;
        cout << "Enter type(E OR F): "; 
        cin >> p[i].type;


        if (p[i].type == 'E')
        {
            cout << "Enter warranty in months: ";
            cin >> p[i].u.warranty;
        }
        else
        {
            cout << "Enter expiry in days: ";
            cin >> p[i].u.expiry;
        }
    }

    for (i = 0; i < n; i++)
    {
        cout << "\nID: " << p[i].id << "\nName: " << p[i].name << endl;
        if (p[i].type == 'E')
            cout << "Warranty: " << p[i].u.warranty << " months" << endl;
        else
            cout << "Expiry: " << p[i].u.expiry << " days" << endl;
    }


    cout << "\nSize of union: " << sizeof(p[0].u) << " bytes" << endl;
    cout << "Two separate variables: " << 2 * sizeof(int) << " bytes" << endl;
    cout << "\nMade By Ohm :)";
    return 0;
}