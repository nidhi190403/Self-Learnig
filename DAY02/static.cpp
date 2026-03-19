//program to count no of objects created
#include<iostream>
using namespace std;
class MyDate
{
	int day,month,year;//instance variable
public:
	static int count;//static variable
	public:
		
		MyDate()//no args constructor
		{
			cout<<"no arg constructor is called\n";
			day=27;
			month=2;
			year=2026;
			count++;
		}
		MyDate(int d,int m,int y)
		{
			cout<<"para constructor called\n";
			day=d;
			month=m;
			year=y;
			count++;
		}
		void display()const
		{
			cout<<"date is "<<day<<"/"<<month<<"/"<<year<<endl;
		}
	
};
int MyDate::count; 
int main()
{
	MyDate d1;
	cout<<"no of obj created is "<<MyDate::count<<endl;

	MyDate d2(1,2,2001);
	cout<<"no of obj created is "<<MyDate::count<<endl;
	cout<<"no of obj created is "<<d1.count<<endl;
	
	
	
}