#include<iostream>
using namespace std;




class Bank{
    public:
        
    string username;
    int acc_no;                                     //its accessible withinf the class 

public : 
    Bank(int acc, string name){

        username = name ;                           //get user data commonly and inherit in  specific bank 
        acc_no = acc;
    } 

    void print()                                            //prints from universla bank 
    {
        cout<<"basic detail of user from universal bank"<<endl<<"accno"<<acc_no<<"name:"<<username<<endl;
    }
};


class IOB: public Bank
{

    private:
    int iob_branchcode;


                                                                            //inheriting constructor 
    public:

    IOB(int acc,string name ,int  iob_branch):Bank(acc,name)   
    {
        iob_branchcode = iob_branch;
    }


                                            //hmethod hiding takes place , when i overlap the method of bank in this class , the bank method gets overlap and hided, 

    void print()
    {
        cout<<endl;
        cout<<" iob bank branch code "<<iob_branchcode<<endl<<"username"<<username<<endl<<"acount number "<<acc_no<<endl;
    }
                    // so to use the hided method from the bank use this 
                    // object of this class dot class BAnk :: method name 

    

} ;


class pnb :public Bank
{

    private:

    int pnb_branchcode;

    public:
    //create construcot for this and inherit the bank const (to put the vale to var in BAnk )
    pnb(int acc, string name , int pnb_branch):Bank(acc,name)
    {
        pnb_branchcode = pnb_branch;
    }


    void print()
        {
        cout<<endl;
        cout<<" pnb bank branch code "<<pnb_branchcode<<endl<<"username"<<username<<endl<<"acount number "<<acc_no<<endl;
        }


};





int main()

{

    system("clear");


    cout<<endl;
    
    Bank iob = Bank(1232454,"scythe");
iob.print();

cout<<endl;
    IOB iob1 = IOB(98765,"clay",1111);

    iob1.print();
    //to print the hided method from iob , print the method of inherited bank 

cout<<endl;

    iob1.Bank::print();         // seee the name has changed to clayt , and bank gotupdates  bcoz of that :Bank(cc,name)

cout<<endl;



// see this mainly 

 pnb pnbuser = pnb(121212,"jacky",999);

 pnbuser.print();       //gives the pnb  method

 pnbuser.Bank::print();     //gives the Bank  method . 




}

