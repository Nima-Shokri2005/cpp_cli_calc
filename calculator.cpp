#include <iostream>
#include <conio.h>
#include <math.h>
#include <stdlib.h> 
using namespace std;

calculator()
{
	cout<<"Calculator"<<endl<<endl;
	cout<<"Select One: "<<endl;
	cout<<"[1]  Arithmetic operations"<<endl;
	cout<<"[2]  Trigonometric operations"<<endl;
	cout<<"[3]  Power"<<endl;
	cout<<"[4]  Logarithm"<<endl<<endl;
	cout<<"Your choice: ";
	char ch;
	cin>>ch;
	
	system("cls");
	
	if(ch=='1')
	{
	 cout<<"Calculator"<<endl<<endl;
	 double x,y;
	 cout<<"Enter First number: ";
	 cin>>x;
	 cout<<"Enter second number: ";
	 cin>>y;
	 system("cls");
	 
	 cout<<"Calculator"<<endl<<endl;
	 cout<<"[1]  Addition"<<endl;
	 cout<<"[2]  Substraction"<<endl;
         cout<<"[3]  Product"<<endl;
         cout<<"[4]  Divsion"<<endl<<endl;
         cout<<"Your choice: ";
	 char a;
	 cin>>a;
    	    {
	     switch(a)
                {
                 case '1' : cout<<"x+y= "<<x+y; break;
    	         case '2' : cout<<"x-y= "<<x-y; break;
    	         case '3' : cout<<"x*y= "<<x*y; break;
	         case '4' : cout<<"x/y= "<<x/y; break;
	         default  : cout<<"Error";
	        }
	    }		
        } 
    
    if(ch=='2')
	{		
	 cout<<"Calculator"<<endl<<endl;
	 double x;
	 cout<<"<< The angle is in radians. >>"<<endl;
	 cout<<"Enter number: ";
	 cin>>x;
	 system("cls");
	 
	 cout<<"Calculator"<<endl<<endl;
	 cout<<"[1]  Sine"<<endl;
	 cout<<"[2]  Cosine"<<endl;
         cout<<"[3]  Tangent"<<endl;
         cout<<"[4]  Cotangent"<<endl<<endl;
         cout<<"Your choice: ";
	 char b;
	 cin>>b;
	  {
     	 switch(b)
	    {
	     case '1' : cout<<"sin(x)= "<<sin(x); break;
	     case '2' : cout<<"cos(x)= "<<cos(x); break;
	     case '3' : cout<<"tan(x)= "<<tan(x); break;
	     case '4' : cout<<"cot(x)= "<<1/tan(x); break;
	     default  : cout<<"Error";
	    }	
	  }	
        }
    
    if(ch=='3')
	{
	 cout<<"Calculator"<<endl<<endl;
	 double x,y;
	 cout<<"Enter First number: ";
	 cin>>x;
	 cout<<"Enter second number: ";
	 cin>>y;
	 system("cls");
	 
	 cout<<"Calculator"<<endl<<endl;
	 cout<<"x^y= ";
	 cout<<pow(x,y);	
	}
	
	if(ch=='4')
	{
	 cout<<"Calculator"<<endl<<endl;
	 int x;
	 cout<<"<< Form: log e(x) >>"<<endl;
	 cout<<"Enter x: ";
	 cin>>x;
	 system("cls");
       
         cout<<"Calculator"<<endl<<endl;
	 cout<<"log e(x)= "<<log(x);	
        }
}

main()
{
     system("color F0");
	
     calculator();
	
     while(true)
	{	
     char c;
     cout<<endl<<endl<<"Do you want to continue?"<<endl<<"[y/n]: ";
     cin>>c;
     if(c=='n')
     exit(0);	
     if(c=='y')
        {
         system("cls"); 
	 calculator(); 	
	}
	} 

    getch();
    return 0;
}
