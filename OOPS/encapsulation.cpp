#include<iostream>
using namespace std;



    //encapsulation is mainly using the getter and setter method to use the private attributes inside the class , 
    //getter and setter are used by using the methods , 
    // ill declare the getter and setter for int inside thew class and for string outside the class to practice the method defining

    class school {
                                               // default is private so i no need to mention it 
        int  bank_acc;
        int aadhar_no;

        public:                     //set it public to acces the private . 

        void set_bank(int user_data)
        {
            bank_acc = user_data;                   //its bcopz provate can be accessed withing the  class. 
        }

        void get_bank()
        {
            cout<<"bank no="<<bank_acc<<endl;
        }



        void set_aadhar(int aadhar_user);                   //method declaration to define outside of the class
        void get_aadar();
    };





    //defining mewthod outside the class

    void school::set_aadhar(int aadhar_user)
    {
            aadhar_no = aadhar_user;
    }


    void school::get_aadar()
    {
        cout<<"aadhar no of the student "<<aadhar_no<<endl;
    }


int main()
{
    system("clear");

    school student1;
    student1.set_bank(123456789);
    student1.set_aadhar(1111111);           //setter is to set 



    student1.get_bank();                //getter is used to get the data which is private 
    student1.get_aadar();


}