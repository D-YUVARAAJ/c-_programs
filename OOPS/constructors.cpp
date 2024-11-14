#include<iostream>
using namespace std;

class dummy{

    

    int number;
    string word;

    public:

    dummy(int nnn, string sss)              //constructor is initialized saem as the class name 

    {
        number = nnn;                   // this is gettign and swapping 
        word = sss;
    }


    void print()
    {
            cout<<"hi my name is "<<word <<"and  i like the number "<<number<<endl;
    }
};



int main()
{
    dummy obj= dummy(5,"scythe");
    obj.print();
}