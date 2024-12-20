#include<iostream>
#include<vector>

int main()
{
     std::vector<int> arr{1,2,2,2,2,2,3,4,4,4,4,4,4,5,6};
    int i=0;
    for(int j=1;j<arr.size();j++)
    {
        if(arr[i]!= arr[j])
        {
            arr[i+1] = arr[j];
            i++;
        }
    }

    for(auto it:arr)
    {
        std::cout<<it<<" ";
    }
        std::cout<<"original array size is "<<i+1;
}
