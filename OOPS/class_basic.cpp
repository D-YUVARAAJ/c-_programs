#include<iostream>
using namespace std;
#define SICK system("clear");




                                //normal class with attribute only 
class dummy 
{   
    public:                     //by default its private os put public 

        int no;
        string name;
        
};



                                //class with method 
class car
{
    public :
    string color ;
    void colour(string ssss)
    {
        color = ssss;
    }
};

                                //class with method outside the class

class school
{
    public:

    int teachers;
    void evaluate(int tea);                     //method declarations 
    void print();
};

void school::evaluate(int tea)                      //method definition
{
    teachers  = tea;                                // i took the method outside of class to look clean by defining and declaring 
}

void school::print()
{
    cout<<"total teacher count is "<<teachers<<endl;
}







int main()
{       //1st one 

    dummy object_name;
    object_name.no = 5;
    object_name.name = "yuva";

    cout<<"hello broskies my name is "<<object_name.name<<" and i like the number  "<<object_name.no<<endl;
    cout<<"changing the name to scythe"<<endl;
    object_name.name = "scythe";
    cout<<"i changed my name to "<<object_name.name<<endl;

        //2nd one 
  //SICK;
    car first_car;
    first_car.color = "red";
    cout<<"i like the color "<<first_car.color<<". directly changes with asasa.color "<<endl;
    first_car.colour("black");
    cout<<"changes the colour using method function(little setter method) to"<<first_car.color<<endl;


    //3rd one 

    SICK;

    school jd_school;   
    jd_school.evaluate(38);
    jd_school.print();


    



}