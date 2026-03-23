#include <iostream>
using namespace std;
int main()
{
    int a = 10, b = 20;
    a = a + b;
    b = a - b;
    a = a - b;
    cout << "After swapping:\n";
    cout << "a = " << a << " b = " << b;
    return 0;
}