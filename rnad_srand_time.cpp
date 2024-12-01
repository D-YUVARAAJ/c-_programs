#include<iostream>
#include<cstdlib>           // for rand and srand
#include<ctime>

using namespace std;

class random{

public:
   void normal()         //give random number , but the same numbr everytime i run the program.
    {
        cout<<rand()<<endl;
        cout<<rand()<<endl;
        cout<<rand()<<endl;
    }

    void with_srandd()
    {
        //here i use srand function to change the starting index of rand one so that the value gets changes .

        srand(99);
        cout<<"using srand function"<<endl;
        cout<<rand()<<endl;
        cout<<rand()<<endl; 
    }

        //hre also the value gets changes using srand but srand changed value comes the same agin and again

        /*
        41
18467
6334
using srand function
361
23235*/

        void wiht_time()
        {
            //here i change srand value dynamically when system time changes , for this i use ctime headre
            int dynamic = time(0);
            srand(dynamic);
            cout<<"now value chanes everytime when i run the code differently  \n";
            cout<<rand()<<endl;
            cout<<rand()<<endl;
            cout<<rand()<<endl;
        }

        void within_range()
        {
            // if i wanted to print the random numbr between 1 to 6 means i need to do a thing 
            // if i divide with the number 6 , then with any number i do , then reaminder value will be from 0 to 5
            //eg  35678%6 = 2 (remainder)
            //48645%6 = 3 . 
            //0,1,2,3,4,5. i  want 6 instead of 0 , so put +1 so 

            int dynamic = time(0);
            srand(dynamic);
            cout<<(rand()%6)+1<<endl;
            cout<<(rand()%6)+1<<endl;
        }

};



int main()
{
    random basic;
    //basic.normal();
    //basic.with_srandd();
    //basic.wiht_time();
    int n=5;
    system("cls");
   
    basic.within_range();
    
    
}