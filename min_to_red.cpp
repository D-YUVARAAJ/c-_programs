#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int N;
    
    cout<<"enter the n ; \n";
    cin>>N;
    int operation;

    while(N>=1)
    {
        for(int x=sqrt(N);x>=1;x--)
        {
            if((N%x ==0) && (x!=1))
            {
                N = max(x,(N/x));
                
            }

            else{
                N=N-1;
            }
        }
    }

    cout<<"total operations is "<<operation;

}