#include <bits/stdc++.h>
using namespace std;

/*

                                                          //301

int c=1;
void f()
{
  if(c==4)
  {
    
    return ;// base condition 
  }  

  else{
    cout<<c;
    c++;
    f();
  }
}
int main()
{
  f();
}

output 123
*/

                                               //PRINT NAME 5 TIMES in 12345
/*


void name(string nam,int n)
{
  if(n==0)
  {
    return ;

  }

  name(nam,n-1);      //10 to 9
  cout<<n<<nam<<endl;;

}

int main()
{
  string nam;
  cout<<"enter name:";
  cin>>nam;
  int n;
  cout<<"enter how many times:";
  cin>>n;
  name(nam,n);
}
*/

                                                    //PRINT LINERALY FROM 1 TO N WIHTOUT VAR 
/*


void numbers(int num)
{
  if(num==0)
  {
    return ;
  }
                                        //5---->4 then 3 then 2 then 1 , then functioon ends , paused functionswill retreve and print the cout fincton anf ends 
  else{

  
    numbers(num-1);
    cout<<num<<" ";
  }


}

int main()
{
  cout<<"enter till what number";
  int num;
  cin>>num;
     numbers(num);

}                                        

*/

                                            // PRINT FORM N TO 1 REVERSE 

/*

void reverse(int number)
{
  if(number ==0)
  {
    return;
  }
  else{
    cout<<number<<" ";              //print then  step back so 5 , 4, ,3 ,2, 1
    reverse(number-1);
  }
}

int main()
{
  system("clear");
  int number;
  cout<<"enter number to reverse";
  cin>>number;
  reverse(number);
}
*/

                                        //sum of  first n numbers


/*
void calculation(int limit,int total)
{
  if(limit==0)
  {
    cout<<"added value is :"<<total;
    return;
  }

  else{
    calculation(limit-1,total+limit); //these 2 values are passed ot next recursion , so no need ot mention the datatype like int , then simply put the total+limit , it gives the value to next recursion
  }
}

int main()
{
  int total=0,limit;
  cout<<"enter number to add:";
  cin>>limit;

  calculation(limit,total);
}
*/

                                          //FACTORIAL OF A NUMBER

/*

int facto(int number)
{
  if(number==1)
  {
    return 1;
  }
  else{
  return number * facto(number-1);

  }
}

int main()
{
  int number;
  cout<<"enter number to find factorial:";
  cin>>number;
  cout<<"factorial of number is "<<facto(number)<<endl;
}
*/



//factorial in array

/*
int facto(int number,vector<int> &factos)
{
  if(number==1)
  {
    factos.push_back(1);
    return 1;
  }
  else{
   
    factos.push_back(number*facto(number-1,factos));
    return factos.back();
  }
}

int main()
{
  int number;
  vector<int> factos;
  cout<<"enter number to find factorial:";
  cin>>number;
  cout<<"factorial of number is "<<facto(number,factos)<<endl;

  for(auto it: factos)
  {
    cout<<it<<" ";
  }
}
*/
