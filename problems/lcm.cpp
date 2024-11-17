#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter numbers: \n";
    cin>>a>>b;

    int maxx = max(a,b);
    int lcm=1;


        for(int i=2; i<= maxx;)
        {
            if(a%i ==0 || b%i==0)
            {
                lcm = lcm * i;
                
               if(a%i==0)
               {
                a=a/i;
               }
                if(b%i==0)
                {
                    b=b/i;
                }
                
            }

            else{
                i++;
            }
        }

    cout<<"lcm is :"<<lcm;

}