/*Write a C++ and Java program to input electricity unit charge and calculate the total electricity bill 

according to the given condition:

	For first 50 units Rs. 0.50/unit
	For next 100 units Rs. 0.75/unit
	For next 100 units Rs. 1.20/unit
	For unit above 250 Rs. 1.50/unit
An additional surcharge of 20% is added to the bill.*/
#include<iostream>
#include<iomanip>
#include<cstdio>

using namespace std;
 
 int main()
 {
 int unit;
 float amt,total,surcharge;
 
 cout <<"Enter total units consumed:";
 cin >>unit;
 
 if (unit<=50)
 {
 	amt=unit*0.5;
 }
 else if (unit<=150)
 {
 	amt=25 + ((unit-150)*1.20);

 }
 else if (unit<=250)
 {
 	amt=100 + ((unit-250)*1.50);
 }
 
 surcharge=amt*0.20;
 total=amt+surcharge;
 
 cout<<"Electricity Bill= Rs."<<setprecision(2)<<fixed<<total;
 return 0;
 
 }
