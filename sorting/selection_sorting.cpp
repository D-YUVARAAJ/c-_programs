#include<iostream>
#include<vector>

void selection_sort(std::vector<int>&array)
{
    for(int i=0;i<array.size()-1;i++)
    {
        int minimum_temproary =i;               //array[0] is minimum in initial
        for(int x=i+1;x<array.size();x++)
        {
                if(array[x]<array[minimum_temproary])
                {
                    //if u found the next element is minimum , insetad of swapping just keep in memory that its minimum , then at the end u swap , this is 1st time 
                    // [4653] here 4<6 wont work. 5<6 works then instead of swapping 5 with 6 , then again checking , just keep min as 5 , then c
                    //check with min 5 with next 3 , now 3 is stored as minimum , lsatly the 1st index 4 is swapped with last one 3 , instead of randomly sorting ,
                    minimum_temproary=x; //only x , so it takes the index one 
                }
        }

         //now im swapping the minimum value with the array[0]
                std::swap(array[i],array[minimum_temproary]);
    }
}



int main()
{
    int size,element;
    std::vector<int> array;
    std::cout<<"enter size of array:";
    std::cin>>size;
    std::cout<<"enter element:";
    while(size--)
    {
        std::cin>>element;
        array.push_back(element);      
    }

    selection_sort(array);

    for(auto it: array)
    {
        std::cout<<it<<" ";
    }
}