#include<iostream>
#include<string.h>
using namespace std;
class Data_Member
{
	char a[100],b[20],c[20],d[20];
	
	public:
		void Name()
		{
			cout<<" Name Of The Depositer = ";
			cin>>a;
		}
		
		void Account_number()
		{
			cout<<" Account Number = ";
			cin>>b;
		}
		
		void Type_of_Account()
		{
			cout<<" Type of Account = ";
			cin>>c;
		}
		
		void Balance()
		{
			cout<<" Balance Amount in The Account = ";
			cin>>d;
		}
};

class Member_Functions
{
	char e[20],f[20],g[20],h[20];
	
	public:
		void Assign_Values()
		{
			cout<<" To Assign Values = ";
			cin>>e;
		}
		
		void Deposited()
		{
			cout<<" To Deposited an Amount = ";
			cin>>f;
		}
		
		void Withdraw()
		{
			cout<<" To Withdraw an Amount = ";
			cin>>g;
		}
			
		void Display()
		{
			cout<<" To Display Account Holder Name and Balance = ";
			cin>>h;
		}	
};

main()
{
	Data_Member obj;
	
	obj.Name();
	obj.Account_number();
	obj.Type_of_Account();
	obj.Balance();
	
	Member_Functions ob;
	
	ob.Assign_Values();
	ob.Deposited();
	ob.Withdraw();
	ob.Display();
};