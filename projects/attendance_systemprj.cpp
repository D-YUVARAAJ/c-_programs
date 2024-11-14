/*
global and local variable 
sets how to access sets using iteratos bcoz u can directly use like yu[] mlike how u do in vector
send set in function 
convert strinf to intefer using stoi
defininf the system(clear) as sick*/


#include<iostream>
#include<set>
#include<string>
using namespace std;


#define  SICK system("clear");


// I DECLARE THEM GLOBALLY SO THAT I CAN USE IT IN MY FDUNCTOINS AND MODIFY ANYWHERE I WANT
set<int>students;
set<int>presenteess;
set<int>absentees;



//fucntion to print the set

void printing(set<int> sssss)
{
    for(auto it :sssss )
    {
        cout<<it<<" ";
    }
}

// to get the students presented and modify through the callby reference
void presented_or_absented_students(set<int> &toing)
{
    string flag;
        SICK;
        cout<<"press X to stop giving the roll numbers "<<endl;
        cout<<"---->";

    for(int i=0;i<students.size();i++)
    {
        
        int roll_no;
        cin>>flag;

        if(flag =="X" || flag =="x")
        {
            break;
        }

        else{
            roll_no = stoi(flag);
            toing.insert(roll_no);
        }
    }

    
}


void working_process()
{
    auto pirst = presenteess.begin();
auto nextpirst =students.begin(); 
 auto xirst = absentees.begin();     //UR PUTTING THIS BCOZ U CAN PUT BEGIN++ IN FOR LOOP , BUT U CAN USE .END DIRECTLY


//condition to check which is not there
if(presenteess.size()!=0) //it means that user entered the presentees
{

   //U CANT USE THIS FOR LOOP , U HAV TO ITERATOR TO GO TO ALL ELEMENTS IN SET 
/*
    for(int i=0;i<presenteess.size();i++)
        for(int j=0;j<total;j++)
        */

       absentees.insert(students.begin(),students.end()); //student data is copied to absenttes then i remove the intersection to get the remaining as absentees


   

   for(pirst;pirst!=presenteess.end();pirst++)
   {
    for(nextpirst; nextpirst!=students.end();nextpirst++)
    {
        if(*pirst == *nextpirst)            //PUTTING * TO ACCESS THE ELEMENT INSIDE THE ADDRESs
        {
            absentees.erase(*pirst);        //is presentees is in total students means , eliminate it from the absentees list 
            break;                          //to stop teh remainig check  in full students as u got what u want , its waste only bcoz it weont find the no again.
        }//after break it moves to see the 2nd  presentees roll no 

    }
   }
}


else{                   //THIS IS IS ABSENTEES IS NOT EQUALS TO ZERO;

    //COPY TOTAL IN THE PRESENT THEN REMOVE 1 BY 1 WHICH IS ABSENT 
    presenteess.insert(students.begin(),students.end());
    //u need to use iterator to use the index in set , bcoz set wont support directly 
   

    //for  students.begin u already declared in above (within if condition it can be accessed withing the function int main)
    for(xirst;xirst!=absentees.end();xirst++)
    {
        for(nextpirst;nextpirst!=students.end();nextpirst++)
        {
            if(*xirst == *nextpirst)
            {
                presenteess.erase(*xirst);
                break;  

            }
        }
    }

}




                            SICK;

    cout<<"presentees roll no :";
    printing(presenteess);

    cout<<endl;
    
    cout<<"absentees roll no :";
    printing(absentees);
  
    

}





//main function 


int main()
{
    // datetyype initializing  

                    SICK;
    char preorab;
    int total;
    


    //getting the class strewngth

    cout<<"enter total no of students:";
    cin>>total;


    //creating total students set in students varilable  

    for(int i=1;i<=total;i++)
    {
        
        students.insert(i);
    }



    //ask to get present or absent
    

    cout<<"enter p to give the presentes no , or enter a to give absentees no:";
    cin>>preorab;



    //convert it to upper to check the condition 

    char decision=toupper(preorab);
    
    //present or absent get the fdata getting input

    if(decision=='P')
    {
        cout<<"presentees roll no :"<<'\n';

        presented_or_absented_students(presenteess);//presentd is stored

        working_process();
        

    }

    else if(decision == 'A')
    {
        cout<<"absentees roll no :"<<'\n';

        presented_or_absented_students(absentees); //absented is stored

        working_process();
        
    }

    else{
            SICK;
            cout<<endl;
        cout<<"enter the proper P or A"<<endl;
      

    }












    return 0;



}