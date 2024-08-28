#include<iostream>
using namespace std;
int cal(int  a, int b, char op);
int main()
{
	int x, y;
	char c;
	cout<<"Enter first number:";
	cin>>x;
	cout<<"Enter operator:";
	cin>>c;
	cout<<"Enter second number:";
	cin>>y;
	cal(x, y, c);
	return 0;
}
 int cal(int a, int b, char op)
 {
 	switch(op)
 	{
 		case'+':
 		cout<<a<<" + "<<b<<" = "<<a+b;
 		break;
 			case'-':
 		cout<<a<<" - "<<b<<" = "<<a-b;
 		break;
 			case'*':
 		cout<<a<<" * "<<b<<" = "<<a*b;
 		break;
 			case'/':
 		cout<<a<<" / "<<b<<" = "<<a/b;
 		break;
 			case'%':
 		cout<<a<<" % "<<b<<" = "<<a%b;
 		break;
 		default:
 			cout<<"Invalid operator!";
	 }
 }
