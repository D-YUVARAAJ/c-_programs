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
    vector<int> divisors;

    for(int i=1; i<=sqrt(N);i++)
    {
        if(N%i ==0)
        {
            divisors.push_back(i);
            divisors.push_back(N/i);
        }
    }

    //sorting the vector
    sort(divisors.begin(),divisors.end());





   cout<<"divisors of given value is \n";
   for(auto it : divisors)
   {
    cout<<it<<" ";
   }

}