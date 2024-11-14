#include<iostream>
#include<cmath>
using namespace std;

int main()
{
int a;
int count;
cout<<"enter number to find prime or not ";
cin>>a;
system("clear");

if(a<=1)
{
    cout<<"the number"<<a<<"is"<<"prime number";
}



    for(int i=2;i<=sqrt(a);i++)
    {
        if(a%i==0)
        {
            cout<<"the number is  not prime number";
            count=1;
           break;
        }


    }

    if(count !=1)
    {
        cout<<"it is prime number ";
    }
    
    
    


<<<<<<< HEAD
} 
=======
} 
>>>>>>> 03f287f3f923b57e7f35d05018d342bfbc050d57
