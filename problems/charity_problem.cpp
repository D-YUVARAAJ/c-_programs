#include<iostream>
using namespace std;

int main()
{
    int N,sum=0;
    cout<<"enter n \n";
    cin>>N;

    for(int i=1 ;i<=N;i++)
    {
        sum=sum+(i*i);
    }

    cout<<"total coins given in charity is "<<sum<<endl;
}