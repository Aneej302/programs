#include<iostream>
using namespace std;
int table(int n);
int main()
{
	int n;
	cout<<"Enter a number:";
	cin>>n;
	table(n);
	return 0;
}
   int table(int n)
   {
   	int c;
	for(c=1; c<=10; c++)
	{
   	cout<<n<<"*"<<c<<"="<<n*c<<endl;
   }
}
