//count thje nuber present in the given number  eg 145 la we ahv 3 numbers 
#include<bits/stdc++.h>

using namespace std;


void normal_method(int number)
{
    int count;
    while(number>0)
    {
        number=number/10;       //145/ 10 gives the 14.5 where the int is 14 . now it increments the count value by 1 
        
        count++;

        cout<<"numbers present is :"<<count;
        
    }
}

void log_method(int number)
{
    int result = log10(number)+1;
    cout<<"number using log10(number)+1 is "<<result;
}




int main()
{
    int number;
    cout<<"ente rthe number "<<endl;
    cin>>number ;

    //normal_method(number);
    log_method(number);

    

}