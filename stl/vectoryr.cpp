#include<iostream>
#include<vector>
using namespace std;


void vectorbasic()
{
    //INITIALIZE


    vector<int> yuva;     //created a dynamic array 
    //manual a im putting the size by using push_back

    vector <int> yuva1(5);           //i created a vector with size 01234
    //i can use pushback and  add more than that 5 also 

    vector<int> yuva2(5,6);  //created a vec with 5 index and all are wiht default val 66666


    //STORING ELEMENTS DIRECTLY 



    vector<int> yuva3={33,2,3,4,5};
    cout<<yuva3[0]<<endl;               //33
    cout<<yuva3[2]<<endl;               //3    
    yuva3[7] = 454545;                      //vect size is only 01234 but i give to 7 so {33,2.3.4.5.0.0.454545}
    cout<<yuva3[5]<<endl;                   //garbage value or 0 (i got 1041)
    cout<<yuva3[7]<<endl;                       // 454545

    // it will be like yuva3={33,2,3,4,5,0,0,454545}





    
    cout<<"vector using pair"<<endl;



    vector<pair<int,int>> yuva4(3);     //which means yuva4={{1,2}{3,4}{5,6}}
    yuva4[0].first=1;
    yuva4[0].second=2;              //yuva4={{1,2}{0,0}{0,0}}


    //ACCESS ELEMENT SEPERATELY 


    cout<<yuva4[0].first<<endl;         //1
    cout<<yuva4[0].second<<endl;         //2
    cout<<yuva4[1].first<<endl;     //0





    //SIZE AND RESIZE--->(EXPAND OR CROP )




    cout<<"size of yuva4 vvvv"<<endl;        //size is 3
    cout<<yuva4.size()<<endl;           // gives the op as 3 bcoz 1,2 is 1 . then 0,0 is 2 , then 0,0 is 3
    

    cout<<"resize the vect with past size as 3 to 7 , then showing aftere effects"<<endl;
    /*

        If the new size is equal to current size, then nothing will happen.
    If the new size is less than current size, then extra elements are deleted.
    If the new size is more than current size, then all the extra spaces will be initialized with zero or the specified value.*/
    
    yuva4.resize(7);
    cout<<"size after resizing to 7  is "<<yuva4.size()<<endl;     



    cout<<"yuva5={1,2,3,4,5};"<<endl;

    vector<int> yuva5={11,2,3,4,55};
    
    // to get the 1st element 

    cout<<yuva5.front()<<endl;        //11

    //to get last element

    cout<<yuva5.back()<<endl;        //55






    //MODIFIERS






    cout<<'\n'<<"MODIFIERS"<<'\n'<<endl;

    vector<int> yuva6;    //created an empty vector with dynamic memory 
    yuva6.push_back(10);    // yuva6={10}
    yuva6.emplace_back(20); // yuva6={10.20}
    yuva6.emplace_back(30); // yuva6={10.20.30}
    yuva6.emplace_back(40); // yuva6={10.20.30,40}
    yuva6.pop_back();       // yuva6={10.20.30}  IT REMOVED LAST ELEMENT

    cout<<yuva6[0]<<" "<<yuva6[1]<<" "<<yuva6[2]<<" "<<yuva6[5]<<endl;   //10 20 30 0 vector will be {10.20.30.0.0.0}


    //iterators


    cout<<"ITERATORS"<<endl;

        //used ot iterate and print the output of the containers 
         
         //to declare use 2 methods

         //1
         vector<int>yuva7={1,2,3,4,5,6,7,8,9};


         vector<int>::iterator stores=yuva7.begin();
         //or
        // auto stores1 = yuva7.begin();
         auto stores1 = yuva7.end();
         auto stores2 = yuva7.rbegin();
         auto stores3 = yuva7.rend();



         cout<<&(stores)<<endl;         //give the adderss that is  0x7fff6c6815e0
         cout<<*(stores)<<endl;     //prints value in that address that is value is 1
         cout<<*(stores1)<<endl;   // the last element(9) oda nesxt is empyu so iy gives as 0
         cout<<*(stores2)<<endl;   // begins form reverse so it prints as 9  togo to next means +1 , so 8 iy goes last to first
        cout<<*(stores3)<<endl;   // the first element(1) oda precoius is empyu so iy gives as 0



        cout<<"to print all the elements in the yuva8 using the iterator concept in vector"<<endl;


        vector<int>yuva8={11,22,33,44,55,66,77};

        vector<int>::iterator mothal=yuva8.begin();         //get teh 0th address
        //another method instad f putting iterator
        auto mudivu = yuva8.end();



        for(mothal;mothal!=mudivu;mothal++)         //(oth address, oth address is not equal to empty after 77 that is x; 0th address+1)
        {                                       //now if address is equals to the empty address (end) then loop breaks
            cout<<*(mothal)<<endl;


        }

        



  
  
           
  











    
   





}











int main()
{
    system("clear");

    vectorbasic();

    return 0;
}