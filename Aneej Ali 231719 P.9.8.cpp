#include<iostream>
using namespace std;
int area(float s)
{
	float a;
	a=s*s;
	cout<<"Area="<<a<<endl;
}
int perimeter(float s)
{
   float p;
   p=s*4;
   cout<<"Perimeter="<<p<<endl;	
}
int main()
{
	float side;
	cout<<"Enter the length of side:";
	cin>>side;
	area(side);
	perimeter(side);
	return 0;
	
}
