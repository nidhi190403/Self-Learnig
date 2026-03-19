#include <iostream>
using namespace std;

// Area of square
int area(int side)
{
    return side * side;
}

// Area of rectangle
int area(int length, int breadth)
{
    return length * breadth;
}

int main()
{
    cout << "Area of square = " << area(5) << endl;
    cout << "Area of rectangle = " << area(5, 10);

    return 0;
}