#include<iostream>
#include<cstdlib>
using namespace std;

struct book
{
    int id;
    char title[30];
    char author[20];
    float price;
    int qty;
};

int main()
{
    book *b;
    int n, i;

    cout << "Enter number of books: ";
    cin >> n;

    b = (book*)malloc(n * sizeof(book));

    for (i = 0; i < n; i++)
    {
        cout << "Enter book id: ";
        cin >> b[i].id;
        cout << "Enter book title: ";
        cin >> b[i].title;
        cout << "Enter author name: ";
        cin >> b[i].author;
        cout << "Enter price: ";
        cin >> b[i].price;
        cout << "Enter quantity: ";
        cin >> b[i].qty;
    }

    cout << "\nID\tTitle\tAuthor\tPrice\tQty\tValue\n";
    for (i = 0; i < n; i++)
        cout << b[i].id << "\t" << b[i].title << "\t" << b[i].author << "\t"
             << b[i].price << "\t" << b[i].qty << "\t" << b[i].price * b[i].qty << endl;

    free(b);
    cout << "\nMade By Ohm :)";
    return 0;
}