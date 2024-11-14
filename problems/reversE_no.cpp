#include<bits/stdc++.h>
using namespace std;
int main()
{
    int no,last_no,rev=0;
    cout<<"enter no ";
    cin>>no;

    while(no!=0)
    {
        last_no = no%10;
        rev = (rev*10)+last_no;
        no=no/10;
    }

    cout<<"reversed number is :"<<rev;
}