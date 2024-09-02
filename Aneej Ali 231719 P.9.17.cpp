#include<iostream>
using namespace std;
int fun();
int main()
{
	int i;
	for(i=1; i<=5; i++)
	fun();
	return 0;
}
int fun()
{
	static int n=0;
	n++;
	cout<<"Value of n="<<n<<endl;
}
