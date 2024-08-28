#include<iostream>
using namespace std;
int value(int);
int main()
{
	int x;
	cout<<"Enter a number:";
	cin>>x;
    value (x);
	return 0;
}
   int value(int x)
   {
   	int p,n;
   	p=x-1;
   	n=x+1;
   	cout<<"Precessor of "<< x <<" is "<<p<<endl;
   	cout<<"successor of "<< x <<" is "<<n<<endl;

   }
   
   

