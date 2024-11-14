#include<iostream>
using namespace std;



class pointers_basics{

    public:


    void pointers_basic()
    {
        int a = 5;

    int *point;
    point = &a;

    cout<<point<<endl;          //0x7ffec9ae333c        addres of a 
    cout<<&a<<endl;         //0x7ffec9ae333c   addres of a
    cout<<a<<endl;              //5

    //DEREFERENCING
    cout<< *point<<endl;        //5                     gives the value of what address it stores 

    //changing the value of a 

    *point = 99;
    cout<<a<<endl;                      //99
    cout<<*point<<endl;                     //99
    }





    void working_with_pointers()
    {
        int a=5;
        int b=20;
        int *pointeee = &a;
        cout<<a<<'\t'<<b<<endl;             // 5  20
        // now im putting the value of b in a , addres of a la im putting the val of b , so 

        *pointeee = b;
        cout<<a<<'\t'<<b<<endl;         //20   20 
    }

    void pointers_arithmetic()
    {
        int a=5;
        int *p = &a;
        cout<<p<<endl;              //address of thje a 0x7ffd80ced35c
        cout<<p+1<<endl;            // next address to the address of a 0x7ffd80ced360

        cout<<*p<<endl;                 //dereference address to val of a 5
        cout<<*p+1<<endl;               // dereference addres of p , we hav teh val =5 , then add 1 to 5 (5+1)= 6
        cout<<*(p+1)<<endl;                // derefernce the address of p+1 , which has no value in it so throws error 
       
       // u cant directly assign value to address wihtout variable , bcoz it cant be called like  p+1 = 20;
        
        //i cant manually assign the address to any var , so i cant do anything 
    }





};




int main()
{
    system("clear");
    pointers_basics one;
    //one.pointers_basic();
    one.pointers_arithmetic();

    




}