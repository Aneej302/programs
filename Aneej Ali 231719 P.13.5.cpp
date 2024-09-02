#include<iostream>
using namespace std;
class Result
{
	private:
	int rno,marks[3];
	char name[50];
	public:
		int input()
{
	cout<<"Enter Roll No:";
	cin>>rno;
	cout<<"Enter name:";
	cin>>name;
	for(int i=0; i<3; i++)
	{
		cout<<"Enter marks["<<i<<"]:";
		cin>>marks[i];
			}		
		}
		int show()
		{
			cout<<"Roll No="<<rno<<endl;
			cout<<"Name="<<name<<endl;
			for(int i=0; i<3; i++)
			cout<<"Marks["<<i<<"]:"<<marks[i]<<endl;
		}
		int total()
		{
			int t=0;
			for(int i=0; i<3; i++)
			t=t+marks[i];
			return t;
		}
		float avg()
		{
			int t=0;
			for(int i=0; i<3; i++)
			t=t+marks[i];
            return t/3.0;
		}
};
int main()
{
	Result r;
	r.input();
	r.show();
	cout<<"Total marks="<<r.total()<<endl;
	cout<<"Average marks="<<r.avg()<<endl;
	return 0;
}
