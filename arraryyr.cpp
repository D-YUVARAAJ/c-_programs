/*
#include<iostream>
using namespace std;
int main()
{
    int a[5];
    for(int i=0;i<5;i++)
    {
        cin>>a[i];                  //get ip 5 nos and store in array . print 

    }

    for(int j=0;j<5;j++)
    {
        cout<<a[j]<<endl;
    }

}
*/

#include<iostream>
int main()
{
    int a[]={1,2,3,4,5,6,7,8,9,10};
    int b=sizeof(a);
    for(int i=0;i<=b;i++)
    {
        std::cout<<a[i];
    }
}