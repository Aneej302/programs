#include<iostream>
using namespace std;
class Test
{
	private:
	int n;
	public:
	int in()
	{
		cout<<"Enter a number:";
		cin>>n;
		}
		int out()
		{
			cout<<"The value of n="<<n;
		}
	};
	int main ()
{
	Test obj;
	obj.in();
	obj.out();
	return 0;
}
