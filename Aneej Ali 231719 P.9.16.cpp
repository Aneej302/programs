#include<iostream>
using namespace std;
int g;
int fun();
int main()
{
	cout<<"Enetr a number:";
	cin>>g;
	cout<<"Value of g before function call:"<<g<<endl;
	fun();
	cout<<"Value of g after function call:"<<g<<endl;
	return 0;
}
int fun()
{
	g=g*2;
}
