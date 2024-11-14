#include<iostream>
using namespace std;


void yyyy(int yaa)
{
    yaa+=5;
    cout<<yaa<<endl;                                              //1st 10
    yaa+=3;                           
    cout<<yaa<<endl;                                                  //2nd 13
}


int main()

{
    int a=5;
    yyyy(a);
    cout<<a<<endl;                                                          //3rd 5
    cout<<(void*)yyyy<<endl;                                                           // 4th   i get address in bool as 1 so put void* to print the address rawly , so i get this as address 0x5ded24e30189    return 0;
}

