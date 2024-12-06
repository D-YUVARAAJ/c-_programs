#include<iostream>
#include<vector>


void bubble(std::vector<int> & arr)
{
    for(int i=arr.size()-1 ;i>=0;i--)            //6 size means 1st itme upto 5 , 2nd time i-- so size will be 5, then 5-1 is 4 , which gores correct 
                                                    //if u give (i=0 i<n-1) means , if size =6 means , 012345 , 2nd time i=1, i<5 , so 1 to 5 12345 , 
                                                    //we wont get thecheck from 0 to last , we need to reduce the last not the first , check has to be from 0 everytime
    /*
    u cant for */
    {
        for(int x=0;x<i;x++)                             //i-1  means last index ku before , because i cant check lst with next to last 12345 mens check 4to5 , u cant 5 to air lol
        {
            if(arr[x]>arr[x+1])
            {
                std::swap(arr[x],arr[x+1]);
            }
        }
    }
}







int main()
{
    int size,dummy;
    std::vector<int> arr;

    std::cout<<"enter the size:";
    std::cin>>size;

    std::cout<<"enter the unsorted array :";
    while(size--)
    {
        std::cin>>dummy;
        arr.push_back(dummy);
    }

    bubble(arr);
    for(auto it:arr)
    {
        std::cout<<it<<" ";
    }
    
}