#include<iostream>
#include<string>
#include<fstream>

using namespace std;
int main()
{
    string variable;
    //create a variable for datatype fstream

    fstream my_file;

    //open ur file or create one if it doesnt exists

    //ios:: out -----> output (read and write )
    //ios:: app -----------> (append)
    //ios:: in ------------> (only read )

    my_file.open("animals.txt",ios::app|ios::in);  //this creaes a file names animal.txt

    

    

    //directly putting in file
    
    my_file<<"directly im inserting it in the file \n";
    my_file<<"im again directly inserting in the file \n";

    // to write in the opened folder

    cout<<"enter words to store in the file"<<endl;

/*

//TO GET SINGLE WORD 
    while(my_file) //starts if my_file is open, if not it ends
    {
        cout<<"enter: ";
        cin>>variable;          //gets only 1 word

        my_file<<variable<<endl;

        if(variable =="x")
        {
            my_file.close();                    //CLOSES THE FILE AND BREAKS THE WHILE LOOP 
            break;
        }
    }
*/



/*
// TO GET sENTENCE FOR EACH LINE 

    while(my_file)
    {
        getline(cin,variable);          //ILL GET SENTENCE UNTIL ENTER BUTTON IS FOUND 
        

        if(variable=="y")
        {
            my_file.close();
            break;
        }

        else
        {
            my_file<<variable<<endl;
        }
    }
    
    */

   //READ THE CONTENT LINE BY LINE FROM THE FILE 

   //firstly u need to get the line form file , store it in program , then display what is in the program 

   //already file is opened in append mode



            my_file.close();   //closes the write mode la opened file.

                    //read the file content

   string one_line;
   
   my_file.open("animals.txt",ios::in);

   while(getline(my_file,one_line))
   {
    cout<<one_line<<endl;
   }
        my_file.close();   //closes the file  
   



    


}