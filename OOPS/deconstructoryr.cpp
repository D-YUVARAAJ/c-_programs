#include<iostream>
using namespace std;

class rough{
    
    public:

    rough()                                                 // constructor
    {
        cout<<endl;
        cout<<"im inside the class constructor "<<endl;
    }

    ~rough()                                                   //deconstrctor execute at the end of prg after retrun 0
    {
        cout<<"im deconstructor!!!!!!!!!!!!"<<endl;

    }


};


int main()
{
    rough obj ;
    cout<<"im from main function inbetween the obeject creation and  end of program"<<endl;



}