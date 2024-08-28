#include<iostream>
using namespace std;
int shape(int, char);
int main()
{
	int num;
	char ch;
	cout<<"Enter a number:";
	cin>>num;
	cout<<"Eenter a character:";
	cin>>ch;
	shape(num ,ch);
	return 0;
}
int shape(int n, char c)
{
	int i,j;
	for(i=1; i<=n; i++)
	{
		cout<<endl;
		for(j=1; j<=n; j++)
		cout<<c;
	}
}

