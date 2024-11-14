#include<iostream>
#include<vector>
using namespace std;

void pairbasic()
{
    pair<int,int> yuva={1,3};
    
    cout<<yuva.first<<endl;
    cout<<yuva.second<<endl;


    //give seperately 

    pair<int,int> raaj;
    cout<<"enter value 1 and 2 for pair1str and [air 2nd]"<<endl;
    cin>>raaj.first;
    cin>>raaj.second;   
    cout<<raaj.first<<" "<<raaj.second<<endl;

    //enter value 1 and 2 for pair1str and [air 2nd]
//1
//2
//12



//changing the raaj.first value and printing it
cout<<"im changin the first value ot 10000"<<endl;
raaj.first = 10000;

cout<<raaj.first<<endl;


//nester pairs

    pair<pair<int,int>,int> y={{3,4},5};
    cout<<"nested pairs"<<endl;
   cout<< y.first.first<<y.first.second<<y.second<<endl;        //3 4 5
   

cout<<"arrays in pair"<<endl;
pair <int,int> yu[]={{1,2},{3,4},{5,6},{7,8},{9,10}};

cout<<yu[0].second<<endl;           //2
cout<<yu[1].second<<endl;               //4

    }






int main()
{
    system("clear");

    pairbasic();

    return 0;
    
}