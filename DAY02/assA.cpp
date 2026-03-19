#include <iostream>
using namespace std;
string companyName = "IET Pvt Ltd";
class Employee
{
private:
    int empId;
    string name;
    float salary;
public:
    static int totalEmployees;
    Employee(int id, string n, float sal)
    {
        empId = id;
        name = n;
        salary = sal;
        totalEmployees++; 
    }
    void display()
    {
        cout << "Employee ID: " << empId << endl;
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
        cout << "Company: " << companyName << endl;
        cout << "------------------------------" << endl;
    }
    static void showTotalEmployees()
    {
        cout << "Total Employees: " << totalEmployees << endl;
    }
};
int Employee::totalEmployees = 0;
int main()
{
    Employee e1(101, "Nidhi", 50000);
    Employee e2(102, "Rahul", 45000);
    Employee e3(103, "Amit", 55000);
    Employee e4(104, "Sneha", 60000);
    Employee e5(105, "Karan", 48000);
    e1.display();
    e2.display();
    e3.display();
    e4.display();
    e5.display();
    Employee::showTotalEmployees();
    return 0;
}