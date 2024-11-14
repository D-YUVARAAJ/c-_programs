#include<iostream>
using namespace std;


void calc(int astronauts,int needed)
{
    cout<<"total petrol consumed by this rocket is "<<(20+needed)<<endl;
    cout<<"petrol need to be refilled extra is "<<needed<<endl;
    cout<<"no of astronauts going to travel is "<<astronauts<<endl;
}


int main()
{
   system ("clear");
    int astronauts,needed;
   
    cout<<"enter the number of astronauts"<<endl;
    cin>>astronauts;
    needed = astronauts*5;
    if(astronauts<=50 && astronauts>=0)
    {
        calc(astronauts,needed);
    }
    else{
        cout<<"invalid count"<<endl;
    }


    return 0;
}