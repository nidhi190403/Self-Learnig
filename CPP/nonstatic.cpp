//non static function can access static data 
#include<iostream>
using namespace std;
class MyDate
{
	int day,month,year;//instance variable
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
		void display()
		{
			cout<<"date is "<<day<<"/"<<month<<"/"<<year<<endl;
			cout<<"number of object created is "<<count<<endl;
		}
	
};
int MyDate::count=0; 
int main()
{
	MyDate d1;
	d1.display();
	MyDate d2(1,2,2001);
	d2.display();
	d1.display();
}