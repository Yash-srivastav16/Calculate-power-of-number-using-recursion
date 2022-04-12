#include<iostream>
using namespace std;
class power{
	private:
		int res=1;
	public:
		void pow(int n,int x)
		{
			if(x>0)
			{
				res*=n;
				pow(n,x-1);
			}
			else
			{
				cout<<res;
			}
		}
};
int main()
{
	int n,x;
	cout<<"Enter Number: ";
	cin>>n;
	cout<<"Enter Power Value: ";
	cin>>x;
	power num1;
	num1.pow(n,x);
	return 0;
}