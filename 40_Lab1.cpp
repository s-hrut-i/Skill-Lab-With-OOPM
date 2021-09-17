//To Add Two Numbers, Print Number Entered by User, Swap Two Numbers, Check Whether Number is Even or Odd
#include<iostream>
using namespace std;

int main()
{
	/*int n1,n2,result;
	n1=10;
	n2=5;
	result=n1+n2;
	cout << n1 << " + " << n2 << " = " << result; 
	
	int num1,num2;
	cout<<"\n Enter 2 numbers";
	cin>>num1>>num2;
	cout<< " Entered numbers are:" << num1<< " " << num2;
	
	
	int a,b,c;
	cout<<"\n Enter two no to swap:";
	cin>>a>>b;
	c=a;
	a=b;
	b=c;
	cout<<"\n Swapping the numbers: \n";
	cout<<" a= "<<a<<" b= "<<b;*/
	
	
	int num=5;
	cout<<"\n Number is:";
	cin>>num;
	
	if ( num % 2 == 0)
	cout<<num<<"  is even";
	else
	cout<<num<<"  is odd";
	
	return 0;
		
}
