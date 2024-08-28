#include<iostream>
using namespace std;
int swap(int &x, int &y);
int main()
{
	int a,b;
	cout<<"Enter an integer:";
	cin>>a;
	cout<<"Enter an integer:";
	cin>>b;
	cout<<"Values before swap:"<<endl;
	cout<<"a= "<<a<<endl;
	cout<<"b= "<<b<<endl;
	cout<<"Swap the values...."<<endl;
	swap(a,b);
	cout<<"Values after swap:"<<endl;
	cout<<"a= "<<a<<endl;
	cout<<"b= "<<b<<endl;
	return 0;
}
int swap(int &x, int &y)
{
	int t;
	t=x;
	x=y;
	y=t;
}
