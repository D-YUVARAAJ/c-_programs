#include<iostream>
#include<set>
using namespace std;



//fucntion to print the set

void printing(set<int> sssss)
{
    for(auto it :sssss )
    {
        cout<<it<<" ";
    }
}



//main function 


int main()
{
    

    system("clear");
   
    int total;
    set<int>students;

    //getting the class strewngth

    cout<<"enter total no of students:";
    cin>>total;


    //creating total students set in students varilable  

    for(int i=1;i<=total;i++)
    {
        
        students.insert(i);
    }



    
    printing(students);



    

    return 0;


}