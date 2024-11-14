#include<iostream>
using namespace std;

//abstraciton is totally different from what it is in the theoretical part , here u will init 1 abstract method , then u will call as if u want it 
class bank{

    public :
    virtual void details() =0;      //declares os i can use anytime inside any class


};



class iob:public bank{

    public:

    void details()
    {                                   //using it in the iob bank 
        cout<<"im iob bank"<<endl;
    }

};


class pnb :public bank{

    public:

    void details()
    {                                   //using it in teh pnb bank 
        cout<<"im pnb bank "<<endl;
    }

};


int main()
{
    iob useriob;                            //create obj to iob and print only iob asbtract
    useriob.details();

    pnb userpnb;                            //created obj to  pnb and print only pnb asbtract
    userpnb.details();
}