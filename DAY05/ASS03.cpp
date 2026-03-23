#include <iostream>
using namespace std;

int main()
{
    int choice;
    float balance = 1000, amount;

    do
    {
        cout << "\n1. Check Balance\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Exit\n";

        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "Balance = " << balance << endl;
                break;

            case 2:
                cout << "Enter amount to deposit: ";
                cin >> amount;
                balance += amount;
                break;

            case 3:
                cout << "Enter amount to withdraw: ";
                cin >> amount;
                if(amount <= balance)
                    balance -= amount;
                else
                    cout << "Insufficient balance\n";
                break;

            case 4:
                cout << "Exiting...\n";
                break;

            default:
                cout << "Invalid choice\n";
        }

    } while(choice != 4);

    return 0;
}