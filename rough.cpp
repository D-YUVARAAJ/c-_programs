#include<iostream>
#include<vector>
using namespace std;
int main()
{
  int  arr_siz,value;
  vector<int> arrai;
  cout<<"enter array size : \n";
  cin>>arr_siz;
  cout<<"enter array value : \n";
  for(int x =0; x<arr_siz;x++)
  {
     cin>>value;
    arrai.push_back(value);
  }

  int target;
  cout<<"enter target \n";
  cin>>target;

  for(int i=0; i <arr_siz;i++)
  {
    for(int j=(i+1); j<arr_siz;j++)
    {

      if(arrai[i]+arrai[j] == target)
      {
        cout<<i<<" "<<j<<endl;
      }
    }
  }
}