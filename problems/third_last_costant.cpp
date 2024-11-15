#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<char> vowels = {'a','e','i','o','u','A','E','I','O','U'};
    string user;
    cout<<"enter calue: \n";
    cin>>user;                                  //yuvaraaj

    vector<char> result;                            //result vector im storing all the strings individually

    for(int x=0;x<user.size();x++)
    {
        result.push_back(user[x]);
    }

    



    for(int i=0; i<vowels.size();i++)
    {
        for(int j=0;j<result.size();j++)
        {
            if(vowels[i] == result[j])
            {
                    result.erase(result.begin()+j);
            }
        }
    }

    for(auto it : result)
    {
        cout<<it<<" ";
    }

    cout<<"\n last 3rd element in the given string is :";
    auto element = result.end()-3;
    cout<<*element; 

}