#include<iostream>
#include<vector>
using namespace std;
#include<map>

                        //INTEGER IN HASHING   
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



                            //CHARACTER IN HASHING 
/*
int main()
{
    int total;
    char finding;
    vector<char>datas;
    vector<int>hashing_char(26,0);
    char dummy;
cout<<"enter the total characters in array :";
cin>>total;
cout<<"enter the characters: \n";
while(total--)
{
    cin>>dummy;
    datas.push_back(dummy);

}
                                                                                            cout<<"contents inside empty hashing_Char is : \n";
                                                                                            for(auto it: hashing_char)
                                                                                            {
                                                                                                cout<<it<<" ";
    
                                                                                        }

//hasing in character
for(int x=0;x<datas.size();x++)
{
    hashing_char[datas[x]-'a']+=1;                                              //important 
}

cout<<"enter char to find its occurence:";
cin>>finding;

cout<<hashing_char[finding-'a'];


}

*/

                            //MAPPING MAIN
int main()
{
    int total;
    int finding;
    vector<int>datas;
   
    int dummy;
cout<<"enter the total number in array :";
cin>>total;
cout<<"enter the number: \n";
while(total--)
{
    cin>>dummy;
    datas.push_back(dummy);

}

       
        //mapping starts here


        map<int,int> mpp;
        for(int x=0;x<datas.size();x++)
        {
            mpp[datas[x]]+=1;           //created the key value and assigns 1 to it , if alredy assigned 1 means , adds another 1 so 2 will be the value of that key 
        }   


cout<<"enter number to find its occurence:";
cin>>finding;

cout<<"occurance time of number is :"<<mpp[finding]<<endl;      //here the key value is mentions so it provides the value of it 

cout<<"map iterations is : \n";
for(auto it:mpp)
{
    cout<<it.first<<"-->"<<it.second<<endl;
}


}
