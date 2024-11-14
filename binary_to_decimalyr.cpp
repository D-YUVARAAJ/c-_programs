#include<bits/stdc++.h>
using namespace std;
int main()
{
    system("clear");
    int value=0;
    int final=0;
    int j=0;

    string bin;
    cout<<"enter the binary number ,ill store as string ";
    cin>>bin;
    int b=bin.length();   //length a check fdgdfg
    //cout<<b<<endl;          //to show the length of string
   // cout<<bin[b-1];         //to show last valueof string 


    for (int i =b-1; i >=0;i--)                //last index to 0 
    {
        value=((bin[i]-'0') * pow(2,j));                      // last index x 2^0     then 2^1
        final = final+value;

        j++;
        
    }

    cout<<"decimal value of"<<bin<<"is"<<"\t:"<<final;


}