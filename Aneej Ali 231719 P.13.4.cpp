#include<iostream>
using namespace std;
class Book
{
	private:
		int BookID,Pages;
		float price;
		public:
			int get()
{
	cout<<"Enter Book ID:";
	cin>>BookID;
	cout<<"Enter pages:";
	cin>>Pages;
	cout<<"Enter price:";
	cin>>price;
			}
int show()
{
	cout<<"BookID="<<BookID<<endl;
	cout<<"Pages="<<Pages<<endl;
	cout<<"Price="<<price<<endl;
}
int set(int id, int pg, float pr)
{
	BookID=id;
	Pages=pg;
	price=pr;
}
float getprice()
{
	return price;
}
};
int main()
{
	Book b1, b2;
	b1.get();
	b2.set(2,320,150.75);
	if(b1.getprice()>b2.getprice())
	b1.show();
	else
	b2.show();
	return 0;
}
