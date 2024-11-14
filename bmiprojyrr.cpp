#include<iostream>      //for io statements
#include<iomanip>       //for setprecision
#include<cctype>        //for topupper
using namespace std;

int main ()
{
    char decision_weight;
    char decision_height;
    int  we;
    float hei;

    
    //which type nu getting 

    cout<<" TYPE 'K' TO ENTER IN KG , TYPE 'P' TO ENTER IN POUND"<<endl;
    cin>>decision_weight;
 

    cout<<" TYPE 'c' TO ENTER IN cm, TYPE 'm' TO ENTER IN meter"<<endl;
    cin>>decision_height;

    //chamge to upper even they type lower or upper

    char weight = toupper(decision_weight);
    char height = toupper(decision_height);

    //get data and convert it to required one 

    if (weight=='P')
        {
            cout<<"enter u weight in pound "<<endl;
        cin>> we;
        we = we*0.45359237; 
        }
    else
    {
        cout<<"enter u weight in kg "<<endl;
        cin>> we;
    }
        
    
    if (height=='C')
        {
        cout<<"enter u height in cm "<<endl;
        cin>> hei;
        hei = (hei/100);
        }
    else
    {
        cout<<"enter u height in m "<<endl;
        cin>> hei;
    }


    //doing the mathematics to cal bmi

    float bmi;

    bmi = (we /(hei*hei));
    system("cls");

 
    cout<<"YOUR BMI IS "<<setprecision(4)<<bmi<<endl;


    if(bmi<18.5)
    {
        cout<<"YOU ARE UNDERWEIGHT , PLEASE EAT MORE !!!!!!!!!!!!!!1"<<endl;  
    }

    else if (bmi>=18.5 && bmi<24.9)
    {
        cout<<" BRUH U ARE IN THE PERFECT STATE , DO GOOD BE GOOD!!!!!!!!!!!!!"<<endl;
    }

    else if (bmi>=25 && bmi<29.9)
    {
        cout<<"SORRY TO SAY THIS , BUT U ARE QUITE OVERWEIGHT, TRY DOING SOME HARD EXERCISE (WINTER ARC)"<<endl;
    }

    else
    {
        cout<<"YO MANNNNNNNNNNNN U HAV OBESITY , CONSULT A DOC"<<endl;
    }

    return 0;
    

}