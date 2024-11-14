#include<iostream>
#include<vector>
using namespace std;

// PALINDROME FOR INTEGER
class integer{

    public:

    int number;

    integer(int user_input)
    {
        number = user_input;

         int reverse=0,last ;
    

    int duplicate= number ;

    if(number<0)

    {
        cout<<"not palindrome as its lesser like -121 we get 121-"<<endl;
    }

    while(duplicate!=0)
    {
        last = duplicate%10;
        reverse = (reverse*10)+last;
        duplicate= duplicate/10;
    }

    if(number == reverse)
    {
        cout<<"its a palindromeee"<<endl;
    }

    else{
        cout<<"its giving "<<reverse<<" hence its not palindrome"<<endl;
    }


    }

};


class name{
    

    public:
    
     
     string nname;
    name(string stringing){
        nname = stringing ;
        
        vector<char>single;

        vector<char>:: iterator ending = single.end()-1;
        for(ending ; ending != single.begin();ending--)
        {
            single.push_back(*ending);
        }


        for(auto it : single)
        {
            cout<<"resule: \n"<<it<<endl;
        }

    }
};




int main()
{
    int data;
    string namee;
    char choice;
   cout<<"\n enter \"i \" to check palindrome for integer \n enter \"s \" to check palindrome for integer: "<<endl;
    cin>>choice;

    switch(choice)
    {
        case 'I':
        case 'i':
        {
            cout<<"enter the number \n ";
            cin>>data;
            integer picked = integer(data);
            break;
        }

        case 's':
        case 'S':
        {
            cout<<"enter the name \n ";
            cin>>namee;
            name dummy = name(namee);
            break;  
            
        }
    }

}
