#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
using namespace std;
int main()
{
    int N;
    
    cout<<"enter the number \n";
    cin>>N;
    int maximum=0;

    for(int i=sqrt(N);i >=1; i--)                       //to see the 2x3=6 where i os 2 then 3 is N/i (6/3) 
    {
        if(N%i ==0)                                               //if (6%3is 0 ) then  its 3x2 = 6
        {
             maximum  = max(i,(N/i));                   // bothj 3 and 2 is coming as divisor so check which is greater and print it 
            break;
        }
    }

    cout<<"largest divisor is "<<maximum;

}