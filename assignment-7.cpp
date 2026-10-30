#include<iostream>
#include<cstdlib>
using namespace std;

struct item
{
    int id;
    char name[20];
    int qty;
    float price;
};

int main()
{
    item *it;
    int n, more, i, top = 0;
    float bill = 0;

    cout << "Enter number of items: ";
    cin >> n;

    it = (item*)malloc(n * sizeof(item));

    for (i = 0; i < n; i++)
    {
        cout << "Enter item id: "; 
        cin >> it[i].id;
        cout << "Enter item name: "; 
        cin >> it[i].name;
        cout << "Enter quantity: "; 
        cin >> it[i].qty;
        cout << "Enter price: "; 
        cin >> it[i].price;
    }

    cout << "How many more items to add: ";
    cin >> more;

    it = (item*)realloc(it, (n + more) * sizeof(item));

    for (i = n; i < n + more; i++)
    {
        cout << "Enter item id: "; 
        cin >> it[i].id;
        cout << "Enter item name: "; 
        cin >> it[i].name;
        cout << "Enter quantity: "; 
        cin >> it[i].qty;
        cout << "Enter price: "; 
        cin >> it[i].price;
    }
    n = n + more;

    cout << "\nID\tName\tQty\tPrice\tAmount\n";
    for (i = 0; i < n; i++)
    {
        cout << it[i].id << "\t" << it[i].name << "\t" << it[i].qty << "\t"
             << it[i].price << "\t" << it[i].qty * it[i].price << endl;

        bill = bill + it[i].qty * it[i].price;

        if (it[i].price > it[top].price)
            top = i;
    }

    cout << "\nTotal bill: " << bill << endl;
    cout << "Most expensive item: " << it[top].name << endl;

    free(it);
    cout << "\nMade By Ohm :)";
    return 0;
}