#include<iostream>
using namespace std;

class details{
    public:

    virtual void  bank_datas() = 0;                     //created an abstract ot use specific to their own banks        
};



class Bank{
    public:
        
    string username;
    int acc_no;                                     //its accessible withinf the class 

public : 
    Bank(int acc, string name){

        username = name ;                           //get user data commonly and inherit in  specific bank 
        acc_no = acc;
    } 

    void bank_datas()                                            //prints from universla bank 
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

    IOB(int acc,string name ,int  iob_branchcode):Bank(acc,name)   
    {
        iob_branchcode = iob_branchcode;
    }


                                            //hmethod hiding takes place , when i overlap the method of bank in this class , the bank method gets overlap and hided, 

    void bank_datas()
    {
        cout<<endl;
        cout<<" iob bank branch code "<<iob_branchcode<<endl<<"username"<<username<<endl<<"acount number "<<acc_no<<endl;
    }
                    // so to use the hided method from the bank use this 
                    // object of this class dot class BAnk :: method name 

    

} ;







int main()

{
    Bank iob = Bank(1232454,"scythe");
    iob.bank_datas();

    IOB iob1 = IOB(98765,"clay",1111);

    iob1.bank_datas();
    //to print the hided method from iob , print the method of inherited bank 

}


  