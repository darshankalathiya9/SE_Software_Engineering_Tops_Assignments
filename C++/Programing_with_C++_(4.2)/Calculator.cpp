#include<iostream>
using namespace std;
main()
{
	int a,b,c,ans;
	char d,e;
	
	cout<<"Enter A Symbol to Perform Simple Calculator.";
	Again:
	cout<<"\n\n +. Enter Symbol To Addition of Three Number.\n -. Enter Symbol To Substraction of Three Number.\n *. Enter Symbol To Multiplication of Three Number.\n /. Enter Symbol To Division of Three Number.\n\n";
	fflush(stdin);
	cin>>d;
	
	cout<<"\n Enter First Value : ";
	cin>>a;
	
	cout<<" Enter Second Value : ";
	cin>>b;
	
	cout<<" Enter Third Value : ";
	cin>>c;
	
	switch(d)
	{
		case '+':
			ans = a+b+c;
			cout<<"\n Addition = "<<ans;
			break;
			
		case '-':
			ans = a-b-c;
			cout<<"\n Substraction = "<<ans;
			break;
			
		case '*':
			ans = a*b*c;
			cout<<"\n Multiplication = "<<ans;
			break;
			
		case '/':
			ans = a/b/c;
			cout<<"\n Division = "<<ans;
			break;
			
		default:
			cout<<"You Enter Invalid Input.\n Please Enter Valid Input."; 
	}
	
	cout<<"\n\n Do You Want to Perform Another Operation??? (Y/N) : ";
	fflush(stdin);
	cin>>e;
	if(e == 'y')
	{
		goto Again;
	}
}