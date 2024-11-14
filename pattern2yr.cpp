#include<iostream>
using namespace std;




void pattern7(int size)
{
    int zerone;
    for (int i=1;i<=size;i++)
    {
        zerone=(i%2==0)?0:1;
        for(int j=1;j<=i;j++)
        {

            cout<<zerone<<" ";
            zerone = !zerone;
                
        }

        cout<<endl;
    }
}

void pattern8(int size)
{
    int i,j,k;
    k=1;
    for(i=1;i<=size;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<k<<" ";
            k+=1;
        }
        cout<<endl;
    }
}

void pattern9(int size)
{
    int i,j;
    for(i=0;i<=size;i++)
    { 
        for(j=size;j-i>=1;j--)
        {
            cout<<"x";
        }
        cout<<endl;
    }
}

void pattern10(int size)
{
   
   
   int i,j;
   for(i=size;i>=1;i--)
   {
    for(j=0;(i-j)>=1;j++)
    {
        cout<<i<<" ";
    }
    cout<<endl;
   }
   


}

void pattern11(int size)
{
     
}




int main()
{
    system("clear");
    int a;
    cout<<"enter a:";
    cin>>a;


        //pattern7(a);
        //pattern8(a);
        //pattern9(a);
        //pattern10(a);
        pattern11(a);




        return 0;
}








