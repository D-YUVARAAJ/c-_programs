#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int N;

    int total_times_jumped=0;
    cin>>N;                                     //N is where im there .ill move 
    int jumps=0;
    vector<int> steps;
                                        // creating a vector with 0 to nth element
    for(int i=0;i<=N;i++)
    {
        steps.push_back(i);
    }

    while(N !=0)
    {
        if(N%2 ==0)
        {
            jumps = N/2;    

            for(jumps; jumps>0 ; jumps--)          //if i have to jump 2 times means jumps is greate than 0 . so 2,1. so 2 times it will run
            {

            steps.pop_back();
                                                        /// now im declarin the N(that is my position to last one in array , that is end-1)
             N = *steps.end()-1;       // dereference the address to the val using *

             // also u can use the 

              //N= steps.back();

              // to see how many times i jumped , not the single single steos , its even means 1 , then odd means 2 , then even means 3 ,then even means 4 
              // so i count every time it enters the odd and even  , not how many s tep it jumo

             
            }

             total_times_jumped = total_times_jumped+1;

        }




        else{

            steps.pop_back();
             N = *steps.end()-1;       // dereference the address to the val using *
             total_times_jumped = total_times_jumped+1;
        }

    } 

    cout<<"total jumps is "<<total_times_jumped<<endl;   


}