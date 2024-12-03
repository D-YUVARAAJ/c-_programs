#include<iostream>
#include<vector>
using namespace std;

/*

void computation(int number , vector<int> & hashing)
{
        cout<<"the number is occured "<<hashing[number]<<"times \n";
}


int main()
{
    int number,size,dummy;
    vector<int> array;
    cout<<"enter the arrray size:";
    cin>>size;
     cout<<"enter the arrray elements:";
    for(int i=0;i<size;i++)
    {
        cin>>dummy;
        array.push_back(dummy);
    }
    cout<<"enter the number to find:";
    cin>>number;

    //hashing 
    vector<int> hashing(13,0);
    cout<<"hashing initialized with all zero values\n";
                                                                                                            for(auto it:hashing)                                                
                                                                                                            {
                                                                                                                cout<<it<<" ";
                                                                                                            }
                                                                                                                 cout<<endl;


     for(int x=0;x<array.size();x++)
     {
        hashing[array[x]]+=1;                             //VERY IMPORTANT SEE THSI

     }

        cout<<"hashing after value is added\n";
                                                                                                                            for(auto it:hashing)                                                
                                                                                                                                {
                                                                                                                                    cout<<it<<" ";
                                                                                                                                }
                                                                                                                                cout<<endl;
    computation(number,hashing);

}
*/