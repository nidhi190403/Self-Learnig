#include <iostream>
using namespace std;

class Book
{
private:
    int bookId;
    string title;
    string author;
    float price;

public:
    void input()
    {
        cout << "Enter Book ID: ";
        cin >> bookId;

        cout << "Enter Title: ";
        cin >> title;

        cout << "Enter Author: ";
        cin >> author;

        cout << "Enter Price: ";
        cin >> price;
    }

    void display()
    {
        cout << "Book ID: " << bookId << endl;
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Price: " << price << endl;
        cout << "----------------------" << endl;
    }
};

int main()
{
    Book b[4];

    // Input
    for(int i = 0; i < 4; i++)
    {
        cout << "\nEnter details of Book " << i + 1 << endl;
        b[i].input();
    }

    // Display
    cout << "\nBook Details:\n";
    for(int i = 0; i < 4; i++)
    {
        b[i].display();
    }

    return 0;
}